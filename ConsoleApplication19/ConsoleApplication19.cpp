#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

class Clone {
private:
	static std::vector<std::string> names;
	static int count;
	std::string Name;
	int id;

public:
	Clone() {
		// Установка генератора случайных чисел
		std::srand(static_cast<unsigned int>(std::time(nullptr)));

		// Генерация случайного индекса для выбора имени из списка
		int randomIndex = std::rand() % names.size();
		Name = names[randomIndex];

		// Увеличение порядкового номера на 1
		id = ++count;
	}

	void print() {
		std::cout << "Name: " << Name << std::endl;
		std::cout << "ID: " << id << std::endl;
	}
};

// Инициализация статических полей класса Clone
std::vector<std::string> Clone::names = { "John", "Mary", "David", "Emma", "Michael" };
int Clone::count = 0;


//Этот код определяет класс Clone с полями Name и id, а также методом print().В конструкторе класса происходит выбор случайного имени из списка заранее заданных имен,
//  а порядковый номер увеличивается на 1. Статические поля names и count содержат список имен и текущее количество созданных объектов клонов соответственно. 
//Чтобы проверить работу класса на Visual Studio 2022, вы можете добавить следующий код в функцию main() :

	
	int main() {
	Clone clone1;
	Clone clone2;
	Clone clone3;

	clone1.print();
	clone2.print();
	clone3.print();

	return 0;
}