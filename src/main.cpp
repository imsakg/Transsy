#include <Arduino.h>
#include "pins.h"
#include "values.h"
#include "rgb.h"
#include "screen.h"
#include "RF24.h"

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

// SimpleRx - the slave or the receiver

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

#define CE_PIN 7
#define CSN_PIN 8

const byte thisSlaveAddress[5] = {'R', 'x', 'A', 'A', 'A'};

RF24 radio(CE_PIN, CSN_PIN);

char dataReceived[10]; // this must match dataToSend in the TX
bool newData = false;

//==============

void getData()
{
  if (radio.available())
  {
    radio.read(&dataReceived, sizeof(dataReceived));
    newData = true;
  }
}

void showData()
{
  if (newData == true)
  {
    Serial.print("Data received ");
    Serial.println(dataReceived);
    newData = false;
  }
}

//===========

void setup()
{
  Serial.begin(9600);
  Serial.println("SimpleRx Starting1");
  Serial.println("SimpleRx Starting2");

  Serial.println("SimpleRx Starting");

  radio.begin();

  radio.setPALevel(RF24_PA_HIGH);
  radio.setAutoAck(false);
  radio.disableAckPayload();

  radio.setDataRate(RF24_1MBPS);
  radio.openReadingPipe(1, thisSlaveAddress);
  radio.startListening();
}

//=============

void loop()
{
  getData();
  showData();
}

/* Old code
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8); // nRF24L01 (CE, CSN)
const byte address[6] = "00001";

unsigned long lastReceiveTime = 0;
unsigned long currentTime = 0;

RGB rgb = RGB();
// End of constructor list
uint8_t rows = screen::u8g2.getDisplayHeight();
uint8_t cols = screen::u8g2.getDisplayWidth();

void setup(void)
{
  setPinModes();
  // Sets pins input/output

  screen::setupScreen();
  Serial.begin(9600);
  screen::pre();

  radio.begin();
  radio.openWritingPipe(address);
  radio.setAutoAck(false);
  radio.setDataRate(RF24_250KBPS);
  radio.setPALevel(RF24_PA_LOW);
}

void draw_screen()
{
}

unsigned long t2 = 0;

void loop(void)
{
  unsigned long t1 = millis();
  radio.write(&TOGGLES, sizeof(TOGGLES));

  if (t1 - t2 >= 1) // 1ms
  {
    read_values();
    Serial.print(TOGGLES.SW1_T1);
    Serial.print(TOGGLES.SW1_T2);
    Serial.print(TOGGLES.SW2_T1);
    Serial.println(TOGGLES.SW3_T1);
    t2 = t1;
  }

  if (TOGGLES.SW2_T1 == 0)
  {
    if (TOGGLES.SW1_T1 == 0)
      rgb.setColor(COLOR::red);
    else if (TOGGLES.SW1_T2 == 0)
      rgb.setColor(COLOR::green);
    else
      rgb.setColor(COLOR::blue);

    rgb.turnOn();
  }
  else
  {
    rgb.turnOff();
  };
  draw_screen();
  char s[3];
  itoa(rows, s, 10);
  // screen::u8g2.drawStr(0, 2, s);
  itoa(cols, s, 10);
  // screen::u8g2.drawStr(2, 2, s);
  // screen::u8g2.nextPage();

  screen::u8g2.firstPage();

  do
  {
    screen::u8g2.drawStr(48, 6, "msa!");
    screen::drawSticks();
    screen::drawSticksDots();
    screen::split_screen();
  } while (screen::u8g2.nextPage());

  screen::animateScreen();
}
*/