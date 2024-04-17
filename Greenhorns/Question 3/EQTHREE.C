#include<stdio.h>
#include<conio.h>

main() {

int A;
int B;
int C;

clrscr();

 printf("Find the third angle of a right triangle if two other angles are given.\n\n");
 printf("Enter first angle :- ");
 scanf("%d", &A);
 printf("\nEnter second angle :- ");
 scanf("%d", &B);
 C = 180 - A - B;
 printf("\nThe third angle is %d.\n\n", C);
 printf("Thank you.");



getch();

}