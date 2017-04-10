//
//  main.c
//  semestr1
//
//  Created by Aleksey Zuiev on 09/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#include <stdio.h>
#include "mamapapa.h"
#include <stdbool.h>
#include "genmacros.h"

int main(int argc, const char * argv[]) {
    //typesizes
    int s1 = 5;
    int64_t s2 = 5;
    bool s3 = false;
    short s4 = 5;
    char s5 = '5';
    long s6 = 123456;
    float s7 = 5.123;
    double s8 = 123.123;
    char s9 = 'W';
    
    
    printf("%lu\n",sizeof(s1));
    printf("%lu\n",sizeof(s2));
    printf("%lu\n",sizeof(s3));
    printf("%lu\n",sizeof(s4));
    printf("%lu\n",sizeof(s5));
    printf("%lu\n",sizeof(s6));
    
  
    //mamapapa
    for (int i = 0; i<10; i++) {
        printf("%3d.", i);
        printMamaPapa(i);
        printf("\n");
    }
    
    //macros
    
    
    AZGenCallPrintMethod(int,s1);
    AZGenCallPrintMethod(long,s6);
    AZGenCallPrintMethod(double,s8);
    AZGenCallPrintMethod(bool,s2);
    AZGenCallPrintMethod(char,s9);
    AZGenCallPrintMethod(float,s7);
    return 0;
}
