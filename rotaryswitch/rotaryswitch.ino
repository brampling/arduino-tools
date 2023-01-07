int analogPin = A1; // switch wiper connected to analog pin 1
                    // outside leads to ground and +5V
int val = 0;  // variable to store the ADC value read
int switchpositions = 11; // the number of switch positions in the rotary switch, not counting 0
float switchincrement = 1023/switchpositions; // the size of the ADC count increment
int selection = 0; // variable to store the rotary switch selection

void setup() {
  Serial.begin(9600);           //  setup serial
}

void loop() {
  val = analogRead(analogPin);  // read the input pin ADC value
  selection = round(val/switchincrement); // divide the ADC value by the increment size to determine switch position
  Serial.print(val); // show the ADC value
  Serial.print(" ");
  Serial.println(selection);          // show the selected switch position (0 - switchpositions)
}