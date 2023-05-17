#include "TestHAL.hpp"

TestHAL::TestHAL(): 
  RadioLibHal(0, 1, 2, 3, 4, 5) {}

void TestHAL::init() {

}

void TestHAL::term() {

}

void inline TestHAL::pinMode(uint32_t pin, uint32_t mode) {

}
void inline TestHAL::digitalWrite(uint32_t pin, uint32_t value) {

}

uint32_t inline TestHAL::digitalRead(uint32_t pin) {

  return 0;
}

void inline TestHAL::attachInterrupt(uint32_t interruptNum, void (*interruptCb)(void), uint32_t mode) {

}

void inline TestHAL::detachInterrupt(uint32_t interruptNum) {

}

void inline TestHAL::delay(unsigned long ms) {

}

void inline TestHAL::delayMicroseconds(unsigned long us) {

}

unsigned long inline TestHAL::millis() {
  return 0;
}

unsigned long inline TestHAL::micros() {
  return 0;
}

long inline TestHAL::pulseIn(uint32_t pin, uint32_t state, unsigned long timeout) {
  return 0;
}

void inline TestHAL::spiBegin() {

}

void inline TestHAL::spiBeginTransaction() {

}

uint8_t inline TestHAL::spiTransfer(uint8_t b) {
  return 0;
}

void inline TestHAL::spiEndTransaction() {

}

void inline TestHAL::spiEnd() {

}

void inline TestHAL::tone(uint32_t pin, unsigned int frequency, unsigned long duration) {
  
}

void inline TestHAL::noTone(uint32_t pin) {

}

void inline TestHAL::yield() {

}

uint32_t inline TestHAL::pinToInterrupt(uint32_t pin) {
    return 0;
}