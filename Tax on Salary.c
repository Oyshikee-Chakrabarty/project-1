#include<stdio.h>

    int main(){
    float salary,tax=0;
    printf("enter your salary:");
    scanf("%f",&salary);
    if(salary<=25000){
        printf("no tax will available");
    }
    else if(salary<=50000){
        tax = (salary-25000)*0.05;
            printf("the tax will be %f" , tax);
            }
    else if(salary<= 60000){
        tax =(salary- 25000)*0.75;
        printf("the tax will be %f", tax);
    }
    //else()
    }
