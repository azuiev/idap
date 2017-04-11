//
//  DiffStructure.c
//  lesson1
//
//  Created by Aleksey Zuiev on 11/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#include "DiffStructure.h"
#include <stddef.h>

const int fieldsCount = 3;
//struct AZDiffStructure {
//    char * char1;
//    double double1;
//    short short1;
//    short short2;
//    short short3;
//    long long llong1;
//    int int1;
//    float float1;
//    bool bool1;
//    bool bool2;
//    bool bool3;
//    bool bool4;
//    bool bool5;
//    bool bool6;
//};

struct AZFieldsOrder{
    short offset;
    char * name;
};

typedef  struct AZDiffStructure AZStruct;

#define AZGenStruct(array,i,filed,type)  \
    array[i].name = #filed;              \
    array[i].offset = offsetof(type , filed)

void AZGetFieldPosition(){
    struct AZFieldsOrder order[fieldsCount];

    AZGenStruct(order, 0, char1, AZStruct);
    AZGenStruct(order, 1, short1, AZStruct);
    AZGenStruct(order, 2, double1, AZStruct);
    
    for(int i=0;i<fieldsCount;i++){
        printf("%7s has offset %i\n", order[i].name,order[i].offset);
    }	
 
    
    
}
