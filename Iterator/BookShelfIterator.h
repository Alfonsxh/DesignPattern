//
// Created by alfons on 18-11-12.
//

#ifndef DESIGNPATTERN_BOOKSHELFITERATOR_H
#define DESIGNPATTERN_BOOKSHELFITERATOR_H

#include "Iterator.h"

class BookShelfIterator: public Iterator {
public:
    BookShelfIterator();
    ~BookShelfIterator();

    bool hasNext();
    void* next();
};


#endif //DESIGNPATTERN_BOOKSHELFITERATOR_H
