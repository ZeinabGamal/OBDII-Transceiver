
#include <MPU6050.h>
#include <SoftwareSerial.h>
#include <TinyGPS.h>
#include <Canbus.h>
#include<Wire.h>
#include <I2Cdev.h>
#define Bluetooth Serial 
char buffer[456];
int16_t ax, ay, az;
MPU6050 accelgyro;
//_________________________________________________________
unsigned long fix_age;
long lat, lon;
TinyGPS gps;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  setupcanbus();
  delay(500);
  setupgps();
  delay(500);
  setupimu();
  delay(500);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available())
{
     loopcanbus();
     delay(1000);
 
     loopgps();
     delay(1000);

     loopimu();
     delay(1000);
}
}
