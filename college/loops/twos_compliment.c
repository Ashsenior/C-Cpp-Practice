#include <stdio.h>
#include <string.h>
void twos_comp(char bin[]){
    for (int i=strlen(bin)-1;i>=0;i--){
        if (bin[i]=='1'){
            bin[i]='0';
        }
        else{
            bin[i]='1';
            break;
        }
    }
    printf(" Two's compliment %s",bin);
}
int main(){
    int n=1;
    char bin_num[n+1];
    printf(" Enter the num : ");
    scanf("%s",&bin_num);
    for (int i=0;i<strlen(bin_num);i++){
        if (bin_num[i]=='0'){
            bin_num[i]='1';
        }
        else{
            bin_num[i]='0';
        }
    }
    printf(" One's compilment %s\n",bin_num);
    twos_comp(bin_num);
    return 0;
}