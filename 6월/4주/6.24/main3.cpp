#include "GameObject.h"
#include <string>  
#include <iostream> 
#include "Player.h"
#include "Enemy_.h"
#include "Item_.h"
using namespace std;

int main() {
    // GameObject g; // ����! �߻� Ŭ������ �ν��Ͻ�ȭ �Ұ���

    Player player;
    Enemy_ enemy;
    Item_ item;

    cout << "���� ������Ʈ ������Ʈ:" << endl;
    player.Update();
    enemy.Update();
    item.Update();

    return 0;
}