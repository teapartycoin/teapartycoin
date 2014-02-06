#include <boost/algorithm/string.hpp>
#include <boost/foreach.hpp>
#include <boost/test/unit_test.hpp>

#include "util.h"

BOOST_AUTO_TEST_SUITE(getarg_tests)

static void
ResetArgs(const std::string& strArg)
{
    std::vector<std::string> vecArg;
    boost::split(vecArg, strArg, boost::is_space(), boost::token_compress_on);

    // Insert dummy executable name:
    vecArg.insert(vecArg.begin(), "testbitcoin");

    // Convert to char*:
    std::vector<const char*> vecChar;
    BOOST_FOREACH(std::string& s, vecArg)
        vecChar.push_back(s.c_str());

    ParseParameters(vecChar.size(), &vecChar[0]);
}

BOOST_AUTO_TEST_CASE(boolarg)
{
    ResetArgs("-TPC");
    BOOST_CHECK(GetBoolArg("-TPC"));
    BOOST_CHECK(GetBoolArg("-TPC", false));
    BOOST_CHECK(GetBoolArg("-TPC", true));

    BOOST_CHECK(!GetBoolArg("-fo"));
    BOOST_CHECK(!GetBoolArg("-fo", false));
    BOOST_CHECK(GetBoolArg("-fo", true));

    BOOST_CHECK(!GetBoolArg("-TPCo"));
    BOOST_CHECK(!GetBoolArg("-TPCo", false));
    BOOST_CHECK(GetBoolArg("-TPCo", true));

    ResetArgs("-TPC=0");
    BOOST_CHECK(!GetBoolArg("-TPC"));
    BOOST_CHECK(!GetBoolArg("-TPC", false));
    BOOST_CHECK(!GetBoolArg("-TPC", true));

    ResetArgs("-TPC=1");
    BOOST_CHECK(GetBoolArg("-TPC"));
    BOOST_CHECK(GetBoolArg("-TPC", false));
    BOOST_CHECK(GetBoolArg("-TPC", true));

    // New 0.6 feature: auto-map -nosomething to !-something:
    ResetArgs("-noTPC");
    BOOST_CHECK(!GetBoolArg("-TPC"));
    BOOST_CHECK(!GetBoolArg("-TPC", false));
    BOOST_CHECK(!GetBoolArg("-TPC", true));

    ResetArgs("-noTPC=1");
    BOOST_CHECK(!GetBoolArg("-TPC"));
    BOOST_CHECK(!GetBoolArg("-TPC", false));
    BOOST_CHECK(!GetBoolArg("-TPC", true));

    ResetArgs("-TPC -noTPC");  // -TPC should win
    BOOST_CHECK(GetBoolArg("-TPC"));
    BOOST_CHECK(GetBoolArg("-TPC", false));
    BOOST_CHECK(GetBoolArg("-TPC", true));

    ResetArgs("-TPC=1 -noTPC=1");  // -TPC should win
    BOOST_CHECK(GetBoolArg("-TPC"));
    BOOST_CHECK(GetBoolArg("-TPC", false));
    BOOST_CHECK(GetBoolArg("-TPC", true));

    ResetArgs("-TPC=0 -noTPC=0");  // -TPC should win
    BOOST_CHECK(!GetBoolArg("-TPC"));
    BOOST_CHECK(!GetBoolArg("-TPC", false));
    BOOST_CHECK(!GetBoolArg("-TPC", true));

    // New 0.6 feature: treat -- same as -:
    ResetArgs("--TPC=1");
    BOOST_CHECK(GetBoolArg("-TPC"));
    BOOST_CHECK(GetBoolArg("-TPC", false));
    BOOST_CHECK(GetBoolArg("-TPC", true));

    ResetArgs("--noTPC=1");
    BOOST_CHECK(!GetBoolArg("-TPC"));
    BOOST_CHECK(!GetBoolArg("-TPC", false));
    BOOST_CHECK(!GetBoolArg("-TPC", true));

}

BOOST_AUTO_TEST_CASE(stringarg)
{
    ResetArgs("");
    BOOST_CHECK_EQUAL(GetArg("-TPC", ""), "");
    BOOST_CHECK_EQUAL(GetArg("-TPC", "eleven"), "eleven");

    ResetArgs("-TPC -tpc");
    BOOST_CHECK_EQUAL(GetArg("-TPC", ""), "");
    BOOST_CHECK_EQUAL(GetArg("-TPC", "eleven"), "");

    ResetArgs("-TPC=");
    BOOST_CHECK_EQUAL(GetArg("-TPC", ""), "");
    BOOST_CHECK_EQUAL(GetArg("-TPC", "eleven"), "");

    ResetArgs("-TPC=11");
    BOOST_CHECK_EQUAL(GetArg("-TPC", ""), "11");
    BOOST_CHECK_EQUAL(GetArg("-TPC", "eleven"), "11");

    ResetArgs("-TPC=eleven");
    BOOST_CHECK_EQUAL(GetArg("-TPC", ""), "eleven");
    BOOST_CHECK_EQUAL(GetArg("-TPC", "eleven"), "eleven");

}

BOOST_AUTO_TEST_CASE(intarg)
{
    ResetArgs("");
    BOOST_CHECK_EQUAL(GetArg("-TPC", 11), 11);
    BOOST_CHECK_EQUAL(GetArg("-TPC", 0), 0);

    ResetArgs("-TPC -tpc");
    BOOST_CHECK_EQUAL(GetArg("-TPC", 11), 0);
    BOOST_CHECK_EQUAL(GetArg("-tpc", 11), 0);

    ResetArgs("-TPC=11 -tpc=12");
    BOOST_CHECK_EQUAL(GetArg("-TPC", 0), 11);
    BOOST_CHECK_EQUAL(GetArg("-tpc", 11), 12);

    ResetArgs("-TPC=NaN -tpc=NotANumber");
    BOOST_CHECK_EQUAL(GetArg("-TPC", 1), 0);
    BOOST_CHECK_EQUAL(GetArg("-tpc", 11), 0);
}

BOOST_AUTO_TEST_CASE(doubledash)
{
    ResetArgs("--TPC");
    BOOST_CHECK_EQUAL(GetBoolArg("-TPC"), true);

    ResetArgs("--TPC=verbose --tpc=1");
    BOOST_CHECK_EQUAL(GetArg("-TPC", ""), "verbose");
    BOOST_CHECK_EQUAL(GetArg("-tpc", 0), 1);
}

BOOST_AUTO_TEST_CASE(boolargno)
{
    ResetArgs("-noTPC");
    BOOST_CHECK(!GetBoolArg("-TPC"));
    BOOST_CHECK(!GetBoolArg("-TPC", true));
    BOOST_CHECK(!GetBoolArg("-TPC", false));

    ResetArgs("-noTPC=1");
    BOOST_CHECK(!GetBoolArg("-TPC"));
    BOOST_CHECK(!GetBoolArg("-TPC", true));
    BOOST_CHECK(!GetBoolArg("-TPC", false));

    ResetArgs("-noTPC=0");
    BOOST_CHECK(GetBoolArg("-TPC"));
    BOOST_CHECK(GetBoolArg("-TPC", true));
    BOOST_CHECK(GetBoolArg("-TPC", false));

    ResetArgs("-TPC --noTPC");
    BOOST_CHECK(GetBoolArg("-TPC"));

    ResetArgs("-noTPC -TPC"); // TPC always wins:
    BOOST_CHECK(GetBoolArg("-TPC"));
}

BOOST_AUTO_TEST_SUITE_END()
