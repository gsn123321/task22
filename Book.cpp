#include "Book.h"

Book::Book(const char* a, const char* t, const char* p,
    int y, int q, int pg) {

    strcpy_s(author, a);
    strcpy_s(title, t);
    strcpy_s(publisher, p);

    year = y;
    quantity = q;
    pages = pg;
}

void Book::Show() const {
    std::cout << "\nAuthor: " << author;
    std::cout << "\nTitle: " << title;
    std::cout << "\nPublisher: " << publisher;
    std::cout << "\nYear: " << year;
    std::cout << "\nQuantity: " << quantity;
    std::cout << "\nPages: " << pages << "\n";
}

const char* Book::GetAuthor() const {
    return author;
}

const char* Book::GetPublisher() const {
    return publisher;
}

int Book::GetYear() const {
    return year;
}
