#include <bt.h>
#include <PS4Controller.h>
#include <defines.h>

void wait_for_connection(){
  while (!PS4.isConnected()) {
    PS4.begin(MAC_ADDRESS);
    Serial.println("Trying to connect");
    digitalWrite(LED_BLUE, HIGH);
    delay(500);
    digitalWrite(LED_BLUE, LOW);
    delay(500);
  }
}