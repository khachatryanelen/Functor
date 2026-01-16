#include <iostream>
#include <string>
#include "animal.h"

int Animal::count=0;
Animal::Animal() : name("undefined"), age(-1), isWild(false), weight(0) {count++;}
Animal::Animal(const std::string& o_name) : name(o_name), age(-1), isWild(false),weight(0) {count++;}
Animal::Animal(const std::string& o_name,int o_age,bool o_isWild,int weight): name(o_name), age(o_age), isWild(o_isWild),weight(weight) {count++;}
Animal::Animal(Animal&& other){
    name=other.name;
    age=other.age;
    isWild=other.isWild;
    weight=other.weight;

    other.name="";
    other.age=0;
    other.isWild=false;
    other.weight=0;
    count++;
}
Animal& Animal::operator=(Animal&& other){
    if(this!=&other){
        name=other.name;
        age=other.age;
        isWild=other.isWild;
        weight=other.weight;


        other.name="";
        other.age=0;
        other.isWild=false;
        other.weight=0;
    }
    return *this;
}

Animal::~Animal() {count--;}

std::string Animal::getSound() const {
    return "Unknown sound";
}
std::string Animal::getName() const{ 
    return name; }
int Animal::getAge() const{ 
    return age; }
bool Animal::isWildAnimal() { 
    return isWild; }

void Animal::printInfo() {
    std::cout << "Name is: " << name << std::endl;
    std::cout << "Age is: " << age << std::endl;
    std::cout << "Sound is: " << "???" << std::endl;
    std::cout << "Is Wild ?: " << (isWild ? "true" : "false") << std::endl;
}
int Animal::getCount(){
    return count;
}
int Animal::getWeight(){
    return weight;
}
bool Animal::operator==(const Animal& other){
    if(this->weight==other.weight) return true;
    return false;
}
bool Animal::operator>(const Animal& other){
    if(this->weight>other.weight) return true;
    return false;
}
bool Animal::operator<(const Animal& other){
    if(this->weight<other.weight) return true;
    return false;
}

Cat::Cat() : Animal(), breed("unknown"), numChildren(-1) {}
Cat::Cat(const std::string& o_name, int o_age, bool o_isWild,const std::string& o_breed, int children,int weight): Animal(o_name, o_age,  o_isWild,weight), breed(o_breed), numChildren(children) {}
std::string Cat::getSound() const  { return "CatVoice"; }
Cat::~Cat() {}

Dog::Dog() : Animal(), colour("unknown"), numChildren(-1) {}
Dog::Dog(const std::string& o_name, int o_age, bool o_isWild,const std::string& o_colour, int children,int weight): Animal(o_name, o_age, o_isWild,weight), colour(o_colour), numChildren(children) {}
std::string Dog::getSound() const { return "DogVoice"; }
Dog::~Dog() {}

Parrot::Parrot() : Animal(), breed("unknown"), language("unknown") {}
Parrot::Parrot(const std::string& o_name, int o_age, bool o_isWild,const std::string& o_breed,const std::string& o_language,int weight): Animal(o_name, o_age, o_isWild,weight), breed(o_breed), language(o_language) {}
std::string Parrot::getSound() const { return "parrotVoice"; }
Parrot::~Parrot() {}

Fish::Fish() : Animal(), died(false) {}
Fish::Fish(const std::string& o_name, int o_age, bool o_isWild,bool o_died,int weight) : Animal(o_name, o_age, o_isWild,weight), died(o_died) {}
std::string Fish::getSound() const { return "fishVoice"; }
Fish::~Fish() {}

Rabbit::Rabbit() : Animal(), domestic(false) {}
Rabbit::Rabbit(std::string o_name, int o_age, bool o_isWild,bool isDomestic,int weight): Animal(o_name, o_age, o_isWild,weight), domestic(isDomestic) {}
std::string Rabbit::getSound() const { return "rabitVoice"; }
Rabbit::~Rabbit() {}

Lion::Lion() : Animal(), wounded(false), hungry(false) {}
Lion::Lion(std::string o_name, int o_age,bool o_isWild,bool isWounded, bool isHungry,int weight): Animal(o_name, o_age, o_isWild,weight), wounded(isWounded), hungry(isHungry) {}
std::string Lion::getSound() const { return "lionVoice"; }
Lion::~Lion() {}
