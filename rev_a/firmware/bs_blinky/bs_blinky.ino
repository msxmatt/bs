
int bs_green_led = 17;
int bs_blue_led = 19;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pins for LEDs as outputs.
  pinMode(bs_green_led, OUTPUT);
  pinMode(bs_blue_led, OUTPUT);

  // turn off both LEDs to start
  digitalWrite(bs_green_led, LOW);
  digitalWrite(bs_blue_led, LOW);
}

     
// the loop function runs over and over again forever
void loop() {

  // blink blue LED every 500ms, green LED every 1s
  digitalWrite(bs_green_led, HIGH);
  digitalWrite(bs_blue_led, HIGH);
  delay(500);
  digitalWrite(bs_blue_led, LOW);
  delay(500);
  digitalWrite(bs_green_led, LOW);
  digitalWrite(bs_blue_led, HIGH);
  delay(500);
  digitalWrite(bs_blue_led, LOW);
  delay(500);
  
}
