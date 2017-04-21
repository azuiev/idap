//
//  mamapapa.c
//  semestr1
//  Created by Aleksey Zuiev on 09/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

//2. Создать метод, который бы имел, как параметр, целое число.
//Пользовательские истории:
//- если на вход приходит число, кратное 3, то в консоль должно быть выведено: "мама";
//- если на вход приходит число, кратное 5, то в консоль должно быть выведено: "папа";
//- если на вход приходит число, кратное 15, то в консоль должно быть выведено: "мамапапа";
//- если на вход приходит число, не удовлетворяющие критериям выше, то в консоль ничего выводить не надо, либо вывести “”, либо “\n”;
//Требования:
//- необходимо в цикле пройти 1000 итераций, вывести номер итерации и передать номер итерации в метод.

#include <stdbool.h>
#include <stdio.h>

#include "AZMamaPapa.h"

typedef const char * const AZString;

static AZString AZStringMama = "mama";
static AZString AZStringPapa = "papa";

bool AZPrintString(AZString string, int value, int divisor){
    bool shouldPrint = !(value % divisor);
    if (shouldPrint) {
        printf("%s", string);
    }
    return shouldPrint;
}

void AZPrintMamaPapa(int value){
    bool isPrinted = AZPrintString(AZStringMama,value,3);
    isPrinted = AZPrintString(AZStringPapa,value,5) || isPrinted;
    
    if (isPrinted) {
        printf ("\n");
    }
}
