#define HAS_SCREEN 0

#define I2C_SCL SCL
#define I2C_SDA SDA

#define LED_PIN LED
#define BUTTON_PIN BTN

#define USE_SX1262

#define LORA_DIO0 RADIOLIB_NC // a No connect on the SX1262 module
#define LORA_RESET A2
#define LORA_DIO1 A4
#define LORA_DIO2 D13

#define LORA_SCK SCK
#define LORA_MISO MISO
#define LORA_MOSI MOSI
#define LORA_CS A5

#define SX126X_CS LORA_CS
#define SX126X_DIO1 LORA_DIO1
#define SX126X_RESET LORA_RESET
#define SX126X_BUSY A3
#define SX126X_RXEN D10
#define SX126X_TXEN D9

#define SX126X_DIO3_TCXO_VOLTAGE 1.8