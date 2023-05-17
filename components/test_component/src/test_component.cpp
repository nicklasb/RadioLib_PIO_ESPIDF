#include "test_component.hpp"

#include "TestHAL.hpp"
#include <RadioLib.h>

void test (){
    TestHAL *hal = new TestHAL();
    SX1272 radio = new Module(hal, 1, 2, 3, 4);

}

    