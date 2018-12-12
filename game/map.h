#include <SFML\Graphics.hpp>
const int HEIGHT_MAP = 20;//размер карты высота
const int WIDTH_MAP = 25;//размер карты ширина 

std::string TileMap[HEIGHT_MAP] = {
	"0000000000000000000000000",
	"0h               c0  h  0",
	"0                 0     0",
	"0                 0     0",
	"00000000000       0     0",
	"0         0             0",
	"0         0000000       0",
	"0                       0",
	"0                       0",
	"0     0                 0",
	"0     0                 0",
	"0     0000000000        0",
	"0                       0",
	"0               h       0",
	"0                       0",
	"0    00000000000        0",
	"0           h  0        0",
	"0              0        0",
	"0c             0       c0",
	"0000000000000000000000000",
};

/*void randomMapGenerate(){//рандомно расставл€ем камни

int randomElementX = 0;//переменна€ дл€ хранени€ случайного элемента по горизонтали
int randomElementY = 0;//переменна€ дл€ хранени€ случайного элемента по вертикали
	
	int countHp = 5;//количество камней

	while (countHp>0){
	randomElementX = 1 + rand() % (WIDTH_MAP - 1);//псевдослучайное значение по УxФ от 1 до
		//ширина карты-1. ќграничение введено чтобы не получать числа бордюра карты
		randomElementY = 1 + rand() % (HEIGHT_MAP - 1);//по УyФ

	if (TileMap[randomElementY][randomElementX] == ' ') {//если встретили символ пробел, 
			TileMap[randomElementY][randomElementX] = 'h';  //то ставим туда камень.
			countHp--;
		}
	}
};*/