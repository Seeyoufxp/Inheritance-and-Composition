#pragma once

#include <iostream>
#include <string>

class BirthDate
{
public:
    BirthDate(int, int, int);
    void display();
    void setbirthday(int, int, int);

private:
    int year;
    int month;
    int day;
};

class Teacher
{
public:
    Teacher(int, std::string, char);
    void display();

private:
    int num;
    std::string name;
    char sex;
};

class Professor : public Teacher
{
public:
    Professor(int, std::string, char, BirthDate);
    void display();
    void setbirthday(int, int, int);

private:
    BirthDate birthday;
};

void test();