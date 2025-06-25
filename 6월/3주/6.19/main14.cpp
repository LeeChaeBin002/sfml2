#include <iostream>
#include <cstdlib>
using namespace std;
//### 14. GameManager Ŭ����

//���� ��ü ���¸� �����ϴ� ���� Ŭ������ ���弼��.
//
//- static bool isPlaying
//- static int currentLevel
//- static �޼���θ� ����
class GameManager {
private:
	static bool isPlaying;
	static int currentLevel;

public:

	static void startGame() {
		isPlaying = true;
		currentLevel = 1;
		cout << "���ӽ���!" << endl;

	}
	static void nextLevel() {
		if (isPlaying) {
			currentLevel++;
			cout << "���� ������!" << endl;
		}
	}
	static void printLevel() {
		cout << "���� ����: " << currentLevel << endl;
	}
	static void endGame() {
		isPlaying = false;
		cout << "���� ����!" << endl;
	}
	static void printStatus() {
		cout << "���� ����: " << (isPlaying ? "���� ��" : "�����") << endl;
	}
};
// ���� ��� ����
bool GameManager::isPlaying = false;
int GameManager::currentLevel = 0;
int main()

{
	GameManager::startGame();
	GameManager::printLevel();

	GameManager::nextLevel();
	GameManager::printLevel();

	GameManager::endGame();
	GameManager::printStatus();
}
