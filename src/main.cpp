#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include "sdkconfig.h"
#include <Arduino.h>

extern "C" void app_main()
{
    // initialize arduino library before we start the tasks
    initArduino();

    // Tapez votre code ici !
} 