#include<stdio.h>
int main(){
    int sum = 0,num = 8;

    for(int i = 1 ; i <= 10 ; i++){
        sum+= num*i; 
    }
    printf("the total sum of 8Th Multiplication Table is : %d",sum);
    return 0;
}