#include <stdio.h>
int x_mult_coef(int x,int times,int coef){
    int f=1;
    for (int i=0;i<times;i++){
        f = f * x;
    }
    return coef * f;
}
int derx_mult_coef(int x,int times,int coef){
    int k = 1;
    for (int i=0;i<(times-1);i++){
        k = k * x;
    }
    return coef * times * k;
}

int main(){
    int deg,x,val=0,der_val=0,coef;
    printf(" Enter degree of polynomial : ");
    scanf("%d",&deg);

    printf(" Enter value of x : ");
    scanf("%d",&x);
    
    for (int i=0;i<=deg;i++){
        printf(" Enter coefficient of x to the power %d : ",i);
        scanf("%d",&coef);
        val += x_mult_coef(x,i,coef);
        der_val += derx_mult_coef(x,i,coef);
    }
    printf(" Value of polynomial for value of x = %d is %d \n",x,val);
    printf(" Value of derivated polynomial for value of x = %d is %d ",x,der_val);
    return 0;
}