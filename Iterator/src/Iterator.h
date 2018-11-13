//
// Created by alfons on 18-11-12.
//

#ifndef DESIGNPATTERN_ITERATOR_H
#define DESIGNPATTERN_ITERATOR_H

#endif //DESIGNPATTERN_ITERATOR_H

class Iterator {
public:
    /**
     * 纯虚函数,是否还有元素
     * @return
     */
    virtual bool HasNext() = 0;

    /**
     * 返回下一个迭代器
     * @return
     */
    virtual void *Next() = 0;
};