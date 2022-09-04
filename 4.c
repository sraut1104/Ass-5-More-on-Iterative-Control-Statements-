// 4. Write a program to print the first N odd natural numbers

#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);

    for(int i=0;i<=N-1;i++)
    
        printf("%d ",2*i+1);
    

    return 0;
}