#include<stdio.h>
#include<stdlib.h>
#include"Header.h"

void sub(st *p);

int main()
{
	int i;
	st *ps;
	
	st sta[3] = { {"970101","四子一乙","王曉明",61,71,81},{"970102","四子一乙","李曉明",62,72,82},{"970103","四子一乙","陳曉明",63,73,83} };
	ps = sta;
	printf("\n");
	printf("===============================================\n");
	printf("   學號    班級\t姓名\t    國文   英文    數學\n");
	printf("===============================================\n");

	for (i = 0; i < 3; i++)
	{
		printf("%6s %-10s %8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->cla, (ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	printf("\t呼叫函式前\n\n");
	sub(ps);
	printf("\t呼叫函式後\n\n");

	for (i = 0; i < 3; i++)
	{
		printf("%6s %-10s %8s %4d %4d %4d\n", (ps + i)->num, (ps + i)->cla, (ps + i)->name, (ps + i)->score[0], (ps + i)->score[1], (ps + i)->score[2]);
	}

	printf("\n");
	system("PAUSE");
		return 0;


}

void sub(st *p)
{
	for (int i = 0; i < 3; i++)
	{
		(p + i)->score[0] += 10;

		(p + i)->score[1] += 10;
		(p + i)->score[2] += 10;
	}
}