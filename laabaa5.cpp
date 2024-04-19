#include "Header.h"
int main() {
    setlocale(LC_ALL, "ru");
    int n;
     cout << "Введите количество фильмов: ";
     cin >> n;

    Film films[10];
    inputFilms(films, n);

    int avgCost = calculateAvgCost(films, n);
    printFilms(films, n, avgCost);

    return 0;
}