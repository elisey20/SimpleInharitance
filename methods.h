#include <iostream>

#pragma once

class Human
{
protected:
    int age = 0;
    std::string nationally;
    std::string colorHair;
    int height = 0;
    int weight = 0;
    std::string name = "none";

public:
    Human() = default;
    Human(int age, std::string colorHair, int height, int weight, std::string name);

    void say();

    void setAge(int age);
    void setColorHair(std::string colorHair);
    void setHeight(int height);
    void setWeight(int weight);
    void setName(std::string name);
    int getAge();
    std::string getColorHair();
    int getHeight();
    int getWeight();
    std::string getName();

};

class Student : public Human
{
protected:
    int course = 0;

public:
    Student() = default;
    Student(int age, std::string colorHair, int height, int weight, std::string name, int course) : Human(age, colorHair, height, weight, name)
    {
        this->course = course;
    }
};

class Bacalavr : public Student
{
protected:
    int group = 0;

public:
    Bacalavr() = default;
    Bacalavr(int age, std::string colorHair, int height, int weight, std::string name, int course, int group) : Student(age, colorHair, height, weight, name, course)
    {
        this->group = group;
    }
};

class Undergraduate : public Bacalavr
{
protected:
    int diplom = 0;

public:
    Undergraduate() = default;
    Undergraduate(int age, std::string colorHair, int height, int weight, std::string name, int course, int group, int diplom) : Bacalavr(age, colorHair, height, weight, name, course, group)
    {
        this->diplom = diplom;
    }
};

class Worker : public Undergraduate
{
protected:
    std::string placeOfWork;

public:
    Worker() = default;
    Worker(int age, std::string colorHair, int height, int weight, std::string name, int course, int group, int diplom, std::string placeOfWork) : Undergraduate(age, colorHair, height, weight, name, course, group, diplom)
    {
        this->placeOfWork = placeOfWork;
    }

};

class Cow
{
protected:
    int age = 0;

public:
    Cow() = default;
    Cow(int age)
    {
        this->age = age;
    }
    void say()
    {
        std::cout << "MU-MU" << std::endl;
    }
};

class WTF : public Human, private Cow
{
public:
    WTF() = default;
    WTF(int age, std::string colorHair, int height, int weight, std::string name, int age2) : Human(age, colorHair, height, weight, name), Cow(age2) {}
};