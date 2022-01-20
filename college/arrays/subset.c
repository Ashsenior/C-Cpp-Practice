#include <stdio.h>
#include <string.h>

int main(){
    int sbig,ssma;
    printf(" Enter length of big and small array : ");
    scanf("%d %d",&sbig,&ssma);
    char big[sbig],small[ssma];
    int match = 0;
    printf(" Enter bigger array : ");
    scanf("%s",&big);
    printf(" Enter smaller array : ");
    scanf("%s",&small);

    for (int i=0;i<=sbig;i++){
        for (int k=0;k<ssma;k++){
            if (big[i]==small[k]){
                match++;
                break;
            }
        }
    }
    if (match==ssma){
        printf(" Smaller array is the subset of the bigger array ");
    }
    else{
        printf(" Smaller array is not a subset of the bigger array ");
    }
    return 0;
}