#include<stdio.h>
#include<conio.h>

main() {

int Base_salary;
int HRA;
int DA;
int TA;
int Rs;

clrscr();

 printf("Calculate gross salary by adding % of HRD, DA, and TA.\n\n");
 printf("Enter Base Salary :- ");
 scanf("%d", &Base_salary);
 printf("\nEnter House Rent Allowance (HRA) :- ");
 scanf("%d", &HRA);
 printf("\nEnater Dearness Allowance (DA) :- ");
 scanf("%d", &DA);
 printf("\nEnter Travelling Allowance (TA) :- ");
 scanf("%d", &TA);
 HRA = (Base_salary * HRA) / 100;
 DA = (Base_salary * DA) / 100;
 TA = (Base_salary * TA) / 100;
 Rs = Base_salary + HRA + DA + TA;
 printf("\nThe gross salary is Rs.%d\n\n", Rs);
 printf("Thank you.");

getch();

}