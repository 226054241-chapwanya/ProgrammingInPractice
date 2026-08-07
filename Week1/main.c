#include <stdio.h> 
int main() 
{ 
char municipality[60]; 
char mayor[60]; 
int population; 

printf("Municipal Financial Management System\n\n");
printf("Welcome to Windhoek Municipality\n"); 
 
printf("Enter Municipality Name: "); 
scanf("%59s", municipality);  
printf("Enter Mayor: "); 
scanf("%59s", mayor); 
printf("Enter Population: "); 
scanf("%d", &population);
 
printf("\n---------------------------------\n"); 
printf("Municipality : %s\n", municipality); 
printf("Mayor       
 : %s\n", mayor); 
printf("Population   : %d\n", population); 
return 0; 
} 
