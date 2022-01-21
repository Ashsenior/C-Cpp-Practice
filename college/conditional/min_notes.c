#include <stdio.h>

void min_notes(int n){
    int count = 0;
    while(n!=0){
        if (n>=2000){
            int notes = n/2000;
            printf(" %d notes of 2000 \n",notes);
            n = n%2000;
            count+=notes;
        }
        else if(n>=500 && n<2000){
            int notes = n/500;
            printf(" %d notes of 500 \n",notes);
            n = n%500;
            count+=notes;         
        }
        else if(n>=200 && n<500){
            int notes = n/200;
            printf(" %d notes of 200 \n",notes);
            n = n%200;
            count+=notes;          
        }
        else if(n>=100 && n<200){
            int notes = n/100;
            printf(" %d notes of 100 \n",notes);
            n = n%100;
            count+=notes;       
        }
        else if(n>=50 && n<100){
            int notes = n/50;
            printf(" %d notes of 50 \n",notes);
            n = n%50;
            count+=notes;           
        }
        else if(n>=20 && n<50){
            int notes = n/20;
            printf(" %d notes of 20 \n",notes);
            n = n%20;
            count+=notes;        
        }
        else if(n>=10 && n<20){
            int notes = n/10;
            printf(" %d notes of 10 \n",notes);
            n = n%10;
            count+=notes;         
        }
        else if(n>=5 && n<10){
            int notes = n/5;
            printf(" %d coin of 5 \n",notes);
            n = n%5;
            count+=notes;            
        }
        else if(n>=2 && n<5){
            int notes = n/2;
            printf(" %d coin of 2 \n",notes);
            n = n%2;
            count+=notes;          
        }
        else if(n>=1 && n<2){
            int notes = n/1;
            printf(" %d coin of 1 \n",notes);
            n = n%1;
            count+=notes;          
        }
    }
    printf(" Total no. of notes and coins used : %d",count);
}

int main(){
    int amaount;
    printf(" Enter the amount : ");
    scanf("%d",&amaount);
    min_notes(amaount);
    return 0;
}