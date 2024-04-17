#include<stdio.h>
#include<conio.h>

main() {

int Celcius;
float Fahrenheit;

clrscr();

 printf("Convert tempreture from Celsios to fahrenheit.\n\n");
 printf("Enter tempreture in Celcius:- ");
 scanf("%d", &Celcius);
 Fahrenheit = Celcius * 1.8 + 32;
 printf("\nThe conversion of %d Celcius to Fahrenheit is %f.\n\n", Celcius, Fahrenheit);
 printf("Thank you.");

getch();

}