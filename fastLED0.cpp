
#include <FastLED.h>

#define NUM_LEDS  6
#define DATA_PIN0 6

CRGB leds[NUM_LEDS];




void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  FastLED.addLeds<NEOPIXEL, DATA_PIN0>(leds, NUM_LEDS);
  FastLED.setBrightness(20);
  
}

void loop() {
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);                    

  
  leds[0] = CRGB::Red;
  leds[1] = CRGB::Green;
  leds[2] = CRGB::Blue;
  leds[3] = CRGB::Cyan;
  leds[4] = CRGB::Magenta;
  leds[5] = CRGB::Yellow;
  FastLED.show();


  
  digitalWrite(LED_BUILTIN, LOW); 
  delay(1000);                    

  leds[0] = CRGB::Black;
  leds[1] = CRGB::Black;
  leds[2] = CRGB::Black;
  leds[3] = CRGB::Black;
  leds[4] = CRGB::Black;
  leds[5] = CRGB::Black;
  FastLED.show();
  
}
