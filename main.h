//
// Created by oleg on 09.08.2020.
//

#ifndef INC_3_MAIN_H
#define INC_3_MAIN_H
int Choise(){
    int choise;
    do{
        cout << "***Введите действие***" << endl;
        cout << "1 * Редактировать книгу" << endl;
        cout << "2 * Печать всех книг" << endl;
        cout << "3 * Поиск книг по автору" << endl;
        cout << "4 * Поиск книги по названию" << endl;
        cout << "5 * Сортировка массива по названию книг" << endl;
        cout << "6 * Сортировка массива по автору" << endl;
        cout << "7 * Сортировка массива по издательству" << endl;
        cout << "0 * Выход" << endl;
        cin >> choise;
    }while(choise < 0 || choise > 7);
    return choise;
}
int Number(int size){
    int number;
    do{
        cin >> number;
    }while (number < 0 || number > size);
    number--;
    return number;
}
#endif //INC_3_MAIN_H
