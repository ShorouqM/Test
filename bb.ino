#include <SoftwareSerial.h>
SoftwareSerial BTserial1(11, 10); // RX | TX

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    Serial.println("Arduino with HC-06 is ready");
}

void loop() {
  // put your main code here, to run repeatedly:
 
  if (BTserial1.available()){
      for(int i=1;i<20;i++)
        {char incomingByte[i-1] = BTserial1.read();
            if(incomingByte[i-1] == '0' )
              incomingByte[i] = BTserial1.read();
              Serial.println(incomingByte);}
}
}
