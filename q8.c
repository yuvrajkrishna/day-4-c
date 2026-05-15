#include<stdio.h>
int main(){
    int factorial = 1; 
    int num;
    printf("Enter number to find its Factorial : \n");
    scanf("%d",&num);
    for(int i = 1;i<=num;i++){
        factorial*=i;
    }
    printf("The factorial of the %d is : %d",num,factorial);
    return 0;
}