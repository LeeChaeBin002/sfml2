#include <stdio.h>  
#include <string>
#include <vector>

struct Gameitem
{
	char name[100];
	int price;
	int quantity;

};
struct Time
{
	int h;
	int m;
	int s;
};
int toSeconds(const Time t) {
	return  3600*t.h + t.m * 60 + t.s;
}
int main() {  

	//1.### 1. **��ǥ ����ü �⺻**  

	//�͸� ����ü�� ����Ͽ� ���� ĳ������ 2D ��ǥ�� �����ϰ� ����ϴ� ���α׷��� �ۼ��ϼ���.  

	/*struct { float x,y; }pos;  
	{  
		pos.x = 10.5;  
		pos.y = 20.3;  

		printf("%.1f,%.1f\n", pos.x, pos.y);  
	};*/  

	//2.### 2. **�л� ���� ����ü**  

	//�̸�(�ִ� 50��), �й�, ������ �����ϴ� Student ����ü�� �����ϰ�, �� ���� �л� ������ �ʱ�ȭ�Ͽ� ����ϼ���.  

	/*struct My
	{  
		char name[100];  
		int studentNumber;  
		float score;  
	};  

	struct My student = {"��ö��", 20241234, 87.5};  

	printf("�̸�: %s\n�й�: %d\n����: %.1f��\n", student.name, student.studentNumber, student.score);*/  

	//.3### 3. **���� ������ ����ü**

	//�����۸�(�ִ� 30��), ����, ������ ���� GameItem ����ü�� �����, 3���� �������� �ʱ�ȭ�Ͽ� �κ��丮�� ����ϼ���.
	
	/*Gameitem n1 = { "ü������",100,5};
	Gameitem n2 = { "��������",150,3};
	Gameitem n3 = { "��Ȱ����",500,1 };

	
	printf("=== �κ��丮 ===\n");
	printf("1. %s-����%d��,����:%d��\n", n1.name,n1.price,n1.quantity);
	printf("2. %s-����%d��,����:%d��\n", n2.name, n2.price, n2.quantity);
	printf("3. %s-����%d��,����:%d��\n", n3.name, n3.price, n3.quantity);*/

	// 4. * *�ð� ����ü Ȱ�� * *

	//��(h), ��(m), ��(s)�� �����ϴ� Time ����ü�� �����, �ð��� �� ������ ��ȯ�Ͽ� ����ϼ���.
	

	Time t = { 1,23,45 };
	int totalSeconds = toSeconds(t);
	printf("�ð�: %d�ð� %d�� %d��\n",t.h,t.h,t.s);
	printf("�� ��:%d��", totalSeconds);


	//5. ### 5. **���� ���� ����**

	// ����(�ִ� 100��), ����(�ִ� 50��), ������ ���� Book ����ü�� �����ϰ�, 2���� å ������ ����ϼ���.

	struct library
	{
		char n1[100];
		char n2[100];
		char n3[100];
		int price=0;
	};
	library name1 = { "����1","C++ ���α׷���","-ȫ�浿 ��",25000 };
	library name2 = { "����2","���� ���� �Թ�","-�谳�� ��",30000 };

	printf("%s:%s%s,%d��\n",name1.n1, name1.n2, name1.n3, name1.price);
	printf("%s:%s%s,%d��\n", name2.n1, name2.n2, name2.n3, name2.price);

	return 0;  
}
