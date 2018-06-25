#include "calendar.h"

void year(int year)
{		
	int num;
	int yr = year;
	while(yr >= 1928)
		yr -= 28;
	yr = yr - 1900;
	switch(yr)
	{
		case 0: num = 0; break;
		case 1: num = 1; break;
		case 2: num = 2; break;
		case 3: num = 3; break;
		case 4: num = 4; break;
		case 5: num = 6; break;
		case 6: num = 0; break;
		case 7: num = 1; break;
		case 8: num = 3; break;
		case 9: num = 4; break;
		case 10: num = 5; break;
		case 11: num = 6; break;
		case 12: num = 1; break;
		case 13: num = 2; break;
		case 14: num = 3; break;
		case 15: num = 4; break;
		case 16: num = 6; break;
		case 17: num = 0; break;
		case 18: num = 1; break;
		case 19: num = 2; break;
		case 20: num = 3; break;
		case 21: num = 5; break;
		case 22: num = 6; break;
		case 23: num = 0; break;
		case 24: num = 2; break;
		case 25: num = 3; break;
		case 26: num = 4; break;
		case 27: num = 5; break;
		case 28: num = 6; break;
	}
	printf("\nJanuary\n");
	month(num, 31);
	printf("\nFebruary\n");
	num = (num + 3) % 7;
	if(isLeap(year))
	{
		month(num, 29);
		num = (num + 1) % 7;
	}
	else month(num, 28);
	printf("\nMarch\n");
	month(num, 31);
	num = (num + 3) % 7;
	printf("\nApril\n");
	month(num, 30);
	num = (num + 2) % 7;
	printf("\nMay\n");
	month(num, 31);
	num = (num + 3) % 7;
	printf("\nJune\n");
	month(num, 30);
	num = (num + 2) % 7;
	printf("\nJuly\n");
	month(num, 31);
	num = (num + 3) % 7;
	printf("\nAugust\n");
	month(num, 31);
	num = (num + 3) % 7;
	printf("\nSeptember\n");
	month(num, 30);
	num = (num + 2) % 7;
	printf("\nOctober\n");
	month(num, 31);
	num = (num + 3) % 7;
	printf("\nNovember\n");
	month(num, 30);
	num = (num + 2) % 7;
	printf("\nDecember\n");
	month(num, 31);
}
