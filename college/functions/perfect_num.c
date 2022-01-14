#include <stdio.h>
void perfect(int n){
    int sum=0;
    for (int i=1;i<n;i++){
        int z=(n%i==0)?i:0;
        sum = sum + z;
    }
    if (sum==n){
        printf("%d",n);
    }
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a = (a<1)?2:a;
    for (int j=a;j<b;j++){
        perfect(j);
    }
    return 0;
}