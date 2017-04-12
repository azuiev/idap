//
//  DiffStructure.c
//  lesson1
//
//  Created by Aleksey Zuiev on 11/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#include "DiffStructure.h"
#include <stddef.h>

const int fieldsCount = 9;

struct AZFieldsOrder{
    short offset;
    char * name;
};

typedef  struct AZDiffStructure AZStruct;

#define AZGenStruct(array,i,filed,type)  \
    array[i].name = #filed;              \
    array[i].offset = offsetof(type , filed)

void AZSwapOffset(struct AZFieldsOrder *array, int index1, int index2){
    int i = array[index1].offset;
    char * s = array[index1].name;
    array[index1].offset = array[index2].offset;
    array[index1].name = array[index2].name;
    array[index2].offset = i;
    array[index2].name = s;
}

void AZSort (struct AZFieldsOrder *array) {
    if (fieldsCount < 2) return;
    int minI, maxI;
    for (int i=0;i<fieldsCount/2;i++){
        minI = i;
        maxI = i;
        for(int j=i+1;j<fieldsCount-i;j++){
            if (array[minI].offset>array[j].offset)
                minI = j;
            if (array[maxI].offset<array[j].offset)
                maxI = j;
        }
        if (maxI == i) maxI = minI;
        if (minI!=i) AZSwapOffset(array,i,minI);
        if (maxI!=fieldsCount-i-1) AZSwapOffset(array,fieldsCount-i-1,maxI);
        
    }
}


void AZGetFieldPosition(){
    struct AZFieldsOrder order[fieldsCount];

    AZGenStruct(order, 0, char1, AZStruct);
    AZGenStruct(order, 1, short1, AZStruct);
    AZGenStruct(order, 2, double1, AZStruct);
    AZGenStruct(order, 3, short2, AZStruct);
    AZGenStruct(order, 4, short3, AZStruct);
    AZGenStruct(order, 5, llong1, AZStruct);
    AZGenStruct(order, 6, int1, AZStruct);
    AZGenStruct(order, 7, float1, AZStruct);
    AZGenStruct(order, 8, bools, AZStruct);
    
//    AZGenStruct(order, 8, bool1, AZStruct);
//    AZGenStruct(order, 9, bool2, AZStruct);
//    AZGenStruct(order, 10, bool3, AZStruct);
//    AZGenStruct(order, 11, bool4, AZStruct);
//    AZGenStruct(order, 12, bool5, AZStruct);
//    AZGenStruct(order, 13, bool6, AZStruct);
    
    AZSort(order);
    for(int i=0;i<fieldsCount;i++){
        printf("%2i -> %7s has offset %i\n",i, order[i].name,order[i].offset);
    }	
}


void AZGetStructureSize(){
    printf("Full size is -> %lu\n",sizeof(struct AZDiffStructure));
}



