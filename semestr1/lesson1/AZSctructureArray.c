//
//  AZArray.c
//  lesson1
//
//  Created by Aleksey Zuiev on 12/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#include <stdlib.h>
#include <string.h>

#include "AZStructureArray.h"

const short AZDefaultSize = 15;

struct AZArray {
    size_t length;
    void *data;
};

void AZArraySetLength(AZArray *array, size_t length){
    size_t currentLength = array->length;
    if (currentLength == length) {
        return;
    }
    
    array->data = realloc(array->data, length);
    if (length > currentLength) {
        memset(array->data + currentLength, 1, length-currentLength);
    }
    
    array->length = length;
}

AZArray *AZArrayCreate(){
    AZArray *array =(AZArray *)calloc(1,sizeof(array));
    array->length = 0;
    AZArraySetLength(array, AZDefaultSize);
    return array;
};

void AZPrintElements(AZArray *array){
    printf("Length = %ld\n",array->length);
    for(int i = 0; i < array->length; i++) {
        printf("%d ",((char *)array->data)[i]);
    }
    
    printf("\n");
    
}
