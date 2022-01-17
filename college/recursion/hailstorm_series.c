#include <stdio.h>
void hailstorm(int num){
    if (num==1){
        printf(" End ! ");
    }
    else if(num%2==0){
        printf("%d , ",num/2);
        hailstorm(num/2);
    }
    else{
        printf("%d , ",3*num+1);
        hailstorm(3*num+1);
    }
}
int main(){
    int n;
    printf(" Enter any number : ");
    scanf("%d",&n);
    hailstorm(n);
    return 0;
}