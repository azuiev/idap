//
//  genmacros.h
//  lesson1
//
//  Created by Aleksey Zuiev on 09/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#ifndef AZGenMacros_h
#define AZGenMacros_h

#include <stdio.h>

#define AZGenPrintMethod(type, formatter) \
    void AZPrint_##type(type * value) { \
        printf(#formatter "\n",*value); }

#define AZGenCallPrintMethod(type, value) \
    AZPrint_##type(&value)

#endif /* AZGenMacros_h */
