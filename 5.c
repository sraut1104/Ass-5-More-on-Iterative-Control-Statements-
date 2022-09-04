// 5. Write a program to print the first N odd natural numbers in reverse order.

#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);

    for(;N>=1;N--)
    
        printf("%d ",2*N-1);
    

    return 0;
}