#pragma once

#include <stdint.h>

#include "pico/stdlib.h"
#include "hardware/i2c.h"

//datove typy
namespace Typedef {
    using int8 = int8_t;
    using int16 = int16_t;
    using int32 = int32_t;
    using int64 = int64_t;

    using uint8 = uint8_t;
    using uint16 = uint16_t;
    using uint32 = uint32_t;
    using uint64 = uint64_t;
}

//hardware
namespace Hardware {
    namespace I2c {
        constexpr uint8_t LED_PIN = 25;
        void Init();
    }

    namespace Gpio {
        void Init();
    }
}

namespace Math {
    template <typename T> T SQUARE(T x)
    {
        return (x) * (x);
    }
}