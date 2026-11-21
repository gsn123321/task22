#include "Worker.h"

Worker::Worker(const char* n, const char* p, int y, double s) {
    strcpy_s(name, n);
    strcpy_s(position, p);

    year = y;
    salary = s;
}

void Worker::Show() const {
    std::cout << "\nName: " << name;
    std::cout << "\nPosition: " << position;
    std::cout << "\nYear: " << year;
    std::cout << "\nSalary: " << salary << "\n";
}

int Worker::GetYear() const {
    return year;
}

double Worker::GetSalary() const {
    return salary;
}

const char* Worker::GetPosition() const {
    return position;
}
