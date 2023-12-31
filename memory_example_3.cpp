#include <stdlib.h> // Подключаем  для std::byte(используется для выполнения арифметики указателей в терминах байтов)
#include <iostream>


int* stackMemory1()
{
    int a = 1; // Создаем переменную 'a' на стеке и присвоение ей значения 1
    return &a; // Возвращаем указатель на 'a'
}

int* stackMemory2()
{
    int b = 2; // Создаем переменную 'b' с значением 2 на стеке
    return &b; // Возвращаем указатель на 'b'
}

int main()
{
    int* b = stackMemory1(); // Получаем указатель на 'a'
    int a1 = *b; //1 // Используем указатель 'b', чтобы получить значение 'a'
    int* c = stackMemory2(); // Получаем указатель на 'b'
    int a2 = *c; // 2 // Используем указатель 'c', чтобы получить значение 'b'
    int a3 = *b; // 2 // Используем указатель 'b', чтобы получить значение 'b'

    std::cout << a1 << std::endl; // Выводим значение 'a1' (1) на консоль
    std::cout << a2 << std::endl; // Выводим значение 'a2' (2) на консоль
    std::cout << a3 << std::endl; // Выводим значение 'a3'  2
    std::cout << ((std::byte*) b - (std::byte*) c) << std::endl; // Выводим разницу в байтах между указателями 0

    return 0;
}
//Чем переменная a в static_1 отличается от переменной из static_2? (Подсказка: global vs static.) Как сделать пример static_2 эквивалентным первому (в плане невозможности импортировать переменную в другом файле)?
// Различие заключается в том, что переменная a в static_2 имеет статическую  видимость. Это значит, что переменная a будет видима только в пределах того файла, в котором она определена. Также нельзя использовать в других файлах.
