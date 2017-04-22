//
//  ConvertToBites.c
//  lesson1
//
//  Created by Aleksey Zuiev on 12/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#include <stdbool.h>

#include "AZConvertToBits.h"

const short BitsInByte = 8;

bool AZIsLittleEndian() {
    short temp = 1;
    return ((char *)&temp)[0] == 1;
};

void AZPrintBits(char * c, int count) {
    char item = 0;
    for(int i = 0; i < count; i++){
        item = AZIsLittleEndian() ?  c[i] : c[count - 1 - i];
        for(int j = 0; j < BitsInByte; j++){
            printf("%i", (item >> j) & 1);
        }
        printf(" ");
    }
    printf("\n\n");
    
}

