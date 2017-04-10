//
//  genmacros.c
//  lesson1
//
//  Created by Aleksey Zuiev on 09/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#include "genmacros.h"
#include "stdbool.h"

AZGenPrintMethod(int, %i);
AZGenPrintMethod(long, %ld);
AZGenPrintMethod(double, %5.5lf);
AZGenPrintMethod(bool, %d);
AZGenPrintMethod(char, %c);
AZGenPrintMethod(float, %f);



	
