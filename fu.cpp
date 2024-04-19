#include "Header.h"
void inputFilms(Film arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Введите название фильма: ";
        cin >> arr[i].name;
        cout << "Введите стоимость фильма: ";
        cin >> arr[i].cost;
        cout << "Введите режиссера фильма: ";
        cin >> arr[i].director;
    }
}
void printFilms(Film arr[], int n, int avgCost) {
    cout << "Информация о фильмах, стоимость которых больше " << avgCost << ":\n";
    for (int i = 0; i < n; i++) {
        if (arr[i].cost > avgCost) {
            cout << "Название: " << arr[i].name << ", Стоимость: " << arr[i].cost << ", Режиссер: " << arr[i].director << endl;
        }
    }
}
int calculateAvgCost(Film arr[], int n) {
    int minCost = arr[0].cost;
    int maxCost = arr[0].cost;
    int sumCost = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i].cost < minCost) {
            minCost = arr[i].cost;
        }
        if (arr[i].cost > maxCost) {
            maxCost = arr[i].cost;
        }
        sumCost += arr[i].cost;
    }

    return (sumCost - minCost - maxCost) / (n - 2);
}