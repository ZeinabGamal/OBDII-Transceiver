//#include <TinyGPS.h>
//#include <SoftwareSerial.h>
//unsigned long fix_age;
SoftwareSerial GPS(3,4);
//TinyGPS gps;
void gpsdump(TinyGPS &gps);
bool feedgps();
void getGPS();
//long lat, lon;
float LAT, LON;

void setupgps(){
GPS.begin(9600);
//Serial.begin(9600);
}
void loopgps(){

gps.get_position(&lat, &lon, &fix_age);
Serial.println("Latitude:");
Serial.println(lat);
Serial.println("Longitude:");
Serial.println(lon);
/*long lat, lon;
unsigned long fix_age, time, date, speed, course;
unsigned long chars;
unsigned short sentences, failed_checksum;
// retrieves +/- lat/long in 100000ths of a degree
gps.get_position(&lat, &lon, &fix_age);
Serial.println(lat);
Serial.println(lon);
Serial.println(fix_age);
// time in hh:mm:ss, date in dd/mm/yy
gps.get_datetime(&date, &time, &fix_age);
float year = date % 100;
float month = (date / 100) % 100;
float day = date / 10000;
float hour = time / 1000000;
float minute = (time / 10000) % 100;
float second = (time / 100) % 100;
Serial.print("Date: ");
Serial.print(year); Serial.print("/");
Serial.print(month); Serial.print("/");
Serial.print(day);
Serial.print(" :: Time: ");
Serial.print(hour); Serial.print(":");
Serial.print(minute); Serial.print(":");
Serial.println(second);

getGPS();
Serial.print("Latitude : ");
Serial.print(LAT/100000,7);
Serial.print(" :: Longitude : ");
Serial.println(LON/100000,7);
}
void getGPS(){
bool newdata = false;
unsigned long start = millis();
// Every 1 seconds we print an update
while (millis() - start < 1000)
{
if (feedgps ()==true){
newdata = true;
}
}
if (newdata)
{
gpsdump(gps);
}
}
bool feedgps(){
while (GPS.available())
{
if (gps.encode(GPS.read()))
return true;
}
return 0;
}
void gpsdump(TinyGPS &gps)
{
//byte month, day, hour, minute, second, hundredths;
gps.get_position(&lat, &lon);
LAT = lat;
LON = lon;
{
feedgps(); // If we don't feed the gps during this long routine, we may drop characters and get checksum errors
}*/
}
