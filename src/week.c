#include "calendar.h"

void week(int num, int starting_date, int days_in_month)
{
	int s = starting_date;
	printf("\n");
	for(int i = 0; i <= 6; i++)
	{
		if(i < num) printf("   ");
		else if(s <= days_in_month)
		{
			if(s < 10) printf(" ");
			printf("%d ", s++);
		}
	}
}
