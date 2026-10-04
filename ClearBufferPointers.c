#include <stdio.h>
#include <stdint.h>

// TOOL 1: Find Peak 
uint16_t find_peak(uint16_t *ptr, uint8_t size) {
    uint16_t max_val = 0; 
    for (int i = 0; i < size; i++) {
        if (*(ptr+i) > max_val){
            max_val = *(ptr+i);
        }
    }
    return max_val;
} 

// TOOL 2: Clear Buffer
void clear_buffer(uint16_t *ptr, uint8_t size){
    for (int i = 0; i < size; i++){
        *(ptr+i) = 0;
    }
}

int main(){
    // --- TEST 1: CLEAR BUFFER ---
    uint8_t size = 3;
    uint16_t sensor_data[3] = {200, 222, 11};
    
    clear_buffer(sensor_data, 3);
    
    for (int j = 0; j < size; j++){
        printf("Cleared data: %hu\n", sensor_data[j]);
    }

    // --- TEST 2: FIND PEAK ---
    uint16_t motor_currents[5] = {120, 145, 800, 130, 125}; 
    uint16_t peak = find_peak(motor_currents, 5);
    
    printf("Peak current detected: %hu mA\n", peak);

    return 0; 
}