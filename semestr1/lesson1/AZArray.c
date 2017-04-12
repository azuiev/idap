//
//  AZArray.c
//  lesson1
//
//  Created by Aleksey Zuiev on 12/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#include <stdlib.h>
#include "AZArray.h"

const short DefaultSize =100;
struct AZArray {
    int length;
    void *data;
};

void AZArraySetLength(AZArray *array, int length){
    
    if (array->length == length) return;
    
    array->length = length;
    
    array->data = realloc(array->data, length);
}

AZArray *AZArrayCreate(){
    AZArray *array =(AZArray *)calloc(1,sizeof(array));
    AZArraySetLength(array, DefaultSize);
    return array;
};
