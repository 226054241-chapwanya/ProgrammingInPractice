#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "reports.h"
#include "utilities.h"

int main()
{
    int choice;
    float revenue, expenses;

    displayWelcome();

    do
    {
        displayMenu();
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployee();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                calculateSalary();
                break;

            case 5:
                printf("Enter revenue: ");
                scanf("%f", &revenue);

                printf("Enter expenses: ");
                scanf("%f", &expenses);

                calculateBudget(revenue, expenses);
                break;

            case 6:
                displayReport();
                break;

            case 7:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 7);

    return 0;
}