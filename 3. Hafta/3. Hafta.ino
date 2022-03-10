#define BUTTON1PIN 6
#define BUTTON2PIN 7

bool but1durum;
bool but2durum;

const int led1pin = 8;
const int led2pin = 9;
const int led3pin = 10;

void setup()
{
  // Butonlar
  pinMode(BUTTON1PIN, INPUT);
  pinMode(BUTTON2PIN, INPUT);

  //Ledler
  pinMode(led1pin, OUTPUT);
  pinMode(led2pin, OUTPUT);
  pinMode(led3pin, OUTPUT);

  //Serial.begin(9600);
}

void loop()
{
  but1durum = digitalRead(BUTTON1PIN);
  but2durum = digitalRead(BUTTON2PIN);

  /*
  Serial.print("Buton 1 durumu: ");
  Serial.println(but1durum);
  Serial.print("Buton 2 durumu: ");
  Serial.println(but2durum);
  Serial.println("---------------------");
  */

  if (but1durum == 1)
  {
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(9, LOW);
  }
  else if (but2durum == 1)
  {
    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    delay(2000);
    digitalWrite(8, LOW);
    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(10, LOW);
  }
  else
  {
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
  }
}
