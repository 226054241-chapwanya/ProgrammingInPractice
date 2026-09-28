#include <stdio.h>
#include <string.h>

int main() {
        float salary[50];
        float highest=0;
        float lowest=0;
        float average=0;
        float search;
        int found=0;
        float total=0;
        int i;

        for(int i=0;i<50;i++) {
            printf("Enter salary: \n", i  );
            scanf("%f", &salary[i]);
            

        
        if(i==0){
           highest = salary[i];
           lowest = salary[i];
        }

        if(salary[i]>highest){
            highest = salary[i];
        }

        if(salary[i]<lowest){
            lowest = salary[i];
        }
}
        printf("\nSalaries are\n");

        for(int i=0;i<50;i++){
            printf("Salary %.2f\n", salary[i]);
            total=total + salary[i];
            
            
            if (salary[i] == search) {
             found = 1;
             printf("Value found at position %d\n", i);
             break;
         }
        }
        printf("Enter search: ");
        scanf("%f", &search);
    for(int i=0;i<50;i++) {
         if (salary[i] == search) {
             found = 1;
             printf("Value found at position %d\n", i);
             break;
         }
    }
         if (!found) {
             printf("Value not found.\n");
         }
        average= total/50 ;
         printf("lowest: %.2f\n", lowest);
         printf("Highest: %.2f\n", highest);
         printf("Average: %.2f\n", average);
    return 0;
}