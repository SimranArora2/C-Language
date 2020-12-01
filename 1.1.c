/*
Write a program to input following details of a under-graduate student

i       Name (string)

ii      Age (integer)

iii     Contact number (long long integer)

iv     Percentage in metric class (float / double)

Your program should generate output as follows:

*************STUDENT DATABASE******************

Enter name in capital letters: xyz pqr

Enter age                           : 18

Enter contact number        : 9876543210

Enter percentage in metric : 86.84

Thank you. Your data has been saved in our system

************************************************************/

#include<stdio.h>
int main()
{
    char name ;
    gets(name);
    puts(name);
    int age ;
    long long int num ;
    float percentage;
    printf("\nEnter your name in block letters :");
    scanf("%s",&name);  
    printf("\nEnter age :");
    scanf("%d",&age);
    printf("\nenter your phone number");
    scanf("%lli", &num);
    printf("\nenter your percentage in metric");
    scanf("%f",&percentage);
    printf("\nThanks ! Your data has been successfully saved in our system !");

    return 0 ;
}