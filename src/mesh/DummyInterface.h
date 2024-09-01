#pragma once

#include "RadioLibInterface.h"

class DummyInterface : public RadioLibInterface
{
  public:
    DummyInterface(LockingArduinoHal *hal, RADIOLIB_PIN_TYPE cs, RADIOLIB_PIN_TYPE irq, RADIOLIB_PIN_TYPE rst,
                    RADIOLIB_PIN_TYPE busy);

    virtual bool init() override;

    bool reconfigure() override { return true; }

    bool sleep() override { return true; }

    bool isIRQPending() override { return false; }

    void disableInterrupt() override { }

    void enableInterrupt(void (*callback)()) {  }

    bool isChannelActive() override { return false; }

    bool isActivelyReceiving() override { return false; }

    void startReceive() override { }

    void configHardwareForSend() override { }

    void addReceiveMetadata(meshtastic_MeshPacket *mp) override { }

    void setStandby() override { }
};

