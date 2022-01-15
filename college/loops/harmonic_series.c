#include <stdio.h>
#include <math.h>

void sum(int n,int a, int r){
    float sum = 0;
    for (int i=0;i<n;i++){
        sum += 1 / (a * pow(r,i));
    }
    printf(" Sum : %f", sum);
}

int main(){
    int n,a,r;
    printf(" Enter n a r : ");
    scanf("%d %d %d",&n,&a,&r);
    for (int i=0;i<n;i++){
        float k = 1 / (a * pow(r,i));
        printf(" %f ",k);
    }
    printf("\n");
    sum(n,a,r);
    return 0;
}