#include<stdio.h>
int main(){
    int num ;
    printf("Enter the number to check whether number is prime or not : \n");
    scanf("%d",&num);
    for(int i=2;i<=num-1;i++){
        if(num%i==0){
            printf("It is not Prime");
            break;
        }
        else{
            printf("It is Prime ");
            break;
        }
    }
}