#include "Computer.h"

int main()
{
    int N = 5;
    Computer* arr = new Computer[N]{
        {"HP 3000", 2.4, 8, false, 16500},
        {"Apple Pro 2016", 3.2, 16, false, 66500},
        {"Acer navy", 1.8, 4, true, 8200},
        {"Samsung Son", 3.2, 16, true, 20500},
        {"Asus 1200", 1.4, 4, false, 5500}
    };

    //4.	Визначити кількість комп'ютерів з об'ємом оперативної пам'яті понад 10 Гбайт і надрукувати всі відомості про них.

    int amount = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i].RAM >= 10) {
            amount++;
            arr[i].showComputer();
        }
    }

}


