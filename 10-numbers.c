#include <stdio.h>

int sort(int val1, int val2, int val3, int val4, int val5, int val6, int val7, int val8, int val9, int val10); //prototype function

int main()
{
	int num1, num2, num3, num4, num5, num6;
	int num7, num8, num9, num10;
	float average;

	printf("Please input 10 numbers:\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	scanf("%d", &num4);
	scanf("%d", &num5);
	scanf("%d", &num6);
	scanf("%d", &num7);
	scanf("%d", &num8);
	scanf("%d", &num9);
	scanf("%d", &num10);
	average = (num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9 + num10)/10.0;
	printf("Average: %f\n", average);
	sort(num1, num2, num3, num4, num5, num6, num7, num8, num9, num10);
}

int sort(int val1, int val2, int val3, int val4, int val5, int val6, int val7, int val8, int val9, int val10)
{
	int tmp, sortFlag;
	sortFlag = 0;

	if (val1 > val2)
	{
		tmp = val1;
		val1 = val2;
		val2 = tmp;
		sortFlag = 1;
	}
	if (val2 > val3)
	{
		tmp = val2;
		val2 = val3;
		val3 = tmp;
		sortFlag = 1;
	}
	if (val3 > val4)
	{
		tmp = val3;
		val3 = val4;
		val4 = tmp;
		sortFlag = 1;
	}
	if (val4 > val5)
	{
		tmp = val4;
		val4 = val5;
		val5 = tmp;
		sortFlag = 1;
	}
	if (val5 > val6)
	{
		tmp = val5;
		val5 = val6;
		val6 = tmp;
		sortFlag = 1;
	}
	if (val6 > val7)
	{
		tmp = val6;
		val6 = val7;
		val7 = tmp;
		sortFlag = 1;
	}
	if (val7 > val8)
	{
		tmp = val7;
		val7 = val8;
		val8 = tmp;
		sortFlag = 1;
	}
	if (val8 > val9)
	{
		tmp = val8;
		val8 = val9;
		val9 = tmp;
		sortFlag = 1;
	}
	if (val9 > val10)
	{
		tmp = val9;
		val9 = val10;
		val10 = tmp;
		sortFlag = 1;
	}
	if (sortFlag == 1)
	{
		sort(val1, val2, val3, val4, val5, val6, val7, val8, val9, val10);
	}
	else
	{
		printf("Smallest: %d\n", val1);
		printf("Biggest: %d\n", val10);
	}
}
