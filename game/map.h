#include <SFML\Graphics.hpp>
const int HEIGHT_MAP = 20;//������ ����� ������
const int WIDTH_MAP = 25;//������ ����� ������ 

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

/*void randomMapGenerate(){//�������� ����������� �����

int randomElementX = 0;//���������� ��� �������� ���������� �������� �� �����������
int randomElementY = 0;//���������� ��� �������� ���������� �������� �� ���������
	
	int countHp = 5;//���������� ������

	while (countHp>0){
	randomElementX = 1 + rand() % (WIDTH_MAP - 1);//��������������� �������� �� �x� �� 1 ��
		//������ �����-1. ����������� ������� ����� �� �������� ����� ������� �����
		randomElementY = 1 + rand() % (HEIGHT_MAP - 1);//�� �y�

	if (TileMap[randomElementY][randomElementX] == ' ') {//���� ��������� ������ ������, 
			TileMap[randomElementY][randomElementX] = 'h';  //�� ������ ���� ������.
			countHp--;
		}
	}
};*/