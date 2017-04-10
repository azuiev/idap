//
//  mamapapa.c
//  semestr1
//  Created by Aleksey Zuiev on 09/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#include "mamapapa.h"
#include <stdbool.h>
#include <stdio.h>
//2. Создать метод, который бы имел, как параметр, целое число.
//Пользовательские истории:
//- если на вход приходит число, кратное 3, то в консоль должно быть выведено: "мама";
//- если на вход приходит число, кратное 5, то в консоль должно быть выведено: "папа";
//- если на вход приходит число, кратное 15, то в консоль должно быть выведено: "мамапапа";
//- если на вход приходит число, не удовлетворяющие критериям выше, то в консоль ничего выводить не надо, либо вывести “”, либо “\n”;
//Требования:
//- необходимо в цикле пройти 1000 итераций, вывести номер итерации и передать номер итерации в метод.

typedef const char * const SString;
static SString str1 = "mama";
static SString str2 = "papa";

void AZPrintStr(SString string, int value, int divisor){
    bool isPrint = !(value % divisor);
    if (isPrint) {
        printf("%s", string);
    }
    //return isPrint;
}

void AZPrintMamaPapa(int value){
    //bool isPrint = printStr(str1,value,3);
    //isPrint = printStr(str2,value,5) || isPrint;
    AZPrintStr(str1,value,3);
    AZPrintStr(str2,value,5);
    
//    if (isPrint)
//        printf ("\n");
}
