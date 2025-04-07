// Change the width and height for your display
#define TFT_WIDTH  320  // Width of your display
#define TFT_HEIGHT 480  // Height of your display

// Define the ILI9488 driver
#define ILI9488_DRIVER

// Define the pins used for the display
#define TFT_MISO 19  // SDO -> MISO
#define TFT_MOSI 23  // SDI -> MOSI
#define TFT_SCLK 18  // SCK -> SCLK
#define TFT_CS   17  // CS -> Chip select control pin
#define TFT_DC   16  // D/C -> Data Command control pin
#define TFT_RST   5  // RST -> Reset pin (could connect to RST pin)
#define TFT_BL   32  // BL -> LED back-light

// Define the pins used for the touch screen
#define TOUCH_CS 21   // TCS -> Chip select pin (T_CS) of touch screen
#define TOUCH_CLK 22  // TCK -> Clock pin
#define TOUCH_DIN 23  // TD1 -> Data in pin
#define TOUCH_DOUT 19 // TD0 -> Data out pin

// SPI clock frequency settings
#define SPI_FREQUENCY  27000000 // Actually sets it to 26.67MHz = 80/3
#define SPI_READ_FREQUENCY  20000000
#define SPI_TOUCH_FREQUENCY  2500000
