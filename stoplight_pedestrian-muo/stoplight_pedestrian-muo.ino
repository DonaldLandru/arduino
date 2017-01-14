// variables
/// Name pins to lights
int green = 8;
int yellow = 9;
int red = 10;
/// specify button location
int button = 12;


// basic functions
void setup()
{
  /// setup PIN modes
  // specifying LED as output 
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red,OUTPUT);
  
  // specifying button as input
  pinMode(button,INPUT);
  
  // set green LED on by default
  digitalWrite(green,HIGH);
}

// wait for button input, software debounce, and repeat delay
void loop()
{
  if (digitalRead(button) == HIGH) {
    delay(15); //software debounce
     if (digitalRead(button) == HIGH) {
      // if the switch is HIGH, ie. pushed down -- change the lights!
      changeLights();
      delay(15000); // wait for 15 seconds
     }
  }
}


// function changeLights(), code responisble for controlling lights
void changeLights() 
{
  // green off, yellow on for 3 seconds
  digitalWrite(green,LOW);
  digitalWrite(yellow,HIGH);
  delay(3000);

  // turn off yellow, then turn red on for 5 seconds
  digitalWrite(yellow,LOW);
  digitalWrite(red,HIGH);
  delay(5000);

  // turn off red and yellow, then turn on green
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(3000);
}


