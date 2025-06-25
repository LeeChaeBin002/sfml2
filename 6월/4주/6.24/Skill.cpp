#include "Skill.h"
#include "FireBall.h"
#include "Heal.h"
#include "Shield.h"

int main() {
    Skill* skills[3]{};
    skills[0] = new FireBall();
    skills[1] = new Heal();
    skills[2] = new Shield();

    cout << "��� ������ ��ų:" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << ". " << skills[i]->GetName()
            << " (����: " << skills[i]->GetManaCost()
            << ", ��ٿ�: " << skills[i]->GetCooldown() << "��)" << endl;
    }

    cout << endl;
    skills[0]->Use(); // ���̾ ���

    // �޸� ����
    for (int i = 0; i < 3; ++i) {
        delete skills[i];
    }

    return 0;
}
