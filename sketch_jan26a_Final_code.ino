#include <Alfredo_NoU2.h>
#include <AlfredoConnect.h>
#include <BluetoothSerial.h>

NoU_Motor backright(1);
NoU_Motor backleft(3);
NoU_Motor frontright(2);
NoU_Motor frontleft(4);
NoU_Servo armbottom(2);
NoU_Servo armtop(1);
NoU_Servo pincherleft(4);
NoU_Servo pincherright(3);
BluetoothSerial bluetooth;
bool autoflag = false;
bool autoflag2 = false;

void setup() {
    bluetooth.begin("JUDGY BOI 3000!"); // Change this name before uploading!
    AlfredoConnect.begin(bluetooth);
    bluetooth.println("Starting robot.");
    pinMode(2, OUTPUT); // Use the LED_BUILTIN constant
}

void loop() {
      float throttle = 0;
      float rotation = 0;

    // Set the throttle of the robot based on what key is pressed

if (AlfredoConnect.keyHeld(Key::Z)) {
      bluetooth.println("Press Z. WWWWW");

        //Picks up cube and goes back
        pincherleft.write(125);
        pincherright.write(20);
        delay(100);
        frontright.set(-1);
        frontleft.set(-1);
        backright.set(-1);
        backleft.set(-1);
        delay(100);      
        frontright.set(0); 
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);
        //Picks up cube and goes back
        delay (1000);

        //turns right and goes forward towards middle of bottom row E 
              bluetooth.println("Press Z. EEEEE");

        armtop.write(140);
        frontright.set(-1);
        frontleft.set(1);
        backright.set(-1);
        backleft.set(1);
        delay(17);
        frontright.set(0); 
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);
        delay(17);
        frontright.set(1);
        frontleft.set(1);
        backright.set(1);
        backleft.set(1);
        delay(107);
        frontright.set(0); 
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);

        //turns right and goes forward towards middle of bottomest row EEE

        delay(1000);
        //drops cube in middle of bottomest row position  RRRR
        bluetooth.println("Press Z. RRRRRR");

        pincherleft.write(95);
        pincherright.write(55);
        //drops cube in middle of bottomest row position  RRRR

        delay(1000);
        bluetooth.println("Press Z. TTTT");


        //goes back and moves arm TTTTTT
        frontright.set(-0.8);
        frontleft.set(-0.8);
        backright.set(-0.8);
        backleft.set(-0.8);
        delay(50);
        frontright.set(0); 
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);
        armtop.write(165);
        armbottom.write(180);

        //goes back and moves arm TTTTTT


        delay(5000);

        //turns left and goes forwards YYYYY
                      bluetooth.println("Press Z. YYYYY");

        frontright.set(0.78);
        frontleft.set(-0.78);
        backright.set(0.78);
        backleft.set(-0.78);
        delay(60);
        frontright.set(0);
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);

        frontright.set(1);
        frontleft.set(1);
        backright.set(1);
        backleft.set(1);
        delay(110);   
        frontright.set(0);
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);
                  
       //turns left and goes forwards  YYYYY
        delay(5000);

       //grabs upper cube and goes back U
                     bluetooth.println("Press Z. UUUUU");

        pincherleft.write(125);
        pincherright.write(20);
        delay(100);;
        frontright.set(-1);
        frontleft.set(-1);
        backright.set(-1);
        backleft.set(-1);
        delay(100); 
        frontright.set(0); 
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);
       //grabs upper cube and goes back U
        delay(5000);

      //  //moves to right side turns IIIII
      //   autoflag = true;
      //   frontright.set(-0.8);
      //   frontleft.set(0.8);
      //   backright.set(-0.8);
      //   backleft.set(0.8);
      //   delay(450);
      //   frontright.set(0); 
      //   frontleft.set(0);
      //   backright.set(0);
      //   backleft.set(0);
      //   delay(300);
      //   frontright.set(0.8);
      //   frontleft.set(0.8);
      //   backright.set(0.8);
      //   backleft.set(0.8);
      //   delay(450);
      //   frontright.set(0); 
      //   frontleft.set(0);
      //   backright.set(0);
      //   backleft.set(0);
      //   delay(300);
      //   frontright.set(0.82);
      //   frontleft.set(-0.82);
      //   backright.set(0.82);
      //   backleft.set(-0.82);
      //   delay(450);
      //   frontright.set(0); 
      //   frontleft.set(0);
      //   backright.set(0);
      //   backleft.set(0);

    // OOOOOOO
                         bluetooth.println("Press Z. OOOOOO");

    frontright.set(0.84);
    frontleft.set(0.84);
    backright.set(0.84);
    backleft.set(0.84);
    delay(200);
    frontright.set(0);
    frontleft.set(0);
    backright.set(0);
    backleft.set(0);
    armtop.write(164);
    // OOOOOOO

     bluetooth.println("Press Z. PPPP");

   pincherleft.write(95);
   pincherright.write(55);
   frontright.set(-1);
   frontleft.set(-1);
   backright.set(-1);
   backleft.set(-1);
   delay(500);

   frontright.set(0);
   frontleft.set(0);
   backright.set(0);
   backleft.set(0);
       bluetooth.println("im pressing BB");
       digitalWrite(2, HIGH); // Turn on the LED
       delay(9000);                     // Wait for 1 second
      //  digitalWrite(2, LOW);  // Turn off the LED
      //  delay(1000);                     // Wait for 1 second
    }

    if (AlfredoConnect.keyHeld(Key::Q)) {
        pincherleft.write(95);
        pincherright.write(55);
        armbottom.write(105);
        armtop.write(140); 
//starting position
    }

    if (AlfredoConnect.keyHeld(Key::X)) {
       bluetooth.println("im pressing w");
        frontright.set(1);
        frontleft.set(1);
        backright.set(1);
        backleft.set(1);

    }

    
    else if (AlfredoConnect.keyHeld(Key::S)) {
        frontright.set(-1);
        frontleft.set(-1);
        backright.set(-1);
        backleft.set(-1);
    }

    // Set which direction the robot should turn based on what key is pressed
    else if (AlfredoConnect.keyHeld(Key::D)) {
      frontright.set(-1);
        frontleft.set(1);
        backright.set(-1);
        backleft.set(1);
    }
    else if (AlfredoConnect.keyHeld(Key::A)) {
        frontright.set(1);
        frontleft.set(-1);
        backright.set(1);
        backleft.set(-1);
    }
    else {
        frontright.set(0); 
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);
    }
    // Make the robot drive
// Control the servo
    if (AlfredoConnect.keyHeld(Key::W)) {
        pincherleft.write(125);
        pincherright.write(20);
        delay(100);
        frontright.set(-1);
        frontleft.set(-1);
        backright.set(-1);
        backleft.set(-1);
        delay(100);      
        frontright.set(0); 
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);

        //Picks up cube and goes back
     }
   

 if (AlfredoConnect.keyHeld(Key::E)) {
        armtop.write(140);
        frontright.set(-1);
        frontleft.set(1);
        backright.set(-1);
        backleft.set(1);
        delay(17);
        frontright.set(0); 
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);
        delay(17);
        frontright.set(1);
        frontleft.set(1);
        backright.set(1);
        backleft.set(1);
        delay(107);

        //turns right and goes forward towards middle of bottomest row
     }
     


     if (AlfredoConnect.keyHeld(Key::R)) {
        pincherleft.write(95);
        pincherright.write(55);
        //drops cube in middle of bottomest row position
     }
     

     if (AlfredoConnect.keyHeld(Key::T)) {
      
        frontright.set(-0.8);
        frontleft.set(-0.8);
        backright.set(-0.8);
        backleft.set(-0.8);
        delay(50);
        armtop.write(165);
        armbottom.write(180);

        //goes back and moves arm 
     
     }
    

     if (AlfredoConnect.keyHeld(Key::Y)) {
      
        frontright.set(0.78);
        frontleft.set(-0.78);
        backright.set(0.78);
        backleft.set(-0.78);
        delay(60);
        frontright.set(0);
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);

        frontright.set(1);
        frontleft.set(1);
        backright.set(1);
        backleft.set(1);
        delay(110);   
        frontright.set(0);
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);
                  
                  //turns left and goes forwards
     }

    
    

     if (AlfredoConnect.keyHeld(Key::U)) {
      
        pincherleft.write(125);
        pincherright.write(20);
        delay(100);;
        frontright.set(-1);
        frontleft.set(-1);
        backright.set(-1);
        backleft.set(-1);
        delay(100); 

     }
 if (AlfredoConnect.keyHeld(Key::I) && autoflag == false) {

        autoflag = true;
        frontright.set(-0.8);
        frontleft.set(0.8);
        backright.set(-0.8);
        backleft.set(0.8);
        delay(450);
        frontright.set(0); 
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);
        delay(300);
        frontright.set(0.8);
        frontleft.set(0.8);
        backright.set(0.8);
        backleft.set(0.8);
        delay(450);
        frontright.set(0); 
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);
        delay(300);
        frontright.set(0.82);
        frontleft.set(-0.82);
        backright.set(0.82);
        backleft.set(-0.82);
        delay(450);
        frontright.set(0); 
        frontleft.set(0);
        backright.set(0);
        backleft.set(0);

     }
 if (AlfredoConnect.keyHeld(Key::O)) {
    frontright.set(0.84);
    frontleft.set(0.84);
    backright.set(0.84);
    backleft.set(0.84);
    delay(200);
    frontright.set(0);
    frontleft.set(0);
    backright.set(0);
    backleft.set(0);
    armtop.write(164);
 }


 
 if (AlfredoConnect.keyHeld(Key::P) && autoflag2 == false) {
  
   autoflag2 = true;
   pincherleft.write(95);
   pincherright.write(55);
   frontright.set(-1);
   frontleft.set(-1);
   backright.set(-1);
   backleft.set(-1);
   delay(500);
   frontright.set(0); 
   frontleft.set(0);
   backright.set(0);
   backleft.set(0);
  //  delay(300);
  //  frontright.set(-1);
  //  frontleft.set(1);
  //  backright.set(-1);
  //  backleft.set(1);
  //  delay(500);
  //  frontright.set(1);
  //  frontleft.set(1);
  //  backright.set(1);
  //  backleft.set(1);
  //  delay(600);
  //  frontright.set(0); 
  //  frontleft.set(0);
  //  backright.set(0);
  //  backleft.set(0);
  //  delay(5000);
  //  frontright.set(1);
  //  frontleft.set(1);
  //  backright.set(1);
  //  backleft.set(1);
  //  delay(600);
  //  frontright.set(0);
  //  frontleft.set(0);
  //  backright.set(0);
  //  backleft.set(0);

       bluetooth.println("im pressing BB");
       digitalWrite(2, HIGH); // Turn on the LED
       delay(9000);                     // Wait for 1 second
       digitalWrite(2, LOW);  // Turn off the LED
       delay(1000);                     // Wait for 1 second


}

AlfredoConnect.update();

}
