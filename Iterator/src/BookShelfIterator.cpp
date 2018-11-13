//
// Created by alfons on 18-11-12.
//

#include "BookShelfIterator.h"

BookShelfIterator::BookShelfIterator(BookShelf *bookShelf) {
    this->bookShelf = bookShelf;
    this->index = 0;
}

BookShelfIterator::~BookShelfIterator() = default;

bool BookShelfIterator::HasNext() {
    return this->index < this->bookShelf->GetLength();
}

void *BookShelfIterator::Next() {
    Book *book = this->bookShelf->GetBookAt(this->index);
    this->index++;

    return book;
}
