#include<stdio.h>
#include<stdlib.h>
#include"Header.h"

int main(void)
{
	o o1 = { "AAA00000",{1994,3,4},1487 };
	o o2 = { "BBB11100",{1894,9,4},14547 };
	o o3 = { "CC221210",{1004,6,4},1547 };

	printf("      ***********************\n");
	printf("      *   訂單資料   *\n");
	printf("      ***********************\n");

	printf("===============================\n");
	printf(" 訂單編號     訂貨日期   訂貨金額  \n");
	printf("================================\n");
	
	printf("%-10s %8d/%02d/02%d    NT$%10d\n", o1.num, o1.d.year, o1.d.mon, o1.d.day, o1.amo);
	printf("%-10s %8d/%02d/02%d     US$%10d\n", o2.num, o2.d.year, o2.d.mon, o2.d.day, o2.amo);
	printf("%-10s %8d/%02d/02%d     HK$%10d\n", o3.num, o3.d.year, o3.d.mon, o3.d.day, o3.amo);
	
	system("pause");
	return 0;
}