//
//  DiffStructure.h
//  lesson1
//
//  Created by Aleksey Zuiev on 11/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#ifndef AZOptimizeSctructure_h
#define AZOptimizeSctructure_h

#include <stdio.h>
#include <stdbool.h>

struct AZDiffStructure {
    double double1;
    short short1;
    short short2;
    short short3;
    union {
        char char1;
        struct {
            bool bool1:1;
            bool bool2:1;
            bool bool3:1;
            bool bool4:1;
            bool bool5:1;
            bool bool6:1;
        } byteBools;
    } bools;
    long long llong1;
    int int1;
    float float1;
    char * char1;

    
};
void AZGetStructureSize();
void AZGetFieldPosition(struct AZDiffStructure structure);

#endif /* AZOptimizeSctructure_h */
