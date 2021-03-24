#include <iostream>
#include "methods.h"

Human::Human(int age, std::string colorHair, int height, int weight, std::string name)
{
    this->age = age;
    this->colorHair = std::move(colorHair);
    this->height = height;
    this->weight = weight;
    this->name = name;
}

void Human::say()
{
    std::cout << "Привет, меня зовут " << name << '!' << std::endl;
}

void Human::setAge(int age)
{
    this->age = age;
}

void Human::setColorHair(std::string colorHair)
{
    this->colorHair = colorHair;
}

void Human::setHeight(int height)
{
    this->height = height;
}

void Human::setWeight(int weight)
{
    this->weight = weight;
}

int Human::getAge()
{
    return age;
}

std::string Human::getColorHair()
{
    return colorHair;
}

int Human::getHeight()
{
    return height;
}

int Human::getWeight()
{
    return weight;
}

void Human::setName(std::string name)
{
    this->name = name;
}

std::string Human::getName()
{
    return name;
}

