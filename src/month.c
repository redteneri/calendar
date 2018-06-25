#include "calendar.h"

void month(int num, int days_in_month)
{	
	printf("Mo Tu We Th Fr Sa Su");
	week(num, 1, days_in_month);
	week(0, 8 - num, days_in_month);
	week(0, 15 - num, days_in_month);
	week(0, 22 - num, days_in_month);
	if(29 - num <= days_in_month)
	{
		week(0, 29 - num, days_in_month);
		if(36 - num <= days_in_month)
			week(0, 36 - num, days_in_month);	
	}
}
