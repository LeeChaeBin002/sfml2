#include <iostream>
#include <string>
using namespace std;
//1.### 1. ���� ȸ�� ���ӽ����̽�

//�� ���� ȸ��(Nexon, NCsoft)���� ���� Player Ŭ������ ��������ϴ�.���ӽ����̽��� ����Ͽ� �����ϰ�, �� ȸ���� Player�� �����Ͽ� ������ ����ϼ���.
//
//- Nexon::Player�� showInfo() �޼���� "�ؽ� �÷��̾��Դϴ�"��� ���
//- NCsoft::Player�� showInfo() �޼���� "��������Ʈ �÷��̾��Դϴ�"��� ���

namespace Nexon
{
	class player 
	{
	public:
		void showInfo() {
			cout << "�ؽ� �÷��̾��Դϴ�." << endl;
		}
	};
}
namespace Ncsoft
{
	class player
	{
	public:
		void showInfo() {
			cout << "��������Ʈ �÷��̾��Դϴ�." << endl;

		}
	};
}

int main() {

	Nexon::player p1;
	Ncsoft::player p2;

	p1.showInfo();
	p2.showInfo();

	return 0;

}