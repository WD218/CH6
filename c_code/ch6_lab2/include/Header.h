#pragma once
#include<stdio.h>

typedef struct _dates
{
	int year, mon, day;

}d;

typedef struct _order
{
	char num[11];
	d d;
	int amo;

}o;