#include <stdio.h>

void balance(float *bal)
{
    printf("Balance: %.2f\n", *bal);
}

void deposit(float *bal)
{
    float amount;

    printf("Enter amount: ");
    scanf("%f", &amount);

    if(amount > 0)
    {
        *bal = *bal + amount;
        printf("Deposit successful\n");
    }
    else
        printf("Invalid amount\n");
}

void withdraw(float *bal)
{
    float amount;

    printf("Enter amount: ");
    scanf("%f", &amount);

    if(amount <= 0)
        printf("Invalid amount\n");
    else if(amount > *bal)
        printf("Insufficient balance\n");
    else
    {
        *bal = *bal - amount;
        printf("Withdrawal successful\n");
    }
}

void transfer(float *bal)
{
    float amount;

    printf("Enter transfer amount: ");
    scanf("%f", &amount);

    if(amount <= 0)
        printf("Invalid amount\n");
    else if(amount > *bal)
        printf("Insufficient balance\n");
    else
    {
        *bal = *bal - amount;
        printf("Transfer successful\n");
    }
}

void details(char name[], int acc, float *bal)
{
    printf("\nAccount Name: %s", name);
    printf("\nAccount Number: %d", acc);
    printf("\nBalance: %.2f\n", *bal);
}

int main()
{
    int choice, acc;
    char name[50];
    float bal;

    printf("Enter account name: ");
    scanf("%s", name);

    printf("Enter account number: ");
    scanf("%d", &acc);

    printf("Enter initial balance: ");
    scanf("%f", &bal);

    do
    {
        printf("\n\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Transfer Money");
        printf("\n5. Display Account Details");
        printf("\n6. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                balance(&bal);
                break;

            case 2:
                deposit(&bal);
                break;

            case 3:
                withdraw(&bal);
                break;

            case 4:
                transfer(&bal);
                break;

            case 5:
                details(name, acc, &bal);
                break;

            case 6:
                printf("Thank you!\n");
                break;

            default:
                printf("Invalid choice\n");
        }

    } while(choice != 6);

    return 0;
}