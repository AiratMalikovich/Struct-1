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
void NameSort(Book array[], int size){
    Book temp;
    int smallestIndex;
    for (int x = 0; x < size - 1; x++){
        smallestIndex = x;
        for (int y = x +1; y < size; y++) {
            if (array[y].name < array[smallestIndex].name) {
                smallestIndex = y;
            }
        }
        temp = array[x];
        array[x] = array[smallestIndex];
        array[smallestIndex] = temp;
    }
}
void AutorSort(Book array[], int size){
    Book temp;
    int smallestIndex;
    for (int x = 0; x < size - 1; x++){
        smallestIndex = x;
        for (int y = x +1; y < size; y++) {
            if (array[y].autor < array[smallestIndex].autor) {
                smallestIndex = y;
            }
        }
        temp = array[x];
        array[x] = array[smallestIndex];
        array[smallestIndex] = temp;
    }
}
void BrandSort(Book array[], int size){
    Book temp;
    int smallestIndex;
    for (int x = 0; x < size - 1; x++){
        smallestIndex = x;
        for (int y = x +1; y < size; y++) {
            if (array[y].brand < array[smallestIndex].brand) {
                smallestIndex = y;
            }
        }
        temp = array[x];
        array[x] = array[smallestIndex];
        array[smallestIndex] = temp;
    }
}
void BookNameSearch(Book array[], int size){
    string name;
    cout << "Введите название книги, которое Вы хотите найти : ";
    cin >> name;
    int count = 0;
    cout << "Вот найденые книги: " << endl;
    for (int x = 0; x < size; x++){
        if (array[x].name == name){
            cout << "Книга № " << (x+1) << endl;
            count++;
        }
    }
    if (!count)
        cout << "Не найдено ни одной книни!" << endl;
}
void BookAutorSearch(Book array[], int size){
    string autor;
    cout << "Введите Автора книги, которые Вы хотите найти : ";
    cin >> autor;
    int count = 0;
    cout << "Вот найденые книги: " << endl;
    for (int x = 0; x < size; x++){
        if (array[x].autor == autor){
            cout << "Книга № " << (x+1) << endl;
            count++;
        }
    }
    if (!count)
        cout << "Не найдено ни одной книни!" << endl;
}
void ChoiseResult(int choise, Book array[], int size){
    int number;
    if (choise == 1){
        cout << "Введите номер книги для редактирования : ";
        number = Number(size);
        array[number].BookEdit();
    }
    if (choise == 2){
        cout << "***Печать всех книг***" << endl;
        for (int x = 0; x < size; x++) {
            cout << "Книга № " << x << endl;
            array[x].BookPrint();
        }
    }
    if (choise == 3){
        BookAutorSearch(array, size);
    }
    if (choise == 4){
        BookNameSearch(array, size);
    }
    if (choise == 5){
        NameSort(array, size);
    }
    if (choise == 6){
        AutorSort(array, size);
    }
    if (choise == 7){
        BrandSort(array, size);
    }
}
#endif //INC_3_MAIN_H
