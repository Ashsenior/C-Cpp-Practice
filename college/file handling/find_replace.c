#include <stdio.h>

int main(){
    FILE *ptr;
    char word[10];
    ptr = fopen("test.txt","r+");
    fscanf(ptr,"%s",word);
    while (word!=EOF){
        fscanf(ptr,"%s",word);
        if (word=="hi"){
            fprintf("");
        }
        else {
            fprintf()
        }
    }
    return 0;
}