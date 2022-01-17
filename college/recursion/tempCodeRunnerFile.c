#include <stdio.h>

int log2(float);
int logN(float, int);

int main(){
    float n;
    int b,choice;
    printf(" Enter log2 / logN (0/1) : ");
    scanf("%d",&choice);
    if (choice==0){
        printf(" Enter number : ");
        scanf("%f",%n);
        log2(n);
    }
    else if (choice==1){
        printf(" Enter number : ");
        scanf("%f",%num);
        printf(" Enter base : ");
        scanf("%d",%b);
        logN(n,b);
    }
    else {
        printf(" Invalid option ! ")
    }
    return 0;
}

int log2(float num){
    if (num<2){
        return 0;
    }
    return 1 + log2(num/2);
}

int logN(float num, int base){
    if (num<base){
        return 0;
    }
    return 1 + logN(num/base,base);
}