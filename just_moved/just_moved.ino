#include <AFMotor.h>



AF_DCMotor motor1(1, MOTOR12_8KHZ); 
AF_DCMotor motor2(2, MOTOR12_8KHZ);

AF_DCMotor motor3(3, MOTOR12_8KHZ); 
AF_DCMotor motor4(4, MOTOR12_8KHZ);

/*
AF_DCMotor motor1(3, MOTOR12_8KHZ); 
AF_DCMotor motor2(4, MOTOR12_8KHZ);
 */

void setup() {
 
  motor1.setSpeed(250);
  motor2.setSpeed(250);
  motor3.setSpeed(250);
  motor4.setSpeed(250);

  Serial.begin(9600);
  
}
void basic_move(){
  
        motor1.run(FORWARD);
      motor2.run(FORWARD);   
      motor3.run(FORWARD);
      motor4.run(FORWARD);
      delay(1400);
      motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
    delay(1000);
   motor1.run(BACKWARD);  
   motor2.run(BACKWARD);  
   motor3.run(BACKWARD); 
   motor4.run(BACKWARD);
   delay(1400);
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
    delay(1000);
  
  }


void loop(){

basic_move();
   
    //turn left
    motor1.run(BACKWARD);
    motor2.run(FORWARD);
    motor4.run(BACKWARD);
    motor3.run(FORWARD);
    delay(1000);
     basic_move();

    //turn right
    motor1.run(FORWARD);
    motor2.run(BACKWARD);
    motor4.run(FORWARD);
    motor3.run(BACKWARD);
    delay(1000);
    motor1.run(FORWARD);
    motor2.run(BACKWARD);
    motor4.run(FORWARD);
    motor3.run(BACKWARD);
    delay(1000);
      basic_move();
     motor1.run(BACKWARD);
    motor2.run(FORWARD);
     motor4.run(BACKWARD);
    motor3.run(FORWARD);
    
    delay(1000);
    motor1.run(RELEASE);
    motor2.run(RELEASE);
    motor3.run(RELEASE);
    motor4.run(RELEASE);
    delay(8000);
    


  
}
