// 8. Write a program to print squares of the first N natural numbers

#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);

    for(int i=1;i<=N;i++)

        printf("%d ",i*i);


    return 0;
}