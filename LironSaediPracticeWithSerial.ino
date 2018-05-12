#include <Adafruit_NeoMatrix.h>
#include <gamma.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>

Adafruit_NeoMatrix matrix(8, 8, 2);

void setup()
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  matrix.begin();
  matrix.setBrightness(30);
  matrix.clear();
}

void loop() 
{
  // put your main code here, to run repeatedly:
  matrix.show();
  char letter;
  if (Serial.available())
  {
    letter = Serial.read();

  }

  if ( letter == 'R')
  {

    for (int i = 0; i < 8; i ++)
    {
      for (int j = 0; j < 8; j++)
      {
        matrix.drawPixel(i, j, matrix.Color(255, 0, 0));
      }
    }
  }

  if (letter ==  'G')
  {
    for (int i = 0; i < 8; i++)
    {
      for (int j = 0; j < 8; j++)
      {
        matrix.drawPixel(i, j, matrix.Color(0, 255, 0));

      }
    }
  }

  if (letter == 'B')
  {
    for (int i = 0; i < 8; i ++)
    {
      for (int j = 0; j < 8; j ++)
      {
        matrix.drawPixel(i, j, matrix.Color(0, 0, 255));
      }
    }
  }
}
