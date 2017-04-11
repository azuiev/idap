//
//  main.c
//  semestr1
//
//  Created by Aleksey Zuiev on 09/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#include <stdio.h>
#include "MamaPapa.h"
#include <stdbool.h>
#include "GenMacros.h"
#include "DiffStructure.h"

int main(int argc, const char * argv[]) {
    
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
        printf("%3d.", i);
        AZPrintMamaPapa(i);
        printf("\n");
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
    
    return 0;
}
