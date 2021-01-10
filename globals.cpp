#include "globals.h"

FileManager *g_filemanager = NULL;
Cpu *g_cpu = NULL;
VM *g_vm = NULL;
PhysicalDisplay *g_display = NULL;
PhysicalKeyboard *g_keyboard = NULL;
PhysicalSpeaker *g_speaker = NULL;
PhysicalPaddles *g_paddles = NULL;
PhysicalPrinter *g_printer = NULL;
VMui *g_ui;
int8_t g_volume = 15;
uint8_t g_displayType = 3; // FIXME m_perfectcolor
VMRam g_ram;
volatile uint8_t g_debugMode = D_NONE;
volatile bool g_biosInterrupt = false;
uint32_t g_speed = 1023000; // Hz
bool g_invertPaddleX = false;
bool g_invertPaddleY = false;

char debugBuf[255];

#ifdef TEENSYDUINO
char fsbuf[200];
#endif
