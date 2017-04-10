//
//  genmacros.h
//  lesson1
//
//  Created by Aleksey Zuiev on 09/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#ifndef genmacros_h
#define genmacros_h

#include <stdio.h>

#define AZGenPrintMethod(type, formatter) \
    void AZPrint_##type(type * value) { \
        printf(#formatter "\n",*value); }

#define AZGenCallPrintMethod(type, value) \
    AZPrint_##type(&value)

#endif /* genmacros_h */
