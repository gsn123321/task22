#pragma once
#include <iostream>
#include <cstring>

class Worker {
private:
    char name[100];
    char position[100];
    int year;
    double salary;

public:
    explicit Worker(const char* n, const char* p, int y, double s);

    void Show() const;

    int GetYear() const;
    double GetSalary() const;
    const char* GetPosition() const;
};
