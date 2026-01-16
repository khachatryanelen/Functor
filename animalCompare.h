#ifndef ANIMALCOMPARE_H
#define ANIMALCOMPARE_H

#include "animal.h"

struct AnimalCompare{
    bool operator()(const Animal& f,const Animal& s) const{
        return f.getAge()<s.getAge();
    }
};

#endif //ANIMALCOMPARE_H