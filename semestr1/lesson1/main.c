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

int main(int argc, const char * argv[]) {
    //typesizes
    int s1 = 5;
    int64_t s2 = 5;
    bool s3 = false;
    short s4 = 5;
    char s5 = '5';
    
    printf("%lu\n",sizeof(s1));
    printf("%lu\n",sizeof(s2));
    printf("%lu\n",sizeof(s3));
    printf("%lu\n",sizeof(s4));
    printf("%lu\n",sizeof(s5));
    
  
    //mamapapa
    for (int i = 0; i<10; i++) {
        printf("%3d.", i);
        printMamaPapa(i);
        printf("\n");
    }
    return 0;
}
