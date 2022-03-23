#include <stdio.h>
#include <string.h>

int length(char *p){
    int len=0;
    while (p[len]!='\0'){
        len++;
    }
    return len;
}

char *concat(char *s,char *p,char *new){
    for (int i=0;i<=length(s)+length(p);i++){
        if (i<length(s)){
            new[i] = s[i];
        }
        else {
            new[i] = p[i-length(s)];
        }
    }
}

char *reverse(char *s,char *empty){
    for (int i=0;i<=length(s);i++){
        empty[i] = s[length(s)-i-1];
    }
    return empty;
}
void copy(char *s,char *empty){
    for(int i=0;i<=length(s);i++){
        empty[i] = s[i];
    } 
}

int main(){
    char *s="hello";
    char *p="world";
    printf("length of the string : %d\n",length(s));
    char new[length(s)+length(p)];
    concat(s,p,new);
    printf("concated s and p : %s\n",new);
    char reversed[length(s)];
    printf("reversed string : %s\n",reverse(s,reversed));
    char copied[length(s)];
    copy(s,copied);
    printf("copied string : %s\n",copied);   
    return 0;
}