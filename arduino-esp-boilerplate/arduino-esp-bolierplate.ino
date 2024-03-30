/*

 */

#include <Arduino.h>

#include "credentials.h"

// Serial monitor debug messages levels ---------------------

#define SERIAL_MONITOR_DEBUG_VERBOSE_LEVEL -1 // -1 for off, 0 warning, 1 error, 2 info

#if SERIAL_MONITOR_DEBUG_VERBOSE_LEVEL >= 0
#define SERIAL_MONITOR_WARN( print_arg ) print_arg
#else
#define SERIAL_MONITOR_WARN( print_arg )
#endif
#if SERIAL_MONITOR_DEBUG_VERBOSE_LEVEL >= 1
#define SERIAL_MONITOR_ERROR( print_arg ) print_arg
#else
#define SERIAL_MONITOR_ERROR( print_arg )
#endif
#if SERIAL_MONITOR_DEBUG_VERBOSE_LEVEL >= 2
#define SERIAL_MONITOR_INFO( print_arg ) print_arg
#else
#define SERIAL_MONITOR_INFO( print_arg )
#endif


// Built-in LED --------------------------------------------

#ifdef ESP32
  // Different ESP32 boards use different pins
  const int LED_PIN = 2;
#else
  const int LED_PIN = LED_BUILTIN;
#endif

// LED states. Some microcontrollers wire their built-in LED the reverse.
const int LED_ON = HIGH;
const int LED_OFF = LOW;







void setup() {
  delay(1000); // some microcontrollers reboot twice
  Serial.begin(115200);
  while (! Serial); // Wait until Serial is ready
  SERIAL_MONITOR_INFO( Serial.println("Serial monitor started.") );
  
  
  // initialize built-in LED as an output
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LED_OFF);
  
  // The power needs to be reduced for the Node MCU to connect to the wifi.
  // WiFi.setOutputPower(17.5); 
  // SERIAL_MONITOR_INFO( Serial.println("WiFi output power reduced to 17.5.") );
  
}

void loop() {

	
	
}
