﻿// OOPLab5T.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include <iostream>

// Ваші файли загловки 
//
#include "Lab5Task.h"
int main()
{
    std::cout << " Lab #5  !\n";
    //  Код виконання завдань
    //  Головне меню завдань
    //  Функції та класи можуть знаходитись в інших файлах проекту

    int chain = 1;
    if (chain == 1) chain = task1();
    if (chain == 2) chain = task2();
    if (chain == 3) chain = task3();
    //if (chain == 4) chain = mainExample4();
    //if (chain == 5) chain = mainExample5();

}
