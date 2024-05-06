#include "head.h"

BirthDate::BirthDate(int year, int month, int day) : year(year), month(month), day(day) {}
Teacher::Teacher(int num, std::string name, char sex) : num(num), name(name), sex(sex) {}
Professor::Professor(int num, std::string name, char sex, BirthDate bd) : Teacher(num, name, sex), birthday(bd) {}
void Professor::setbirthday(int year, int month, int day)
{
    birthday.setbirthday(year, month, day);
}
void BirthDate::setbirthday(int year, int month, int day)
{
    this->year = year;
    this->month = month;
    this->day = day;
}
void Professor::display()
{
    Teacher::display();
    birthday.display();
}
void Teacher::display()
{
    std::cout << "num:" << num << std::endl;
    std::cout << "name:" << name << std::endl;
    std::cout << "sex:" << sex << std::endl;
}
void BirthDate::display()
{
    std::cout << "birthday:" << year << "/" << month << "/" << day << std::endl;
}

void test()
{
    int num;
    std::string name;
    char sex;
    int year, month, day;
    std::cin >> num >> name >> sex;
    std::cin >> year >> month >> day;
    Professor prof(num, name, sex, BirthDate(year, month, day));
    std::cin >> year >> month >> day;
    prof.setbirthday(year, month, day);
    prof.display();
}