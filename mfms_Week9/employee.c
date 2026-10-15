#include <stdio.h>
#include <string.h>
#include "employees.h"

char employeeID[50][20];
char employeeName[50][50];
char department[50][50];
float basicSalary[50];
float housing[50];
float transport[50];
int count = 0;

void addEmployee(void)
{
    if (count >= 50)
    {
        printf("Employee list is full.\n");
        return;
    }

    printf("Enter Employee ID: ");
    scanf("%19s", employeeID[count]);

    printf("Enter Employee Name: ");
    scanf(" %49[^\n]", employeeName[count]);

    printf("Enter Department: ");
    scanf(" %49[^\n]", department[count]);

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary[count]);

    printf("Enter Housing Allowance: ");
    scanf("%f", &housing[count]);

    printf("Enter Transport Allowance: ");
    scanf("%f", &transport[count]);

    count++;

    printf("Employee added successfully.\n");
}

void displayEmployee(void)
{
    int i;

    if (count == 0)
    {
        printf("No employees available.\n");
        return;
    }

    for (i = 0; i < count; i++)
    {
        printf("\nEmployee ID: %s\n", employeeID[i]);
        printf("Employee Name: %s\n", employeeName[i]);
        printf("Department: %s\n", department[i]);
        printf("Basic Salary: %.2f\n", basicSalary[i]);
        printf("Housing Allowance: %.2f\n", housing[i]);
        printf("Transport Allowance: %.2f\n", transport[i]);
    }
}

void searchEmployee(void)
{
    char id[20];
    int i;

    printf("Enter Employee ID to search: ");
    scanf("%19s", id);

    for (i = 0; i < count; i++)
    {
        if (strcmp(employeeID[i], id) == 0)
        {
            printf("Employee Name: %s\n", employeeName[i]);
            printf("Department: %s\n", department[i]);
            printf("Basic Salary: %.2f\n", basicSalary[i]);
            return;
        }
    }

    printf("Employee not found.\n");
}

void calculateSalary(void)
{
    int i;
    float totalSalary;

    for (i = 0; i < count; i++)
    {
        totalSalary = basicSalary[i] + housing[i] + transport[i];

        printf("\nEmployee: %s\n", employeeName[i]);
        printf("Total Salary: %.2f\n", totalSalary);
    }
}