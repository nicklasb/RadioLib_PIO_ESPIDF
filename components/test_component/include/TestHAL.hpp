#pragma once

#include <RadioLib.h>


class TestHAL: public RadioLibHal {
  public:
// implementations of pure virtual RadioLibHal methods

    TestHAL();

    void pinMode(uint32_t pin, uint32_t mode) override;
    void digitalWrite(uint32_t pin, uint32_t value) override;
    uint32_t digitalRead(uint32_t pin) override;
    void attachInterrupt(uint32_t interruptNum, void (*interruptCb)(void), uint32_t mode) override;
    void detachInterrupt(uint32_t interruptNum) override;
    void delay(unsigned long ms) override;
    void delayMicroseconds(unsigned long us) override;
    unsigned long millis() override;
    unsigned long micros() override;
    long pulseIn(uint32_t pin, uint32_t state, unsigned long timeout) override;
    void spiBegin() override;
    void spiBeginTransaction() override;
    uint8_t spiTransfer(uint8_t b) override;
    void spiEndTransaction() override;
    void spiEnd() override;

    // implementations of virtual RadioLibHal methods
    void init() override;
    void term() override;
    void tone(uint32_t pin, unsigned int frequency, unsigned long duration = 0) override;
    void noTone(uint32_t pin) override;
    void yield() override;
    uint32_t pinToInterrupt(uint32_t pin) override;
};
