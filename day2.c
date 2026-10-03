#include <stdio.h>
#include <stdint.h>
int main()
{
    uint8_t star;
    while(1){
        for (star=0; star<=100; star++){
            printf("%u\n", star);
        }
    }
}
// lesson learnt: click terminal and ctrl+c to exit from inf loop