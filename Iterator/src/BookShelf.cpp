//
// Created by alfons on 18-11-12.
//

#include "BookShelf.h"

BookShelf::BookShelf() = default;

BookShelf::~BookShelf() = default;

Book *BookShelf::GetBookAt(int index) {
    return this->books[index];
}

void BookShelf::AppendBook(Book *book) {
    this->books.push_back(book);
    last++;
}

int BookShelf::GetLength() {
    return last;
}
