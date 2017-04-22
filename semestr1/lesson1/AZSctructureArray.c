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

const short AZDefaultStructureSize = 100;

struct AZArray {
    size_t refCount;
    size_t length;
    void *data;
};

void AZArraySetLength(AZArray *array, size_t length) {
    size_t currentLength = array->length;
    if (currentLength == length) {
        return;
    }
    
    array->data = realloc(array->data, length);
    if (NULL == array->data) {
        printf("ALARM!");
        return;
    }
    
    if (length > currentLength) {
        memset(array->data + currentLength, 125, length-currentLength);
    }
    
    array->length = length;
}

void AZArrayFree(AZArray *array) {
    AZArraySetLength(array, 0);
    free(array);
}

void AZArrayRelease(AZArray *array) {
    array->refCount -= 1;
    if (0 == array->refCount) {
        AZArrayFree(array);
    }
}

void AZArrayRetain(AZArray *array) {
    array->refCount += 1;
}

AZArray *AZArrayCreate() {
    AZArray *array = (AZArray *)calloc(1, sizeof(array));
    AZArrayRetain(array);
    array->length = 0;
    AZArraySetLength(array, AZDefaultStructureSize);
    return array;
};

void AZPrintElements(AZArray *array){
    printf("Length = %ld -> %ld\n",array->length, array->refCount);
    for(int i = 0; i < array->length; i++) {
        printf("%d ",((char *)array->data)[i]);
    }

    printf("\n");
    
}
