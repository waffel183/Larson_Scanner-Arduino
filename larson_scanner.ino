int leds[] = {D1, D2, D3, D4, D5, D6, D7};

void setup() {
  for (int led=0; led<7; led++) {
    pinMode(leds[led], OUTPUT);
  }
}

void loop(){
  for(int i = 0; i < 7; i++){
    digitalWrite(leds[i], HIGH);
    delay(200);
    digitalWrite(leds[i], LOW);
  }
  for(int i = 6; i >= 0; i--){
    digitalWrite(leds[i], HIGH);
    delay(200);
    digitalWrite(leds[i], LOW);
  }
}

