#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "esp_log.h"
#include <test_component.hpp>

extern "C" void app_main() {

    test();
    while (0) {
        ESP_LOGI("", "Doing");
        vTaskDelay(1000/portTICK_PERIOD_MS);
    }

}