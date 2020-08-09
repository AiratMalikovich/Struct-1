/* Гулюкин О.В.
 * Задание 3:
 * Разработайте программу «Библиотека». Создайте структуру «Книга» (название, автор,
 * издательство, жанр). Создайте массив из 10 книг. Реализуйте для него следующие возможности:
 * Редактировать книгу
 * Печать всех книг
 * Поиск книг по автору
 * Поиск книги по названию
 * Сортировка массива по названию книг
 * Сортировка массива по автору
 * Сортировка массива по издательству
 */

#include "Book.h"
#include "main.h"

int main() {
    int const SIZE = 10;
    Book array[SIZE];
    cout << "***Программа Библиотеки на " << SIZE << " книг***" << endl;
    cout << "Для начала давайте заполним информацию о книгах. Книг будет " << SIZE << "." << endl;
    for (int x = 0; x < SIZE; x++){
        cout << "№ " << (x+1) << endl;
        array[x] = array[x].BookInput();
    }
    cout << "ВВод информации о книгах успешно завершен!" << endl;
    int choise;
    int number;
    do{
        choise = Choise();
        if (choise == 1){
            cout << "Введите номер книги для редактирования : ";
            number = Number(SIZE);
            array[number].BookEdit(array, number);
        }
        if (choise == 2){
            array[0].BookPrint(array, SIZE);
        }
        if (choise == 3){
            array[0].BookAutorSearch(array, SIZE);
        }
        if (choise == 4){
            array[0].BookNameSearch(array, SIZE);
        }
        if (choise == 5){
            array[0].NameSort(array, SIZE);
        }
        if (choise == 6){
            array[0].AutorSort(array, SIZE);
        }
        if (choise == 7){
            array[0].BrandSort(array, SIZE);
        }
    }while(choise);
    cout << "До новых встреч!" << endl;
    return 0;
}

