#include <iostream>
#include <iomanip> 
#include "Student.h"
#include "Item.h"
using namespace std;

//1.### ���� 1. ���� ���� �ý���

//�л����� ���� ������ �������� �����ϴ� ���α׷��� �ۼ��ϼ���.
//
//- �л� ���� �Է¹޾� ���� �迭 ����
//- �� �л��� ���� �Է�
//- ��� ���� ��� �� ���
//- �޸� ����

int main() {
    //int studentCount;

    //cout << "�л� ���� �Է��ϼ���: ";
    //cin >> studentCount;

    //// 1. ���� �迭 ����
    //int* scores = new int[studentCount];

    //// 2. ���� �Է�
    //for (int i = 0; i < studentCount; ++i) 
    //{
    //    cout << i + 1 << "�� �л� ����: ";
    //    cin >> scores[i];
    //}

    //// 3. ��� ���
    //int sum = 0;
    //for (int i = 0; i < studentCount; ++i) 
    //{
    //    sum += scores[i];
    //}
    //double average = static_cast<double>(sum) / studentCount;

    //// 4. ��� ���
    //cout << fixed << setprecision(2);
    //cout << "��� ����: " << average << endl;

    //// 5. �޸� ����
    //delete[] scores;
    //cout << "�޸� ���� �Ϸ�" << endl;

    //return 0;
    // 
    //2.### ���� 2. ���� �迭 ����

    //���ӿ��� ���� ������ HP�� �����ϴ� ���α׷��� �ۼ��ϼ���.

    //    - ���� ���� �Է¹޾� HP �迭 ���� �Ҵ�
    //    - �� ������ �ʱ� HP�� 100
    //    - ��� ���Ϳ��� 20�� ������ ����
    //    - ������ ���� �� ���
    // 
    //int MonseterCount;
    //// 1. ���� �� �Է�
    //cout << "���� �� �Է�: ";
    //cin >> MonseterCount;

    //// 2. ���� �迭 ���� �� �ʱ�ȭ (HP 100)
    //int* Hp = new int[MonseterCount];
    //for (int i = 0; i < MonseterCount; ++i) {
    //    Hp[i] = 100;
    //}
    //// 3. �ʱ� HP ���
    //    cout << "�ʱ� HP: ";
    //for (int i = 0; i < MonseterCount; ++i)
    //{
    //    cout<< Hp[i]<<" ";
    //}
    //cout << endl;

    //// 4. 20 ������ ����

    //for (int i = 0; i < MonseterCount; ++i)
    //{
    //    Hp[i] -= 20;
    //}

    //// 5. ������ �� HP ���
    //cout << "������ 20 ���� ��: ";
    //for (int i = 0; i < MonseterCount; ++i) {
    //    cout << Hp[i] << " ";
    //}
    //cout << endl;

    //// 6. ���� ���� �� ��� (HP > 0)
    //int aliveCount = 0;
    //for (int i = 0; i < MonseterCount; ++i) {
    //    if (Hp[i] > 0)
    //        ++aliveCount;
    //}
    //cout << "���� ����: " << aliveCount << "����" << endl;

    //// 7. �޸� ����
    //delete[] Hp;

    //3.### ���� 3. �л� ���

    /*Student Ŭ������ ����� �������� �л� ��ü�� ���� / �����ϼ���.

        - �̸��� �й��� ���� Student Ŭ����
        - �����ڿ� �Ҹ��ڿ��� �޽��� ���
        - �������� 3���� �л� ���� �� ���� ���*/
        // ���� ����
    Student* s1 = new Student(2024001, "��ö��", 1);
    Student* s2 = new Student(2024002, "�̿���", 2);
    Student* s3 = new Student(2024003, "�ڹμ�", 3);

    // ���� ���
    s1->printInfo();
    s2->printInfo();
    s3->printInfo();

    // �޸� ����
    delete s1;
    delete s2;
    delete s3;

   /* ### ���� 4. ������ �κ��丮

        ���� �������� �����ϴ� ������ �κ��丮�� �����ϼ���.

        - Item Ŭ����(�̸�, ����)
        - �κ��丮 ũ�⸦ �Է¹޾� Item ������ �迭 ����
        - ������ �߰� / ���� ���
        - �� ��ġ ���*/
    
   

    // Ensure the `std` namespace is explicitly used for `cout`  
    cout << "�� ��: ";
    //### ���� 5. ��ȭ�� �¼� ��ġ

    /*2���� ���� �迭�� ��ȭ�� �¼��� ǥ���ϼ���.

        - ��� �� ���� �Է¹޾� 2���� �迭 ����
        - �� �¼��� 0, ����� �¼��� 1
        - Ư�� �¼� ���� ���
        - �¼� ��ġ�� ���*/

    int rows, cols;
    cout << "�� ��: ";
    cin >> rows;
    cout << "�� ��: ";
    cin >> cols;

    // 2���� ���� �迭 ����
    int** seats = new int* [rows];
    for (int i = 0; i < rows; ++i) {//��
        seats[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {//��
            seats[i][j] = 0; // �ʱ�ȭ: �� �¼�
        }
    }

    // �¼� ����
    seats[0][2] = 1; // (1,2)
    seats[1][3] = 1; // (2,3)

    cout << "�¼� (1,2) ����\n";
    cout << "�¼� (2,3) ����\n";

    // �¼� ��ġ�� ���
    cout << "[�¼� ��ġ��]\n";
    int reservedCount = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << seats[i][j] << " ";
            if (seats[i][j] == 1) reservedCount++;
        }
        cout << endl;
    }

    cout << "����� �¼�: " << reservedCount << "��\n";

    // �޸� ����
    for (int i = 0; i < rows; ++i) {
        delete[] seats[i];
    }
    delete[] seats;

    return 0;

}








