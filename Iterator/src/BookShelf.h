//
// Created by alfons on 18-11-12.
//

#ifndef DESIGNPATTERN_BOOKSHELF_H
#define DESIGNPATTERN_BOOKSHELF_H

#include <iostream>
#include <vector>

#include "Book.h"

// 书架实现类
class BookShelf {
public:
    BookShelf();

    ~BookShelf();

    /**
     * 获取对应索引的书
     * @param index 索引
     * @return 对应索引的书
     */
    Book *GetBookAt(int index);

    /**
     * 添加书
     * @param book 书对应的指针
     */
    void AppendBook(Book *book);

    /**
     * 返回书架上书的数量
     * @return
     */
    int GetLength();

private:
    int last = 0;               // 记录书的数目
    std::vector<Book *> books;  // 存放书的vector
};


#endif //DESIGNPATTERN_BOOKSHELF_H
