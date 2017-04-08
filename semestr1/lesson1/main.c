//
//  main.c
//  semestr1
//
//  Created by Aleksey Zuiev on 09/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#include <stdio.h>
#include "mamapapa.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    for (int i = 0; i<16; i++) {
        printMamaPapa(i);
    }
    return 0;
}
