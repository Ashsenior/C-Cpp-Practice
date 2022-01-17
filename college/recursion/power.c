#include <stdio.h>

float power(float n,int p){
    if (p<=0){
        return 1;
    }
    return n*power(n,p-1);;
}

int main(){
    int pow;
    float num;
    printf(" Enter the number and power : ");
    scanf("%f %d",&num,&pow);
    printf("%f",power(num,pow));
    return 0;
}