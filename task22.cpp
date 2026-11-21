#include <iostream>
#include <cstring>
#include "Book.h"
#include "Worker.h"

int main() {
    //Book books[3] = {
    //    Book("Taras Shevchenko", "Kobzar", "Veselka", 1840, 1000, 240),
    //    Book("Ivan Franko", "Zakhar Berkut", "Ranok", 1883, 500, 180),
    //    Book("Lesya Ukrainka", "Forest Song", "Veselka", 1911, 700, 150)
    //};

    //char author[100];
    //char publisher[100];
    //int year;

    //std::cout << "Enter author: ";
    //std::cin.getline(author, 100);

    //std::cout << "\nBooks by this author:\n";

    //for (int i = 0; i < 3; ++i) {
    //    if (strcmp(books[i].GetAuthor(), author) == 0) {
    //        books[i].Show();
    //    }
    //}

    //std::cout << "\nEnter publisher: ";
    //std::cin.getline(publisher, 100);

    //std::cout << "\nBooks by this publisher:\n";

    //for (int i = 0; i < 3; ++i) {
    //    if (strcmp(books[i].GetPublisher(), publisher) == 0) {
    //        books[i].Show();
    //    }
    //}

    //std::cout << "\nEnter year: ";
    //std::cin >> year;

    //std::cout << "\nBooks released after this year:\n";

    //for (int i = 0; i < 3; ++i) {
    //    if (books[i].GetYear() > year) {
    //        books[i].Show();
    //    }
    //}



    Worker workers[3] = {
        Worker("Ivan Petrov", "Programmer", 2020, 30000),
        Worker("Oleg Ivanov", "Manager", 2018, 25000),
        Worker("Andriy Kovalenko", "Programmer", 2023, 20000)
    };

    int experience;
    double salary;
    char position[100];

    int currentYear = 2026;

    std::cout << "Enter work experience: ";
    std::cin >> experience;

    std::cout << "\nWorkers with experience greater than "
        << experience << " years:\n";

    for (int i = 0; i < 3; ++i) {
        if (currentYear - workers[i].GetYear() > experience) {
            workers[i].Show();
        }
    }

    std::cout << "\nEnter salary: ";
    std::cin >> salary;

    std::cout << "\nWorkers with salary greater than "
        << salary << ":\n";

    for (int i = 0; i < 3; ++i) {
        if (workers[i].GetSalary() > salary) {
            workers[i].Show();
        }
    }

    std::cin.ignore(1000, '\n');

    std::cout << "\nEnter position: ";
    std::cin.getline(position, 100);

    std::cout << "\nWorkers with this position:\n";

    for (int i = 0; i < 3; ++i) {
        if (strcmp(workers[i].GetPosition(), position) == 0) {
            workers[i].Show();
        }
    }

}
