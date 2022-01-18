#include <stdio.h>
#include <string.h>

int main(){
    char big[1],small[1];
    int match = 1;
    printf(" Enter bigger array : ");
    scanf("%s",&big);
    printf(" Enter smaller array : ");
    scanf("%s",&small);

    for (int i=0;i<=strlen(big);i++){
        for (int k=0;k<strlen(small);k++){
            if (big[i]==small[k]){
                match++;
                break;
            }
        }
    }
    if (match==strlen(small)){
        printf(" Smaller array is the subset of the bigger array ");
    }
    else{
        printf(" Smaller array is not a subset of the bigger array ");
    }
    return 0;
}