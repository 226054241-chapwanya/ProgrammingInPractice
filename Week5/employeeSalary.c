#include <stdio.h>

int main() {
    float salary[50]; 
    float total = 0; 
    float highest = 0; 
    float lowest = 0; 
    float average; 
 
    for (int i = 0; i < 50; i++) { 
 
        printf("Enter salary for employee %d: ", i + 1); 
        scanf("%f", &salary[i]); 
 
        total = total + salary[i]; 
 
        if (i == 0) { 
            highest = salary[i]; 
            lowest = salary[i]; 
        } 
 
 
        if (salary[i] > highest) { 
            highest = salary[i]; 
        } 
 
        if (salary[i] < lowest) { 
            lowest = salary[i]; 
        } 
    } 
 
    average = total / 50; 
 
    printf("\n--- Salary Report ---\n"); 
    printf("Average salary: %.2f\n", average); 
    printf("Highest salary: %.2f\n", highest); 
    printf("Lowest salary: %.2f\n", lowest);                                                                        
    return 0;
}