#include<stdio.h>
int  main(){
    int n1,n2;
    printf("Enter first and second number :");
    scanf("%d%d",&n1,&n2);
    int temp=n1;
    n1=n2;
    n2=temp;
    printf("After swapping the numbers are : %d %d",n1,n1);
    return 0;
}