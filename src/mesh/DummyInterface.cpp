#include "DummyInterface.h"


DummyInterface::DummyInterface(LockingArduinoHal *hal, RADIOLIB_PIN_TYPE cs, RADIOLIB_PIN_TYPE irq, RADIOLIB_PIN_TYPE rst,
                                    RADIOLIB_PIN_TYPE busy)
    : RadioLibInterface(hal, cs, irq, rst, busy)
{
}


bool DummyInterface::init()
{
    digitalWrite(module.getRst(), LOW);
    gpio_sleep_sel_dis(static_cast<gpio_num_t>(module.getRst()));
    gpio_sleep_set_direction(static_cast<gpio_num_t>(module.getRst()), GPIO_MODE_OUTPUT);
    return true;
}