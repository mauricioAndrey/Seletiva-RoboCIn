#include "mbed.h"
#include <MPU6050.h> //testar com isso assim

#define WAIT_TIME_MS 500 
DigitalOut led1(LED1);

//defines----------------------------
    MPU6050 mpu6050();
    //pin de data e de clock aqui
    mbed::I2C i2c();

//-----------------------------------

int main()
{

    //Usando o i2c na velocidade do datasheet da mpu6050
    i2c.frequency(400000);
    
    //.........................................

    while (true)
    {
        //garantir comunicação com o STM 32 por meio desse código
        //colocar um if para funcionar numa determinada frequência para LER os dados do mpu6050 nesse frequência
        //filtrar os dados de deslocamento e velociadade angulares
    }
    
}