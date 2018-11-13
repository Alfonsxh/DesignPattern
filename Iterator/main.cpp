//
// Created by alfons on 18-11-12.
//
#include <iostream>

#include "src/Book.h"
#include "src/BookShelf.h"
#include "src/BookShelfIterator.h"

int main() {
    // 初始化书架,并向里添加书
    auto bookshelf = new BookShelf();
    bookshelf->AppendBook(new Book("今日简史"));
    bookshelf->AppendBook(new Book("未来简史"));
    bookshelf->AppendBook(new Book("人类简史"));

    // 对应迭代器赋值,遍历实现
    auto it = new BookShelfIterator(bookshelf);
    while (it->HasNext()) {
        auto book = (Book *) it->Next();
        std::cout << book->GetName() << std::endl;
    }
    return 0;
}