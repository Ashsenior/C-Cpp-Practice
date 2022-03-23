#include <stdio.h>

int main(){
    int line_count=0,blank_line_count=0,comments_count=0;
    FILE *fptr;
    char *file = "even_odd.c";
    char ch;
    fptr = fopen(file,"r"); 
    while (ch=fgetc(fptr)!=EOF){
        if (ch=fgetc(fptr)=='\n'){
            if (ch=fgetc(fptr)=='\n'){
                fseek(fptr,-1,1);
                blank_line_count++;
            }
            else {
                line_count++;
            }
        }
    }
    fseek(fptr,0,0);
    while (ch=fgetc(fptr)!=EOF){
        if (ch=fgetc(fptr)=='/'){
            comments_count++;
        }
    }
    printf("Total number of lines : %d\n",line_count);
    printf("Total number of blank lines : %d\n",blank_line_count);
    printf("Total number of comments : %d",comments_count);
    return 0;
}