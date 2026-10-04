#include <stdio.h>
#include <stdint.h>
uint8_t PINB= 0b00000000;
uint8_t PORTD= 0b00000000;
void process_sensor_data( uint16_t *buffer, uint8_t size, uint8_t *system_status){
    if (PINB & (1<<3)){
        *system_status= 99;
        PORTD &= ~(1<<5)&~(1<<6);
        return ;
    }
    uint16_t min_dist = 65535;
    for (int i=0; i<size; i++){
        if (*(buffer+i)<min_dist){
            min_dist=*(buffer+i);
        }
    }
    if (min_dist<15){
        PORTD &= ~(1<<5)&~(1<<6);
        PORTD ^=(1<<7);
    }
    else{
        PORTD |= (1<<5) | (1<<6);
        PORTD &=~(1<<7);
    }
}

int main() {
    uint16_t ultrasonic_data[4] = {45, 32, 12, 18};
    uint8_t status_flag = 1; // 1 means system normal
    printf("Initial PORTD: %u\n", PORTD);
    process_sensor_data(ultrasonic_data, 4, &status_flag);
    printf("Final PORTD: %u\n", PORTD);
    printf("System Status: %u\n", status_flag);

    return 0;
}