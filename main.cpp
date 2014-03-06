#include "mbed.h"
#include "PowerControl/PowerControl.h"
#include "PowerControl/EthernetPowerControl.h"

DigitalOut led1(p21);
DigitalOut led2(p22);
DigitalOut led3(p23);
DigitalOut led4(p24);
DigitalIn button(p15);

int main() {
    PHY_PowerDown();
    Peripheral_PowerDown(0xFFFF7FFF);
    while(1) {
        if (button != 0){
            led1 = 1;
            led2 = 1;
            led3 = 1;
            led4 = 1;
        }else{
            led1 = 0;
            led2 = 0;
            led3 = 0;
            led4 = 0;
        }
    }
}
