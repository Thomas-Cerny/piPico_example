#include <iostream>

#include "utilities.h"

using namespace Typedef;

int main(void)
{
    Hardware::I2c::Init();

    uint8 random_val = Hardware::I2c::LED_PIN;

    std::cout << Math::SQUARE<int>(5 + 1) << std::endl;
}