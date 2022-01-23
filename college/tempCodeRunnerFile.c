#include <stdio.h>
#include <string.h>

void swap(char *l,char *r){
    char temp = *l;
    *l = *r ;
    *r = temp;
}

void permute(char *s,int l ,int r){
    if (l==r){
        printf("%s \t",s);
    }
    else{
        for (int i=l;i<=r;i++){
            swap((s+l),(s+r));
            permute(s,l+1,r);
            swap((s+l),(s+r));
        }
    }
}

int main(){
    char *a = "hey";
    int n =strlen(a);
    permute(a,0,n);
    return 0;
}