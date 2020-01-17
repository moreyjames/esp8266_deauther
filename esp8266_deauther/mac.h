/*
   Copyright (c) 2020 Stefan Kremser
   This software is licensed under the MIT License. See the license file for details.
   Source: github.com/spacehuhn/esp8266_deauther
 */

#pragma once

#include <stdint.h>  // uint8_t
#include <stdbool.h> // bool

namespace mac {
    const static uint8_t BROADCAST[] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };

    bool valid(const uint8_t* mac);
    bool multicast(const uint8_t* mac);
    bool equals(const uint8_t* macA, const uint8_t* macB);

    void fromStr(const char* str, uint8_t* mac);
}