//
// Created by alfons on 18-11-12.
//

#ifndef DESIGNPATTERN_BOOKSHELFITERATOR_H
#define DESIGNPATTERN_BOOKSHELFITERATOR_H

#include "Iterator.h"
#include "Book.h"
#include "BookShelf.h"

// 书架迭代器
class BookShelfIterator : public Iterator {
public:
    BookShelfIterator(BookShelf *bookShelf);

    ~BookShelfIterator();

    /**
     * 是否还有下一个迭代器
     * @return 有返回true,没有返回false
     */
    bool HasNext() override;

    /**
     * 返回下一本书的迭代器
     * @return
     */
    void *Next() override;

private:
    BookShelf *bookShelf;   // 书架
    int index;              // 读取位置索引
};


#endif //DESIGNPATTERN_BOOKSHELFITERATOR_H
