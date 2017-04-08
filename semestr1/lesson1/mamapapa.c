//
//  mamapapa.c
//  semestr1
//  Created by Aleksey Zuiev on 09/04/2017.
//  Copyright © 2017 Aleksey Zuiev. All rights reserved.
//

#include "mamapapa.h"
#include <stdbool.h>

//2. Создать метод, который бы имел, как параметр, целое число.
//Пользовательские истории:
//- если на вход приходит число, кратное 3, то в консоль должно быть выведено: "мама";
//- если на вход приходит число, кратное 5, то в консоль должно быть выведено: "папа";
//- если на вход приходит число, кратное 15, то в консоль должно быть выведено: "мамапапа";
//- если на вход приходит число, не удовлетворяющие критериям выше, то в консоль ничего выводить не надо, либо вывести “”, либо “\n”;
//Требования:
//- необходимо в цикле пройти 1000 итераций, вывести номер итерации и передать номер итерации в метод.
static const char * const str1 = "mama";
static const char * const str2 = "papa";


void printMamaPapa(int value){
    bool isPrint = false;
    if (!(value % 3)) {
        isPrint = true;
        printf(str1);
    }
    if (!(value % 5)) {
        isPrint = true;
        printf(str2);
    }
    if (isPrint)
        printf ("\n");
}
