#include "Header.h"
void inputFilms(Film arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "������� �������� ������: ";
        cin >> arr[i].name;
        cout << "������� ��������� ������: ";
        cin >> arr[i].cost;
        cout << "������� ��������� ������: ";
        cin >> arr[i].director;
    }
}
void printFilms(Film arr[], int n, int avgCost) {
    cout << "���������� � �������, ��������� ������� ������ " << avgCost << ":\n";
    for (int i = 0; i < n; i++) {
        if (arr[i].cost > avgCost) {
            cout << "��������: " << arr[i].name << ", ���������: " << arr[i].cost << ", ��������: " << arr[i].director << endl;
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