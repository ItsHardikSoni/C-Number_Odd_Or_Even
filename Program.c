// Any integer is input through the keyboard.
// Write a program to find out whether it is an odd number or even number.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("\n Enter any number : ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("The Number is Even \n");
    else 
        printf("The number is Odd \n");
    return 0;
}
