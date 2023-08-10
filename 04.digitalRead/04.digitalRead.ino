/*
  Author: 
  Learning Intention: The students will learn how to wire a pull-up and pull-down switch and configure PINs for digital input and read binary data from those PINs.
  Success Criteria:
    1. I understand how to configure a PIN for input
    2. I can wire a switch for digital input in TINKERCAD
    3. I know how to read binary data from a specific PIN
    4. I understand that LOW = false = 0 = <1.5 volts (or Off) and that HIGH = true = 1 = >3 volts (or On)
    5. I know the difference between a switch and a momentary switch
    6. I can organise output data so it correctly plots on the serial monitor
    7. I can apply this knowledge to the Button and the Line Finder in the sensor kit

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/language/functions/digital-io/pinmode/
    https://www.arduino.cc/reference/en/language/functions/digital-io/digitalread/
    https://docs.arduino.cc/built-in-examples/digital/Debounce
  Schematic:
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/04.digitalRead/Bootcamp-digitalRead.png
*/

static unsigned int myButton = 8;
static unsigned int soundSensor = 7;
static unsigned int lightSensor = 6;
static unsigned int myLed = 5;

void setup() {
 Serial.begin(9600);
 Serial.println("Serial monitor configured to 9600");
 Serial.println("-----------------------");
 pinMode(myButton, INPUT);
 pinMode(soundSensor, INPUT);
 pinMode(lightSensor, INPUT);
 pinMode(myLed, OUTPUT);

}

void loop() {
  unsigned int btnVal = digitalRead(myButton);
  Serial.print("ButtonValue:");
  Serial.print(btnVal);
  Serial.print(",");
  unsigned int litVal = digitalRead(lightSensor);
  Serial.print("LightValue:");
  Serial.print(litVal);
  Serial.print(",");
  unsigned int sndVal = digitalRead(soundSensor);
  Serial.print("SoundValue:");
  Serial.print(sndVal);
  Serial.println();

  if (btnVal) {
    digitalWrite(myLed, HIGH);
    delay(500);
  }
  digitalWrite(myLed, LOW);
  


  Serial.println();
}
