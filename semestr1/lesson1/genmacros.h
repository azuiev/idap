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

#define genPrintMethod(type, formatter) \
        void print_##type(type value) { \
            printf(#formatter "\n",value); }

void print_int(int value);
#endif /* genmacros_h */
