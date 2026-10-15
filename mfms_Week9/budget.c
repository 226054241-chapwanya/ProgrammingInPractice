#include <stdio.h>
#include "budget.h"

void calculateBudget(float revenue, float expenses)
{
    float balance;

    balance = revenue - expenses;

    printf("Budget Balance: %.2f\n", balance);

    if (balance > 0)
    {
        printf("SURPLUS\n");
    }
    else if (balance < 0)
    {
        printf("DEFICIT\n");
    }
    else
    {
        printf("BALANCED\n");
    }
}