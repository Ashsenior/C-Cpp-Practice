
#include <stdio.h>

int main(){
    int bound;
    printf(" Enter the bound for the array : ");
    scanf("%d",&bound);
    int arr[bound];
    for (int i=0;i<bound+1;i++){
        if (i>bound){
            printf(" Array bound exceded ! ");
        }
        else{
            printf(" Enter %d element : ",i);
            scanf("%d",arr[i]);
        }
    }

}