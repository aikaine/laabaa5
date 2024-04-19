#pragma once
#include <iostream>
#include <string>
using namespace std;
struct Film {
    string name;
    int cost;
    string director;
};
void inputFilms(Film arr[], int n);
void printFilms(Film arr[], int n, int avgCost);
int calculateAvgCost(Film arr[], int n);



