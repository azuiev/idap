//
//  DiffStructure.h
//  lesson1
//
//  Created by Aleksey Zuiev on 11/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#ifndef DiffStructure_h
#define DiffStructure_h

#include <stdio.h>
#include <stdbool.h>

#endif /* DiffStructure_h */

struct AZDiffStructure {
        char * char1;
        double double1;
        short short1;
        short short2;
        short short3;
        long long llong1;
        int int1;
        float float1;
        bool bool1;
        bool bool2;
        bool bool3;
        bool bool4;
        bool bool5;
    bool bool6;
};
void AZGetFieldPosition(struct AZDiffStructure structure);
