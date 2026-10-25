#include <stdio.h>
void main()
{
int choice;
float balance, amount;
printf("Enter the account balance: ");
scanf("%f", &balance);
printf("\n1. Balance Inquiry");
printf("\n2. Cash Withdrawal");
printf("\n3. Cash Deposit");
printf("\nEnter your choice number: ");
scanf("%d", &choice);
switch (choice)
    {
        case 1:
            printf("Current balance: %.2f", balance);
            break;

        case 2:
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount <= balance)
            {
                balance = balance - amount;
                printf("Transaction successful");
                printf("\nRemaining balance: %.2f", balance);
            }
            else
            {
                printf("Insufficient balance");
            }
            break;

        case 3:
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            balance = balance + amount;

            printf("Deposit successful");
            printf("\nUpdated balance: %.2f", balance);
            break;
    default:
        printf("Invalid option");
    }
}
