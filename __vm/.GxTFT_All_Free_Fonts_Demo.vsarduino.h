/* 
	Editor: https://www.visualmicro.com/
			This file is for intellisense purpose only.
			Visual micro (and the arduino ide) ignore this code during compilation. This code is automatically maintained by visualmicro, manual changes to this file will be overwritten
			The contents of the _vm sub folder can be deleted prior to publishing a project
			All non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
			Note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Generic STM32F407V series, Platform=STM32F4, Package=stm32duino
*/

#if defined(_VMICRO_INTELLISENSE)

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define BOARD_generic_f407v
#define VECT_TAB_FLASH
#define USER_ADDR_ROM (uint32)0x08000000
#define ERROR_LED_PORT GPIOA
#define ERROR_LED_PIN 7
#define F_CPU 168000000L
#define ARDUINO 108010
#define ARDUINO_STM32GenericF407VET6
#define ARDUINO_ARCH_STM32F4
#define STM32_HIGH_DENSITY
#define STM32F4
#define SERIAL_USB
#define USER_ADDR_ROM (uint32)0x08000000
#define __STM32F4__
#define __cplusplus 201103L
#define __inline__
#define __asm__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __volatile__


//#define __ICCARM__
#define __ASM
#define __INLINE
#define __builtin_va_list void
//#define _GNU_SOURCE 
#define __GNUC__ 3
//#undef  __ICCARM__
//#define __GNU__

#define __ARMCC_VERSION 400678
#define __attribute__(noinline)

#define prog_void
#define PGM_VOID_P int

            
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}



#include "wprogram.h"
#include <generic_f407v.h> 
#include <pins_arduino.h> 
#include <variant.h> 
#include <generic_f407v.cpp> 
#undef cli
#define cli()
#include "GxTFT_All_Free_Fonts_Demo.ino"
#endif
#endif
