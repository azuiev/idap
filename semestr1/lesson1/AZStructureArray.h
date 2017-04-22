//
//  AZArray.h
//  lesson1
//
//  Created by Aleksey Zuiev on 12/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#ifndef AZArray_h
#define AZArray_h

#include <stdio.h>

typedef struct AZArray AZArray;

AZArray *AZArrayCreate();

void AZPrintElements(AZArray *array);

#endif /* AZArray_h */
