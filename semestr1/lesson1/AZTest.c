//
//  AZTest.c
//  lesson1
//
//  Created by Aleksey Zuiev on 22/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#include "AZTest.h"

#include "AZMamaPapa.h"
#include "AZMacros.h"
#include "AZOptimizeStructure.h"
#include "AZConvertToBits.h"
#include "AZStructureArray.h"

void AZTestStrucureArray(){
    AZArray *array = AZArrayCreate();
    AZPrintElements(array);
}

void AZRunTest() {
    
    //init
    int s1 = 5;
    int64_t s2 = 5;
    bool s3 = false;
    short s4 = 5;
    char s5 = 'W';
    long s6 = 123456;
    float s7 = 5.123;
    double s8 = 123.123;
    char * format = "%8s take %lu Bytes\n";
    
    AZTestStrucureArray();
    
    //typesizes
    printf(format,"int", sizeof(s1));
    printf(format,"int64", sizeof(s2));
    printf(format,"bool", sizeof(s3));
    printf(format,"short",  sizeof(s4));
    printf(format,"char",  sizeof(s5));
    printf(format,"long",  sizeof(s6));
    printf(format,"float",  sizeof(s7));
    printf(format,"double",  sizeof(s8));
    
    //mamapapa
    for (int i = 0; i<10; i++) {
        AZPrintMamaPapa(i);
    }
    
    //macros
    AZGenCallPrintMethod(int,s1);
    AZGenCallPrintMethod(long,s6);
    AZGenCallPrintMethod(double,s8);
    AZGenCallPrintMethod(bool,s2);
    AZGenCallPrintMethod(char,s5);
    AZGenCallPrintMethod(float,s7);
    
    //structure;
    struct AZDiffStructure myStruct;
    AZGetFieldPosition(myStruct);
    AZGetStructureSize();
    
    //print bites
    int temp =14;
    AZPrintBits((char *)&temp, sizeof(temp));
    long long2 = 511;
    AZPrintBits((char *)&long2, sizeof(long2));
}

