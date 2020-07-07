#include <Arduino.h>
#include <USBHost_t36.h>
#include "teensy-usb.h"

USBHost myusb;
USBHub hub1(myusb);
USBHub hub2(myusb);
USBHub hub3(myusb);
KeyboardController keyboard1(myusb);
KeyboardController keyboard2(myusb);

TeensyUSB::TeensyUSB()
{
}

TeensyUSB::~TeensyUSB()
{
}

void TeensyUSB::init()
{
  myusb.begin();
}

void TeensyUSB::attachKeypress(keyboardCallback cb)
{
  keyboard1.attachPress(cb);
  keyboard2.attachPress(cb);
}

void TeensyUSB::attachKeyrelease(keyboardCallback cb)
{
  keyboard1.attachRelease(cb);
  keyboard2.attachRelease(cb);
}

void TeensyUSB::maintain()
{
  myusb.Task();
}
