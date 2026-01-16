#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal {
private:
    static int count;
    std::string name;
    int age;
    bool isWild;
    int weight;

public:
    Animal();
    Animal(const std::string& o_name);
    Animal(const std::string& o_name,int o_age,bool o_isWild,int weight);
    Animal(Animal&& other);
    Animal& operator=(Animal&& other);
    virtual ~Animal();

    bool operator==(const Animal& other);
    bool operator>(const Animal& other);
    bool operator<(const Animal& other);

    std::string getName() const;
    virtual std::string getSound() const;
    int getAge() const;
    bool isWildAnimal();
    void printInfo();
    int getWeight();
    static int getCount();
};


class Cat : public Animal {
private:
    std::string breed;
    int numChildren;

public:
    Cat();
    Cat(const std::string& o_name, int o_age, bool o_isWild,const std::string& o_breed, int children,int weight);
    std::string getSound()const override;
    ~Cat();
};

class Dog : public Animal {
public:
    std::string colour;
    int numChildren;

    Dog();
    Dog(const std::string& o_name, int o_age, bool o_isWild,const std::string& o_colour, int children,int weight);
    std::string getSound()const override;
    ~Dog();
};

class Parrot : public Animal {
public:
    std::string breed;
    std::string language;

    Parrot();
    Parrot(const std::string& o_name, int o_age, bool o_isWild,const std::string& o_breed,const std::string& o_language,int weight);
    std::string getSound()const override;
    ~Parrot();
};

class Fish : public Animal {
public:
    bool died;

    Fish();
    Fish(const std::string& o_name, int o_age, bool o_isWild,bool o_died,int weight);
    std::string getSound()const override;
    ~Fish();
};

class Rabbit : public Animal {
public:
    bool domestic;

    Rabbit();
    Rabbit(std::string o_name, int o_age, bool o_isWild,bool isDomestic,int weight);
    std::string getSound()const override;
    ~Rabbit();
};

class Lion : public Animal {
public:
    bool wounded;
    bool hungry;

    Lion();
    Lion(std::string o_name, int o_age, bool o_isWild,bool isWounded, bool isHungry,int weight);
    std::string getSound()const override;
    ~Lion();
};

#endif
