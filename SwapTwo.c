#include <stdio.h>
#include <stdint.h>
void swap_speeds(uint16_t *ptrA, uint16_t *ptrB){
    uint16_t temp;
    temp= *ptrA;
    *ptrA=*ptrB;
    *ptrB= temp;    
}
int main(){
    uint16_t motor1=100;
    uint16_t motor2=222;
    printf("Before swap speeds are %hu & %hu\n", motor1, motor2);
    swap_speeds(&motor1, &motor2);
    printf("After swap speeds are %hu & %hu", motor1, motor2);
    return 0;
}