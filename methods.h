#include <utility>

class Human
{
private:
    int age = 0;
    std::string nationally;
    std::string colorHair;
    int height = 0;
    int weight = 0;

public:
    Human() = default;
    Human(int age, std::string nationally, std::string colorHair, int height, int weight)
    {
        this->age = age;
        this->nationally = std::move(nationally);
        this->colorHair = std::move(colorHair);
        this->height = height;
        this->weight = weight;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setNationally(std::string nationally)
    {
        this->nationally = nationally;
    }

    void setColorHair(std::string colorHair)
    {
        this->colorHair = colorHair;
    }

    void setHeight(int height)
    {
        this->height = height;
    }

    void setWeight(int weight)
    {
        this->weight = weight;
    }

    int getAge()
    {
        return age;
    }

    std::string getNationally()
    {
        return nationally;
    }

    std::string getColorHair()
    {
        return colorHair;
    }

    int getHeight()
    {
        return height;
    }

    int getWeight()
    {
        return weight;
    }


};

class Student : public Human
{
private:
    int course;

public:
    Student() = default;
    Student(int age, std::string nationally, std::string colorHair, int height, int weight, int course)
    {
        Human(age, nationally, colorHair, height, weight);
        this->course = course;
    }
};