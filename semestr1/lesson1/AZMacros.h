//
//  genmacros.h
//  lesson1
//
//  Created by Aleksey Zuiev on 09/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#ifndef AZMacros_h
#define AZMacros_h

#include <stdio.h>
#include <stdbool.h>

#define AZGenPrintMethod(type, formatter) \
    void AZPrint_##type(type value) { \
    printf(#formatter "\n",value); \
}

#define AZGenCallPrintMethod(type, value) \
    AZPrint_##type(value)

void AZPrint_int(int value);
void AZPrint_long(long value);
void AZPrint_double(double value);
void AZPrint_bool(bool value);
void AZPrint_char(char value);
void AZPrint_float(float value);

#endif /* AZMacros_h */
