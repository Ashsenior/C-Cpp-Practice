#include <stdio.h>

void gross(float n){
    float DA,HRA;
    if (n<=10000){
        DA = n*0.2;
        HRA = n*0.8;
        printf(" Your Gross salary is : %f",n+DA+HRA);
    }
    else if(n<=20000 && n>10000){
        DA = n*0.25;
        HRA = n*0.9;
        printf(" Your Gross salary is : %f",n+DA+HRA);
    }
    else{
        DA = n*0.3;
        HRA = n*0.95;
        printf(" Your Gross salary is : %f",n+DA+HRA);
    }
}

int main(){
    float salary;
    printf(" Enter your salary : ");
    scanf("%f",&salary);
    gross(salary);
    return 0;
}