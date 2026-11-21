#pragma once
#include <iostream>
#include <cstring>

class Book {
private:
    char author[100];
    char title[100];
    char publisher[100];
    int year;
    int quantity;
    int pages;

public:
    explicit Book(const char* a, const char* t, const char* p,
        int y, int q, int pg);

    void Show() const;

    const char* GetAuthor() const;
    const char* GetPublisher() const;
    int GetYear() const;
};
