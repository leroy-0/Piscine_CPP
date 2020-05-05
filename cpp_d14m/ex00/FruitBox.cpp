//
// FruitBox.cpp for Project-Master in /home/tekm/tek1/cpp_d14m/ex00
// 
// Made by leroy_0
// Login   <leroy_0@epitech.eu>
// 
// Started on  Tue Jan 17 10:38:40 2017 leroy_0
// Last update Tue Jan 17 13:38:27 2017 leroy_0
//

#include "Fruit.h"
#include "FruitBox.h"
#include "FruitNode.h"

FruitBox::FruitBox(int size)
{
    this->_head = NULL;
    this->_size = size;
}

FruitBox::~FruitBox() {}

FruitNode       *FruitBox::head() const
{
    return (this->_head);
}

bool            FruitBox::putFruit(Fruit *fruit)
{
    FruitNode   *tmp2 = this->_head;

    if (this->nbFruits() < this->_size)
    {
        while (tmp2)
        {
            if (tmp2->_elem == fruit) {
                return (false);
            }
            tmp2 = tmp2->next;
        }
        tmp2 = this->_head;

        FruitNode * chain = new FruitNode;
        chain->next = NULL;
        chain->_elem = fruit;

        if (this->nbFruits() == 0)
            this->_head = chain;
        else
        {
            while (tmp2->next)
                tmp2 = tmp2->next;
            tmp2->next = chain;
        }
        return (true);
    }
    return (false);
}

int             FruitBox::nbFruits() const
{
    FruitNode   *tmp = this->_head;
    int         i = 0;

    while (tmp)
    {
        if (tmp->_elem)
            i++;
        tmp = tmp->next;
    }
    return (i);
}

Fruit           *FruitBox::pickFruit() {
    FruitNode   *tmp = this->_head;
    Fruit *ret;

    while (tmp != NULL)
    {
        if (tmp->_elem != NULL) {
            ret = tmp->_elem;
            if (tmp == this->_head)
                this->_head = tmp->next;
            return ret;
        }
        tmp = tmp->next;
    }
    return NULL;
}