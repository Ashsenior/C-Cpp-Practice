#include <stdio.h>
#include <math.h>

float sum(float n,float a,float r){
    float sum=0;
    for (int i=0;i<n;i++){
        sum += a*pow(r,i);
    }
    return sum;
}

int main(){
    float n,a,r;
    printf(" Enter n a r : ");
    scanf("%f %f %f",&n,&a,&r);
    printf(" Sum : %f",sum(n,a,r));
    return 0;
}