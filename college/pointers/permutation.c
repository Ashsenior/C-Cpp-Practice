#include <stdio.h>
#include <string.h>

void swapa(char *l,char *r){
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
            swapa((s+l),(s+i));
            permute(s,l+1,r);
            swapa((s+l),(s+i));
        }
    }
}

int main(){
    char a[] = "hey";
    int n =strlen(a)-1;
    permute(a,0,n);
    return 0;
}