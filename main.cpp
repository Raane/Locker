#include "mbed.h"
#include "PowerControl/PowerControl.h"
#include "PowerControl/EthernetPowerControl.h"

DigitalOut led(p21);
DigitalIn button(p15);

int main() {
    PHY_PowerDown();
    Peripheral_PowerDown(0xFFFF7FFF);
    while(1) {
        if (button != 0){
            led = 1;
        }else{
            led = 0;
        }
    }
}