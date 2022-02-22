#include <stdio.h>
#include <string.h>

typedef union items {
    int money;
    char *other;
}prize;

int main(){
    int p[2];
    p[0]=1;
    p[1]=8;
    p[3]=45;
    p[4]=90;
    for (int i=0;i<5;i++){
        printf("%d\t",p[i]);
    }
    return 0;
}