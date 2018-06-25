#ifndef CALENDAR_H
#define CALENDAR_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isLeap(int year);
void week(int num, int starting_date, int days_in_month);
void month(int num, int days_in_month);
void year(int year);
#endif
