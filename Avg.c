#include <stdio.h> 
#include <stdint.h>
uint16_t avg(uint16_t data_buffer[], uint8_t size){
    uint16_t sum=0;
    for (int i=0; i<size; i++)
    {
        sum+=data_buffer[i];
    }
        return sum/size;
}

int main(){
    uint16_t sensor_readings[5] = {200, 210, 205, 215, 202};
    uint8_t number_of_readings = 5;
    printf("The average is=%hu", avg(sensor_readings, number_of_readings));
    return 0;
}
    