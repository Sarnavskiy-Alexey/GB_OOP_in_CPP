/*
3.  Написать класс «робот», моделирующий перемещения робота по сетке 10x10, у
	которого есть метод, означающий задание переместиться на соседнюю позицию.
	Эти методы должны запускать классы-исключения OffTheField, если робот должен
	уйти с сетки, и IllegalCommand, если подана неверная команда (направление не
	находится в нужном диапазоне). Объект исключения должен содержать всю
	необходимую информацию — текущую позицию и направление движения. Написать
	функцию main, пользующуюся этим классом и перехватывающую все исключения от
	его методов, а также выводящую подробную информацию о всех возникающих ошибках.
*/

#include <iostream>
#include <conio.h>
#include <iomanip>

typedef enum
{
	Left = 'a',
	Right = 'd',
	Up = 'w',
	Down = 's'
} Command;

class Robot
{
private:
	int m_x;
	int m_y;
	char m_command;

public:
	Robot()
	{
		m_x = 1;
		m_y = 1;
		m_command = '\0';
	}

	void Go_Left();
	void Go_Right();
	void Go_Up();
	void Go_Down();
	void Go(char command);
	void PrintGrid();
};

void Robot::Go_Left()
{
	if (m_x == 1)
	{
		throw "OffTheField";
	}
	else
	{
		m_x--;
	}
}

void Robot::Go_Right()
{
	if (m_x == 10)
	{
		throw "OffTheField";
	}
	else
	{
		m_x++;
	}
}

void Robot::Go_Up()
{
	if (m_y == 1)
	{
		throw "OffTheField";
	}
	else
	{
		m_y--;
	}
}

void Robot::Go_Down()
{
	if (m_y == 10)
	{
		throw "OffTheField";
	}
	else
	{
		m_y++;
	}
}

void Robot::Go(const char command)
{
	switch (command)
	{
		case Left: Go_Left(); break;
		case Right: Go_Right(); break;
		case Up: Go_Up(); break;
		case Down: Go_Down(); break;
		default: throw "IllegalCommand";
	}
}

void Robot::PrintGrid()
{
	std::cout << "Сетка 10x10 с положением робота:\n";
	for (int i = 1; i <= 10; i++)
	{
		std::cout << std::setw(2) << i;
		for (int j = 1; j <= 10; j++)
		{
			std::cout << " | " << ((m_x == j && m_y == i) ? 'X' : ' ');
		}
		std::cout << " |\n";
	}
	std::cout << "\n";
}

int main()
{
	setlocale(LC_ALL, "Russian");

	Robot robot;
	char command = '\0';

	while (command != 0x1B)		// ESC - ascii
	{
		robot.PrintGrid();

		std::cin.clear();

		std::cout << "Введите команду, используя клавиши wasd, или нажмите ESC для выхода: ";
		command = _getche();
		std::cout << std::endl;

		if (command != 0x1B)
		{
			try
			{
				robot.Go(command);
			}
			catch (const char* e)
			{
				std::cerr << e << "";
			}
			catch (...)
			{
				std::cerr << "Some undetermined error!";
			}

			std::cout << "\n\n";
			system("pause");
			system("cls");
		}
	}

	return 0;
}
