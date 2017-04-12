//
//  ConvertToBites.c
//  lesson1
//
//  Created by Aleksey Zuiev on 12/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#include "ConvertToBites.h"
#include <stdbool.h>
union {
    char char1;
    struct {
        bool bool1:1;
        bool bool2:1;
        bool bool3:1;
        bool bool4:1;
        bool bool5:1;
        bool bool6:1;
        bool bool7:1;
        bool bool8:1;
    } bools;
} convertUnion;

bool IsLittleEndian(){
    short temp = 1;
    return ((char *)&temp)[0]==1;
};

void AZPrintBites(char * c, int count){
    for(int i=0;i<count;i++){
        convertUnion.char1 = IsLittleEndian() ?  c[i] : c[count -1- i];
        printf("%d%d%d%d%d%d%d%d ",
               convertUnion.bools.bool1,
               convertUnion.bools.bool2,
               convertUnion.bools.bool3,
               convertUnion.bools.bool4,
               convertUnion.bools.bool5,
               convertUnion.bools.bool6,
               convertUnion.bools.bool7,
               convertUnion.bools.bool8);
    }
    printf("\n\n");
    
}

