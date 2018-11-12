//
// Created by alfons on 18-11-12.
//

#ifndef DESIGNPATTERN_BOOKSHELF_H
#define DESIGNPATTERN_BOOKSHELF_H

#include "Book.h"

class BookShelf {
public:
    BookShelf(int maxSize);
    ~BookShelf();

    Book getBookAt(int index);

    void appendBook(Book book);

    int getLength();

private:
    Book books;
    int last = 0;
};


#endif //DESIGNPATTERN_BOOKSHELF_H
