#ifndef ANIMALHASHEQUAL_H
#define ANIMALHASHEQUAL_H

#include "animal.h"
#include <functional>

struct AnimalHash{
    size_t operator()(const Animal& obj) const{
        return std::hash<int>()(obj.getAge());
    }
};

struct AnimalEqual{
    bool operator()(const Animal& obj1,const Animal& obj2) const{
        return obj1.getAge()==obj2.getAge();
    }
};



#endif //ANIMALHASHEQUAL_H