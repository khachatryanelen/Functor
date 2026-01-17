#include <iostream>
#include "animal.h"
#include "animalCompare.h"
#include "animalHashEqual.h"
#include <unordered_set>
#include <set>

int main(int argc,const char* argv[]){
    std::set<Animal,AnimalCompare> animals;
    std::unordered_set<Animal,AnimalHash,AnimalEqual> animalner;

    animals.insert(Animal("Kitty", 2, false, 5));
    animals.insert(Animal("Katu", 10, true, 8));
    animals.insert(Animal("Hay", 4, true, 12));
    animals.insert(Animal("Menu", 4, false, 6));

    for (const Animal& a : animals) {
        std::cout << a.getName() << " is " << a.getAge() << " years old. " << std::endl;
    }

    std::cout<<std::endl;

    animalner.insert(Animal("Kitty", 2, false, 5));
    animalner.insert(Animal("Katu", 10, true, 8));
    animalner.insert(Animal("Hay", 4, true, 12));
    animalner.insert(Animal("Menu", 4, false, 6));

    for (const Animal& a : animalner) {
        std::cout << a.getName() << " is " << a.getAge() << " years old. " << std::endl;
    }




    return 0;
}

