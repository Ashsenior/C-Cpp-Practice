#include <stdio.h>

int length(char *p){
    int len=0;
    while (p[len]!="\0"){
        len++;
    }
    return len;
}

char *concat(char *s,char *p){
    char new[length(s)+length(p)];
    for (int i=0;i<length(s)+length(p);i++){
        if (i<length(s)){
            new[i] = s[i];
        }
        else {
            new[i] = p[i-length(s)];
        }
    }
}

char *reverse(char *s){
    char reversed[length(s)];
    for (int i=0;i<length(s);i++){
        reversed[i] = s[length(s)-i-1];
    }
    return reversed;
}
void copy(char *s,char *empty){
    for(int i=0;i<length(s);i++){
        empty[i] = s[i];
    }
}

int main(){
    
    return 0;
}