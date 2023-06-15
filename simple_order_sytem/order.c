#include <stdio.h>
#include <stdlib.h>

/**
 * calculateTotal - Calculate amount based on snackchoice and quantity
 * @snackChoice: The chosen snack number
 * @quantity: The quantity of snacks to order
 * Return: The total amount for the order
 */
float calculateTotal(int snackChoice, int quantity)
{
	float price;

	switch (snackChoice)
	{
		case 1:
			price = 2.50;
			break;
		case 2:
			price = 3.00;
			break;
		case 3:
			price = 2.00;
			break;
		default:
			price = 0.00;
			break;
	}
	return (price * quantity);
}

/**
 * customer - Customer section implementation
 */
void customer(void)
{
	int choice, snackChoice, quantity;

	printf("\nCUSTOMER SECTION\n");
	printf("1. View Menu\n");
	printf("2. Place Order\n");
	printf("3. View Order History\n");
	printf("4. Go Back to Main Menu\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch (choice)
	{
		case 1:
			printf("\n-- MENU --\n");
			printf("1. Snack A - $2.50\n");
			printf("2. Snack B - $3.00\n");
			printf("3. Snack C - $2.00\n");
			break;
		case 2:
			printf("\n-- PLACE ORDER --\n");
			printf("Enter the number of the snack you want to order: ");
			scanf("%d", &snackChoice);
			printf("Enter the quantity: ");
			scanf("%d", &quantity);
			printf("\nOrder placed successfully!\n");
			printf("Snack: Snack %d\n", snackChoice);
			printf("Quantity: %d\n", quantity);
			printf("Total amount: $%.2f\n", calculateTotal(snackChoice, quantity));
			break;
		case 3:
			printf("\n-- ORDER HISTORY --\n");
			printf("Displaying order history:\n");
			break;
		case 4:
			printf("\nReturning to the main menu.\n");
			break;
		default:
			printf("\nInvalid choice.\n");
			break;
	}
}

/**
 * aboutproject - About project implementation
 */
void aboutproject(void)
{
	printf("\nABOUT THE PROJECT\n");
	printf("This project is a snack ordering system that allows customers to view the menu, place orders, and view their order history.\n");
	printf("It is designed to provide a convenient and efficient way for customers to satisfy their snack cravings.\n");
	printf("The project is implemented in the C programming language.\n");
	printf("For any further information, please contact the project team.\n");
}

/**
 * main_menu - Entry point of the program
 * Return: 0
 */
int main_menu(void)
{
	int select;

	printf("\t--------------------------------------------\n");
	printf("\t\t\tWELCOME TO SNACK ORDERING SYSTEM\n");
	printf("\t1. CUSTOMER SECTION--->\n\t2. ABOUT THE PROJECT-->\n\t3. EXIT-->\n\n\n\tEnter your choice-->");
	printf("\t----------------------------------------------\n");

	scanf("%d", &select);
	if (select == 1)
	{
		customer();
	}
	else if (select == 2)
	{
		aboutproject();
	}
	else if (select == 3)
	{
		printf("\t--------------------------------\n");
		printf("\t\tTHANK YOU\n");
		printf("\t\tFeeling hungry? Time to snack\n");
		printf("\t---------------------------------\n");
		exit(0);
	}
	return (0);
}

/**
 * main - Entry point of the program
 * Return: 0
 */
int main(void)
{
	main_menu();
	return (0);
}

