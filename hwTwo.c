//Daniel Silva
#include<stdio.h>

void main()
{
	//Restaurant Bill - Problem 1
	printf("Problem 1 - Restaurant Bill\n");
	double tax = .0675;
	double mealCost = 88.67;
	double tip = .2*((mealCost*tax)+mealCost);
	double totalBill = tip+(mealCost*tax)+mealCost;
	printf("Meal Cost: $%.2f\n",mealCost);
	printf("Tax: $%.2f\n",tax*mealCost);
	printf("Tip: $%.2f\n",tip);
	printf("Total Bill: $%.2f\n\n\n",totalBill);

	//Ocean Levels - Problem 2
	printf("Problem 2 - Ocean Levels\n");
	printf("In 5 years: %.2f\n",1.5*5);
	printf("In 7 years: %.2f\n",1.5*7);
	printf("In 10 year: %.2f\n\n\n",1.5*10);

	//Stock Trading Program Bill - Program 3
	printf("Problem 3 - Stock Trading Program Bill\n");
	int numShares = 1000;
	double priceBought = 45.5;
	double stockBrokerCommish = .02;
	double priceSold = 56.90;
	double amountPaid = priceBought*numShares;
	double amountSold = priceSold*numShares;
	printf("The amount of money Joe paid for his stock: $%.2f\n",amountPaid);
	printf("The amount of commission Joe paid his broker when he bought: $%.2f\n",amountPaid*stockBrokerCommish);
	printf("The amount that Joe sold his stock for: $%.2f\n",amountSold);
	printf("The amount of commission Joe paid his broker when he sold: $%.2f\n",amountSold*stockBrokerCommish);
	printf("Joe's profit: $%.2f\n\n\n",(amountSold-amountPaid)-((amountSold+amountPaid)*stockBrokerCommish));

	//Pattern Displays - Program 4
	printf("Problem 4 - Pattern Displays\n");
	printf("Pattern A\n");
	for(int i = 0; i<=10; i++)
	{
		for(int j = 0; j<=i;j++)
		{
			printf("+ ");
		}
		printf("\n");
	}
	printf("Pattern B\n");
	for(int k=10; k>=1; --k)
	{
		for(int m=1; m<=k; ++m)
	    {
			printf("+ ");
	    }
	    printf("\n");
	}
}
