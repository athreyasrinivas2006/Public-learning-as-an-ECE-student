#include <stdio.h> 
#include <stdint.h>

int main(){
    uint16_t array[5]={200, 210, 220, 230, 245};
    uint16_t sum=0;
    for (int i=0;i<5;i++){
         sum+= array[i];
    }
    printf("%u\n", sum/5);
}