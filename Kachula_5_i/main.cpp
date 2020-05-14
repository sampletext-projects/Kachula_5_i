#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделал Качула Михаил Викторович студент группы УМЛ-112" << "\n";
	cout << "Программа \"Собака Фон Неймана\"" << endl;

	cout << setiosflags(ios::fixed);
	double v1, v2, s;
	cout << "Введите скорость сближения, собаки и расстояние: ";
	cin >> v1 >> v2 >> s;

	cout << setprecision(4) << s << " км осталось\n";

	double dogS = (s / (2 * v1)) * v2;

	int n = 0;

	//пока расстояние между мамой и дочкой больше 1 метра
	while (s > 0.001)
	{
		double t = s / (v2 + v1); //время реального сближения собаки и человека
		s -= 2 * v1 * t; //вычитаем расстояние, пройденное людьми за время бега собаки
		n++; //количество забегов увеличилось
		cout << setprecision(4) << s << " км осталось, забегов " << n << "\n";
	}

	cout << "Собака пробежала " << dogS << " км за " << n << " забегов. \n";

	system("pause");
	return 0;
}
