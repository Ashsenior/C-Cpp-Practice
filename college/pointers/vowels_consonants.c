#include <stdio.h>
#include <string.h>

void find(char *a,int n){
    char vowels[10] = "aeiouAEIOU";
    int count_vow=0,count_con=0;
    for (int i=0;i<n;i++){
        int is_vow = 0;
        for (int j=0;j<5;j++){
            if ((*a)==vowels[j]){
                count_vow++;
                is_vow=1;
                break;
            }
        }
        if (is_vow==0){
            count_con++;
        }
        a++;
    }  
    printf(" No. of vowels : %d\n",count_vow);
    printf(" No. of consonants : %d\n",count_con);  
}

int main(){
    char a[] = "heythere";
    int n = strlen(a);
    find(a,n);
    return 0;
}