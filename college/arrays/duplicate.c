#include <stdio.h>

int main(){
    int len,dup=0;
    printf(" Enter the length of the string : ");
    scanf("%d",&len);
    char a[len];
    char char_arr[len];
    printf(" Enter any string : ");
    scanf("%s",a);   
    for (int i=0;i<len;i++){
        int found = 0;
        for (int j=0;j<len;j++){
            if (a[i]==char_arr[j]){
                dup++;
                found=1;
                break;
            }
        }
        if (found==0){
            char_arr[i] = a[i];
        }
    } 
    printf(" Number of duplicate charachters : %d ",dup);
    return 0;
}