#include <stdio.h>
#include <string.h>

int main(){
    int len;
    printf(" Enter length of the array : ");
    scanf("%d",&len);
    int a,b;
    char arr[len];
    printf(" Enter the string : ");
    scanf("%s",&arr);
    printf(" Enter the upper and lower limit for slicing : ");
    scanf("%d %d",&a,&b);
    char sliced_arr[b-a],new_arr[len];
    for (int j=a;j<b;j++){
        sliced_arr[j-a] = arr[j];
    }
    for (int i=0;i<len;i++){
        if (i<a){
            new_arr[i] = arr[i];
        }
        else if (i>=a && i<b){
            continue;
        }
        else{
            new_arr[i-b+a] = arr[i];
        }
    }
    int count=0;
    for (int k=len-b+a;k<len;k++){
        new_arr[k] = sliced_arr[count];
        count++;
    }
    printf("%s",new_arr);
    return 0;
}
