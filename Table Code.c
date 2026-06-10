#include<stdio.h>
    int main(){
     int i, num;

     printf("enter the number\n");
     scanf("%d", &num);

     printf("Multiplication table for %d is:\n ",num);
     for(i=1; i<=10;i++){
        printf(" \n%d X %d = %d\n", num, i, num*i);
     }
     return 0;


    }
