// 9. Write a program to print cubes of the first N natural numbers

#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);

    for(int i=1;i<=N;i++)

        printf("%d ",i*i*i);


    return 0;
}