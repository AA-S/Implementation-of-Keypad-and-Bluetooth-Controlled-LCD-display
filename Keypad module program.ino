#include <Keypad.h>
#include <Wire.h>

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);



const byte rows = 4;
const byte cols =3;

char keys[rows][cols]={
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'*','0','#'}
};

byte rowPins[rows]={8,7,6,5};
byte colPins[cols]={4,3,2};

Keypad keypad = Keypad(makeKeymap(keys),rowPins,colPins,rows,cols);

void setup(){
    // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  lcd.setCursor(0,0); 
  //lcd.print("We pressed: ");
  lcd.print("Help : Press Keys for Diff. Actions...");
 
  lcd.setCursor(0,1); 
   // lcd.print("for Diff. Action");
  lcd.print("1:Class, 3:Tea, 4:Mosque, 6:Lab, 7:Home.");
  func();
  
}

void loop(){
  
 char key= keypad.getKey();
 //keypad.waitForKey();
//lcd.setCursor(3,0);
 if(key=='1')
 {
    lcd.clear();
    lcd.print("Now, I am in Class room.");
 }
   
  else if(key=='2')
  {
    lcd.clear();
    lcd.print("Now, I am at Meeting. :)");
  }
  
  else if(key=='3')
  {
       lcd.clear();
       lcd.print("Now, I am at Tea Break. :D");
  }
  else if(key=='4')
  {
    lcd.clear();
    lcd.print("I am at Central  Mosque.");
  }
   
  else if(key=='5')
  {
    lcd.clear();
    lcd.print("Now, I am at Lunch. <3:D");
    //lcd.print("5");
  }
   
  else if(key=='6')
  {
        lcd.clear();
    lcd.print("Now, I am at Laboratory.");
  }
   
  else if(key=='7')
   {
         lcd.clear();
     lcd.print("Now, I am at Home. <3 B|");
   }
  else if(key=='8')
  {
   lcd.setCursor(1,0);
   lcd.print("Help: Press...");
  }
   
 else
 {
    //if(key != NO_KEY)
   //lcd.print(key);
 }
 
 
  // scroll 13 positions (string length) to the left
  // to move it offscreen left:
 
 
 //func();
  
  
}

void func()
{
   for (int positionCounter = 0; positionCounter < 3700; positionCounter++) {
    // scroll one position left:
    lcd.scrollDisplayLeft();
    // wait a bit:
    delay(250);
    loop();
  }
}

      




