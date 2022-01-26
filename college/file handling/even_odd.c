#include <stdio.h>

int main(){
    int nums[10],odd[10],even[10],prime[10];
    FILE *ptr,*ptr_even,*ptr_odd,*ptr_prime;

    ptr = fopen("q1/num.txt","r");
    for (int i=0;i<10;i++){
        fscanf(ptr,"%d",&nums[i]);
    }
    fclose(ptr);

    ptr_even = fopen("q1/even.txt","a");
    ptr_prime = fopen("q1/prime.txt","a");
    ptr_odd = fopen("q1/odd.txt","a");

    for (int i=0;i<10;i++){
        int is_prime = 1;
        for (int k=2;k<nums[i];k++){
            if (nums[i]%k==0){
                is_prime = 0;
                break;
            }
        }
        if (nums[i]%2==0 && is_prime==0){
            fprintf(ptr_even,"%d\t",nums[i]);
        }
        else if(is_prime==1){
            fprintf(ptr_prime,"%d\t",nums[i]);
        }
        else if (nums[i]%2!=0 && is_prime==0){
            fprintf(ptr_odd,"%d\t",nums[i]);
        }
    }

    fclose(ptr_odd);
    fclose(ptr_prime);
    fclose(ptr_even);
    return 0;
}