#include<stdio.h>
int main(){
    int num = 8;
    int sum = 0;
    int i = 1;
    while(i<11){
    sum+= num * i;
    i++;
    }
    printf("The value of sum of 8 th table multiplication is : %d ",sum);
}