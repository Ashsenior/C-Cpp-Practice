#include <stdio.h>

int main(){
    char vowels[10] = {'a','e','i','o','u','A','E','I','O','U'};
    
    char a;
    int n=0;
    printf(" Enter any charchter : ");
    scanf("%c",&a);
    for (int i=0;i<10;i++){
        if (a==vowels[i]){
            n=1;
            break;
        }
    }
    if (n){
        printf(" It is a vowel ");
    }
    else{
        printf(" It is a consonant ");
    }
    return 0;
}