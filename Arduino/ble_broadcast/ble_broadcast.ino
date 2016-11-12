#include <CurieBle.h>

static const char* bluetoothDeviceName = "MyDevice"; // name the device

BLEPeripheral blePeripheral; // initialize bluetooth 

void setup() {
  blePeripheral.setLocalName(bluetoothDeviceName); // set the broadcast name
  blePeripheral.begin(); // start broadcasting
}

void loop() {}

