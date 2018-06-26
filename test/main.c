#define CTEST_MAIN

#include <ctest.h>
#include "calendar.h"

CTEST(leap_year_check, correct_leap_year_check)
{
    bool result = isLeap(2008);
    ASSERT_TRUE(result);
}

CTEST(leap_year_check, cor_leap_year_check)
{
    bool result = isLeap(400);
    ASSERT_TRUE(result);
}

CTEST(leap_year_check, incorrect_leap_year_check)
{
    bool result = isLeap(300);
    ASSERT_FALSE(result);
}

CTEST(leap_year_check, incor_leap_year_check)
{
    bool result = isLeap(2009);
    ASSERT_FALSE(result);
}

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}
