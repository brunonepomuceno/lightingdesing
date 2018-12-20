// Natal infinito (c) 2018 Bruno Nepomuceno - rastrø collective
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include <Adafruit_NeoPixel.h>
#define LEDPIN 6 // connect the Data from the strip to this pin on the Arduino
#define NUMBER_PIEXELS 66 // the number of pixels in your LED strip
Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMBER_PIEXELS, LEDPIN, NEO_BRG + NEO_KHZ800);
const int TrigPin = 2;
const int EchoPin = 3;
float cm;
int delayTime = 500;
int wait = 50;
int i = 0;


void setup()
{
  Serial.begin(9600);
  pinMode(TrigPin, OUTPUT);
  pinMode(EchoPin, INPUT);
  strip.begin();

}
void loop()
{

  digitalWrite(TrigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin, LOW);
  cm = pulseIn(EchoPin, HIGH) / 58.0; //The echo time is converted into cm
  cm = (int(cm * 100.0)) / 100.0;     //Keep two decimal places
  Serial.print("Distance\t=\t");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();

  if (cm < 5) {

    for (int i = 0; i < strip.numPixels() - 1; i++) {
      // starting at i, draw the 7 color rainbow}
      // a seven segment rainbow with red on the highest pixel
      void Vapo_r(uint16_t i, uint16_t wait) ;
      int np = strip.numPixels();  // we use the modulo function with this

      strip.setPixelColor(i, strip.Color(255, 0, 0));

      strip.show();
      delay(wait);
      strip.clear();
      strip.show();
    }
    
    for (int i = 0; i < strip.numPixels() - 1; i = i + 3) {
      // starting at i, draw the 7 color rainbow}
      // a seven segment rainbow with red on the highest pixel
      void Vapo_r(uint16_t i, uint16_t wait) ;
      int np = strip.numPixels();  // we use the modulo function with this

      strip.setPixelColor(i, strip.Color(255, 0, 255));

      strip.show();
      delay(wait);
      strip.clear();
      strip.show();
    }
    
    uint16_t x, y;
    for (x = 0; x < strip.numPixels(); x++) {
      strip.setPixelColor(x, x, 0, 10, 255); 
      strip.show();
      delay(wait);
    }
    for (y = 0; y < strip.numPixels(); y++) {
      strip.setPixelColor(strip.numPixels() - 1 - y, y, 0, 5, 255);
      strip.show();
      delay(wait);
    }

    for (int i = 0; i < strip.numPixels() - 1; i++) {
      // starting at i, draw the 7 color rainbow}
      // a seven segment rainbow with red on the highest pixel
      void Vapo_r(uint16_t i, uint16_t wait) ;
      int np = strip.numPixels();  // we use the modulo function with this

      strip.setPixelColor(i, strip.Color(255, 155, 0));

      strip.show();
      delay(wait);
      strip.clear();
      strip.show();
    }

    for (int i = 0; i < strip.numPixels() - 1; i = i + 3) {
      // starting at i, draw the 7 color rainbow}
      // a seven segment rainbow with red on the highest pixel
      void Vapo_r(uint16_t i, uint16_t wait) ;
      int np = strip.numPixels();  // we use the modulo function with this

      strip.setPixelColor(i, strip.Color(255, 155, 0));

      strip.show();
      delay(wait);
      strip.clear();
      strip.show();
    }

  }

  

  else {
    strip.clear();
    strip.show();
  }

}