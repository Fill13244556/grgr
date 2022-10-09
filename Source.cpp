#include <iostream>
int main() {
	// 1
	int hp, h;
	std::cin >> hp;
	bool h = hp > 0;
	std::cout << std::boolalpha << h << std::endl;
	

// 2
	int temp;
	std::cin >> temp;
	if (temp > 20) {
		std::cout << "Вкл" << std::endl;
	}
	else {
		std::cout << "Выкл" << std::endl;
	}

// 3
	int vsttemp, tempinK, vlazh;
	std::cin >> vsttemp  >> tempinK >> vlazh;
	if (vsttemp >> tempinK && vlazh < 80) {
		std::cout << "On" << std::endl;
	}
	else {
		std::cout << "Off" << std::endl;
	}


// 4
	int x, y;
	std::cout << "x:" << std::endl;
	if (x > 0) {
		y = x - 2;
	}
	else if (x == 0) {
		y = 0;
	}
	else if (x < 0) {
		y = abs(x);
	}

// 5
	int palec;
	std::cin >> palec;
	if (palec > 1 && palec < 5) {
		switch (palec) {
		case 1: std::cout << "Большой" << std::endl;  break;
		case 2: std::cout << "Указательный" << std::endl;  break;
		case 3: std::cout << "Средний" << std::endl;  break;
		case 4: std::cout << "Безымянный" << std::endl;  break;
		case 5: std::cout << "Мизинец" << std::endl;  break;
		}
		return 0;
}