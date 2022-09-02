#include<Servo.h> 

Servo servo_1;
Servo servo_2;
Servo servo_3;
Servo servo_4;
Servo servo_5;      

void setup() {
  servo_1.attach(12); 
  servo_2.attach(10);
  servo_3.attach(9);
  servo_4.attach(6);
  servo_5.attach(2); 
  delay(500);
  servo_1.write(165);
  servo_2.write(165);
  servo_3.write(165);
  servo_4.write(165);
  servo_5.write(165);
  delay(5000);
}

void loop() {
    
  for(int i = 165; i > 0; i--) { servo_1.write(i);  }
  for(int i = 165; i > 0; i--) { servo_2.write(i);  }
  for(int i = 165; i > 0; i--) { servo_3.write(i);  }
  for(int i = 165; i > 0; i--) { servo_4.write(i);  }
  for(int i = 165; i > 0; i--) { servo_5.write(i);  }
  delay(1000);
  for(int i= 0; i < 166 ; i++) { servo_1.write(i);  }
  for(int i= 0; i < 166 ; i++) { servo_2.write(i);  }
  for(int i= 0; i < 166 ; i++) { servo_3.write(i);  }
  for(int i= 0; i < 166 ; i++) { servo_4.write(i);  }
  for(int i= 0; i < 166 ; i++) { servo_5.write(i);  }
  delay(1000);

}
