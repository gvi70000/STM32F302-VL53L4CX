/**
 ******************************************************************************
 * Copyright (c) 2020, STMicroelectronics - All Rights Reserved
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */



#ifndef _VL53LX_TYPES_H_
#define _VL53LX_TYPES_H_


#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef NULL
#error "Error NULL definition should be done. Please add required include "
#endif


#if !defined(STDINT_H) && !defined(_STDINT_H) && !defined(_GCC_STDINT_H) && !defined(__STDINT_DECLS) && !defined(_GCC_WRAP_STDINT_H)  && !defined(_STDINT)

 #pragma message("Please review  type definition of STDINT define for your platform and add to list above ")






typedef unsigned long long uint64_t;



typedef unsigned int uint32_t;


typedef int int32_t;


typedef unsigned short uint16_t;


typedef short int16_t;


typedef unsigned char uint8_t;


typedef signed char int8_t;


#endif



typedef uint32_t FixPoint1616_t;

#endif

