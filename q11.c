#include<stdio.h>
int main(){
    int num ;
    printf("Enter the number to check whether number is prime or not : \n");
    scanf("%d",&num);
    int i = 2;
    while(i<=num-1){
        if(num%i==0){
            printf("it is not prime");
            break;
        }
        else{
            printf("it is prime ");
        }
    }
    return 0;
}