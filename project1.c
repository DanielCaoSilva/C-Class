/*
 * main.c
 *
 *  Created on: Feb 26, 2019
 *      Author: dcaos
 */
#include<stdio.h>
#include<string.h>

int dispMenu();
void dispSeating();

const char FULL = '*';
const char EMPTY = '#';
const int numCols = 30;
const int Num_Rows = 15;
char chart[30][15];
double price;
int total = 0;
int seat = 450;
int endIt = 1;

int main() {
	int price[Num_Rows];
	int row2 = 0, column2, cost;
	int answer;
	printf("Theater Seating Program\n");

	for (int count = 0; count < Num_Rows; count++)
	{
		printf("Enter the price by row number, row %d : ", (count + 1));
		fflush(stdout);
		scanf("%d", &price[count]);
	}
	for (int i = 0; i <= Num_Rows; i++)
	{
		for (int j = 0; j <= numCols; j++)
			chart[i][j] = '#';
	}
	int choice;
	do {
		choice = dispMenu();
		switch (choice) {
		case 1:
			printf("View Seat Prices\n\n");
			for (int count = 0; count < Num_Rows; count++) {
				printf("The price for row %d : ", count + 1);
				printf("%d\n", price[count]);
			}
			break;
		case 2:
			printf("Purchase a Ticket\n");
			do
			{
				dispSeating();
				printf("\n# is an open seat and * is a taken seat.\n");
				printf("Enter the row you would like to sit in: ");
				fflush(stdout);
				scanf("%d", &row2);
				printf("Enter the seat you would like to sit in: ");
				fflush(stdout);
				scanf("%d", &column2);
				if (row2 > Num_Rows || column2 > numCols)
				{
					printf("Input a valid seat.");
				}
				else if (chart[row2][column2] == '*')
				{
					printf("That seat is taken, enter a new seat.");
					printf("\n");
				}
				else
				{
					cost = price[row2 - 1];\
					printf("That ticket costs: %d\n", cost);
					printf("Confirm Purchase? Enter (1 = YES / 2 = NO)");
					fflush(stdout);
					scanf("%d", &answer);
					if (answer == 1)
					{
						printf("Your ticket purchase has been completed.\n");
						chart[row2][column2] = FULL;
						total = total + cost;
					}
					else if (answer == 2)
					{
						printf("Would you like to look at another seat? (1=YES/2=NO)");
						fflush(stdout);
						scanf("%d", &endIt);
					}
					printf("Would you like to look at another seat?(1=YES/2=NO)");
					fflush(stdout);
					scanf("%d", &endIt);
				}
			} while (endIt == 1);
			break;
		case 3:
			printf("Check available seats\n\n");
			dispSeating();
			break;
		case 4:
			printf("The total sales are: %d\n\n", total);
			break;
		case 5:
			printf("quit\n");
			break;
		default:
			printf("Error input\n");
		}
	} while (choice != 5);
	return 0;
}
int dispMenu() {
	int MenuChoice;
	printf(" \n\tMAIN MENU\n");
	printf(" 1. Check Seat Prices.\n");
	printf(" 2. Buy Tickets.\n");
	printf(" 3. Check available Seats.\n");
	printf(" 4. See the total sales.\n");
	printf(" 5. End the program.\n\n");
	printf("Enter your choice: ");
	fflush(stdout);
	scanf("%d", &MenuChoice);
	printf("\n\n");
	return MenuChoice;
}
void dispSeating() {
	printf("\t       Seats\n");
	printf("       1 2 3 4 5 6 7 8 9 10");
	for (int i = 11; i <= 30; i++) {
		printf("%d", i);
	}
	printf("\n");
	for (int count = 1; count <= Num_Rows; ++count) {
		if (count < 10) {
			printf("\n Row %d", count);
		} else
			printf("\nRow %d", count);
		for (int count2 = 1; count2 <= numCols; ++count2) {
			printf(" %c", chart[count][count2]);
		}
	}
	printf("\n");

}
