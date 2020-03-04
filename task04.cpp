#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

struct Animal {

  const char* name;
  const char* say;
  char pole[255];
  
  virtual const char* whatDoesItSay(){
    strcpy(pole, name);
    strcat(pole, " dela ");
    strcat(pole, say);
    puts(pole);
    return 0;
};

    Animal(const char* name, const char* say){
    this->name = name;
    this->say = say;
    }
};

struct Dog : Animal {
     Dog(const char* name, const char* say) : Animal(name, say){}
};

struct Fox : Animal {
    Fox(const char* name, const char* say) : Animal(name, say){}
};

int main() {

  Animal* animals[] = {
    new Dog("dog", "woof"),
    new Fox("fox", "ringidingidingidingiding")
  };
  for(Animal* animal : animals) {
    animal->whatDoesItSay();
  }
}
