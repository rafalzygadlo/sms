#ifdef ARDUINO
#include <Arduino.h>
#include <SoftwareSerial.h>
#include "test.h"

test::test()
{

}

void test::print()
{
   Serial.begin("test");
}

#endif
