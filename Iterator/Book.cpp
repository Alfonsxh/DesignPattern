//
// Created by alfons on 18-11-12.
//

#include "Book.h"


Book::Book(std::string Name) {
    name = std::move(Name);
}

std::string Book::getName() {
    return name;
}