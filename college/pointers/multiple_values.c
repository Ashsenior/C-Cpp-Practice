#include <stdio.h>
float n[5];
float *multiple_return(float a,float b){
    n[0] = a;
    n[1] = b;
    n[2] = a+b;
    n[3] = a*b;
    n[4] = a-b;
    return n;
}

int main(){
    float *k = multiple_return(3,4);
    for (int i=0;i<5;i++){
        printf("%f\t",*(k+i));
    }
    return 0;
}