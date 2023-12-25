#include "Structures.hpp"

void print_person(const Person& P) {
	std::cout << "Имя: " << P.name << std::endl;
	std::cout << "Дата рождения: " << P.birthday.day << '.' << P.birthday.month << '.' << P.birthday.year << std::endl;
	std::cout << "Пол: " << (P.gender == 'M' ? "Мужской" : "Женский") << std::endl;
}
