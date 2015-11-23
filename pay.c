#include <stdio.h>

float pay(int rate, int hours); //prototype

int main()
{
	int payrate = 1, time;
	float currPay, totalPay;

	while (payrate != 0)
	{
		printf("Dollars per hour: ");
		scanf("%d", &payrate);
		printf("Hours: ");
		scanf("%d", &time);
		currPay = pay(payrate, time);
		totalPay = totalPay + currPay;

		printf("Pay at %d dollars/hr for %d hours is %f dollars.\n", payrate, time, currPay);
	}

	printf("Total pay is %f dollars.\n", totalPay);
}

float pay(int rate, int hours)
{
	if (hours < 41)
	{
		return rate * hours * 1.0;
	}
	else if ((hours > 40) && (hours < 61))
	{
		return rate * hours * 1.5;
	}
	else
	{
		return rate * hours * 2.0;
	}
}
