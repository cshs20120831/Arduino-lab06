#include <Keypad.h>
const byte ROWS = 4; // 4 Rows
const byte COLS = 4; // 4 Columns
char keys[ROWS][COLS] = 
{
  {'A', 'B', 'C', 'D'}, {'E','F','G', 'H'},
  {'I', 'J', 'K', 'L'}, {'M', 'N', 'O', 'P'}
};
int tune[]={};
byte rowPins[ROWS] = {5, 4, 3, 2};
byte colPins[COLS] = {9, 8, 7, 6};
Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);
void setup()
{
  pinMode(10, OUTPUT);
}
void loop()
{
  char x = keypad.getKey();
             
  if (x!= NO_KEY)        // 有按下按鍵
  { 
      if(x=='A')
      {
        tone(10, 261);
        delay(300);        
        noTone(10);
      }
      else if(x=='B')
      {
        tone(10, 294);
        delay(300);        
        noTone(10);
      }
      else if(x=='C')
      {
        tone(10, 329);
        delay(300);        
        noTone(10);
      }
      else if(x=='D')
      {
        tone(10, 349);
        delay(300);        
        noTone(10);
      }
      else if(x=='E')
      {
        tone(10, 392);
        delay(300);        
        noTone(10);
      }
      else if(x=='F')
      {
        tone(10, 440);
        delay(300);        
        noTone(10);
      }
      else if(x=='G')
      {
        tone(10, 493);
        delay(300);        
        noTone(10);
      }
      else if(x=='H')
      {
        tone(10, 523);
        delay(300);        
        noTone(10);
      }
      else if(x=='I')
      {
        tone(10, 587);
        delay(300);        
        noTone(10);
      }
      else if(x=='J')
      {
        tone(10, 659);
        delay(300);        
        noTone(10);
      }
      else if(x=='K')
      {
        tone(10, 698);
        delay(300);        
        noTone(10);
      }
      else if(x=='L')
      {
        tone(10, 784);
        delay(300);        
        noTone(10);
      }
      else if(x=='M')
      {
        tone(10, 880);
        delay(300);        
        noTone(10);
      }
      else if(x=='N')
      {
        tone(10, 988);
        delay(300);        
        noTone(10);
      }
      else if(x=='O')
      {
        tone(10, 1046);
        delay(300);        
        noTone(10);
      }
      else if(x=='P')
      {
        tone(10, 1175);
        delay(300);        
        noTone(10);
      }
  }
 

}
