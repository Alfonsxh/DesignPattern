#include <utility>

//
// Created by alfons on 18-11-12.
//

#ifndef DESIGNPATTERN_BOOK_H
#define DESIGNPATTERN_BOOK_H

#include <string>

class Book {
public:
    Book(std::string Name);

    ~Book() = default;

    std::string getName();

private:
    std::string name;
};


#endif //DESIGNPATTERN_BOOK_H
