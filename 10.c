// 10. Write a program to print a table of N.

#include<stdio.h>
int main()
{
    int N;
    printf("Enter a number: ");
    scanf("%d",&N);

    printf("Table of %d:\n",N);
    for(int i=1;i<=10;i++)
        printf("%dx%d=%d\n",N,i,N*i);
    

    return 0;
}