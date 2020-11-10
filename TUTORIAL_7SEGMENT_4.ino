/*
   TUTORIAL SEVEN SEGMENT PADA ARDUINO
   MENGGUNAKAN CHIP TM1637

   MENAMPILKAN COUNTER PER DETIK

   Pinout :
   CLK -> D10
   DIO -> D11

*/

#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 10
#define DIO 11

#define TEST_DELAY 1000 //1 detik

TM1637Display display(CLK, DIO);

int angka = 0; //variabel counter awal

void setup()
{
  display.setBrightness(0x0f);
}

void loop()
{

  // Menampilkan angka counter rata kanan didahului angka nol
  display.showNumberDec(angka, true);
  delay(TEST_DELAY);
  angka++ ; //tambah 1

  if (angka == 9999) { //kalau mencapai 9999 balikkan ke 0
    angka = 0;
  }


}
