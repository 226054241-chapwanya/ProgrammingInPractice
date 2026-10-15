#include <stdio.h>
#include "utilities.h"

void displayWelcome(void)
{
    printf("================================\n");
    printf(" Employee Management System\n");
    printf("================================\n");
}

void displayMenu(void)
{
    printf("\n===== MAIN MENU =====\n");
    printf("1. Add Employee\n");
    printf("2. Display Employees\n");
    printf("3. Search Employee\n");
    printf("4. Calculate Salary\n");
    printf("5. Exit\n");
    printf("Enter choice: ");
}