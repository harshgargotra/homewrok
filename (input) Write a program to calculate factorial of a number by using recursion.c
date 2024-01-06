//title of program
//program to calculate factorial of a number by using recursion
//header file
#include<stdio.h>
//main function heading
void main()
{
//variable declaration
int num,fact1;
//inout statement from user
printf("Enter the number ");
scanf("%d",&num);
//assignment of value
fact1=fact(num);
//output statement
printf("Factorial=%d",fact1);
}
//taking function for calculating factorial of a number
int fact(int n)
{
//if else statement
if(n==0)
//return statement(if part)
return 1;
else
//return statement(else part)
return n*fact(n-1);
}
