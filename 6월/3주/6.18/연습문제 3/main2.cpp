#include <iostream>
#include <string>
using namespace std;
//2.### 2. ��ø ���ӽ����̽�

//Game ���ӽ����̽� �ȿ� RPG�� FPS ���ӽ����̽��� �����, ���� Weapon ������ �����ϼ���.
//
//- Game::RPG::weapon = "���� ������"
//- Game::FPS::weapon = "����"

namespace Game
{
	namespace RPG
	{
		string weapon = "���� ������";
	}

	namespace FPS {
		string weapon = "����";
	}
}

int main() {

		cout << "RPG ����: " << Game::RPG::weapon << endl;
		cout << "FPS ����: " << Game::FPS::weapon << endl;

	return 0;

}