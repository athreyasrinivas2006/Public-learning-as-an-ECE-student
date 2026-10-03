#include <stdio.h>
#include <stdint.h>
int main()
{
    uint16_t sensor_data=250;
    sensor_data+=10;
    printf("%u", sensor_data);
}
//this happens because 2^8=256 and 250+10=260, therefore overflow occured and 4 was left out and thus 4 was printed.
// now if i change uint8 to uint16 it wont happen and 260 will be printed, yup worked