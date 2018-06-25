#define CTEST_MAIN

#include <ctest.h>
#include <stdbool.h>

bool isLeap(int year)
{
	if(year % 4 == 0)
		{
			if(year % 100 == 0)
			{
				if(year % 400 == 0)
					return true;
				else return false;
			}
			else
				return true;
		}
	return false;
}

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
