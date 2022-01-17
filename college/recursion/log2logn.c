#include <stdio.h>

int log_2(float);
int logN(float, int);

int main(){
    float n;
    int b,choice;
    printf(" Enter log2 / logN (0/1) : ");
    scanf("%d",&choice);
    if (choice==0){
        printf(" Enter number : ");
        scanf("%f",&n);
        printf("%d",log_2(n));
    }
    else if (choice==1){
        printf(" Enter number : ");
        scanf("%f",&n);
        printf(" Enter base : ");
        scanf("%d",&b);
        printf("%d",logN(n,b));
    }
    else {
        printf(" Invalid option ! ");
    }
    return 0;
}

int log_2(float num){
    if (num<2){
        return 0;
    }
    return 1 + log_2(num/2);
}

int logN(float num, int base){
    if (num<base){
        return 0;
    }
    return 1 + logN(num/base,base);
}