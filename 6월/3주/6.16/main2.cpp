#include <stdio.h>  
#include <string>
#include <vector>


struct TestA
{
    char a;
    int b;
    char c;
};

struct TestB
{
    char a;
    char b;
    int c;
};

struct TestC
{
    int a;
    char b;
    char c;
};

struct Version1 {
    char level;
    int Hp;
    char grade;
    int mp;
  
};
struct Version2 {
    char level;
    char grade;
    int Hp;
    int mp;

};
struct XY {
    
    int x;
    int y;

};
struct character {
    char name[100];
    int Hp=100;
    int Mp=50;
};

struct Monster {
    char n1[100];
    char n2[100];
    int Hp;
};

struct Score {
    char score_name[100];
    int score_number;

};

struct Result {
    char result_name[100];
    int  result_namber;

};
Result* findTop(Result* arr, int size) {
    if (size <= 0) return NULL;

    Result* top = arr;  // ù ��°�� �ְ��� ����

    for (int i = 1; i < size; i++) {
        if ((arr + i)->result_namber > top->result_namber) {
            top = arr + i;  // �� ���� ������ �߰��ϸ� ����
        }
    }

    return top;
}

struct Vector2D {

    double x;
    double y;
};
Vector2D addVector(Vector2D a, Vector2D b) {
    Vector2D result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    return result;
}

double getLength(Vector2D v) {
    return sqrt(v.x * v.x + v.y * v.y);
}
struct Point
{
    int x,y;
};

void Swap(Point* a, Point* b) {
    Point temp = *a;
    *a = *b;
    *b = temp;
};
struct Student
{
    char student[100];
    int score;
};
Student* FindTopStudent(Student students[], int size)
{
    if (size <= 0)return NULL;
    Student* top_ = &students[0];

    for (int i = 1; i < size; i++) {
        if (students[i].score > top_->score) 
        {
            top_ = &students[i];  // �� ���� ������ �߰��ϸ� ����
        }
    }
    return top_;
};
struct RPGCharacter
{
    char RPG_name[100];
    int Level;
    int Hp, maxHp;
    int Mp, maxMp;
    int attak, defense;
};
void printStatus(RPGCharacter* rpg) {

    printf("=== ĳ���� ���� ===\n");
    printf("�̸�: %s\n", rpg->RPG_name);
    printf("����: %d,Hp: %d/%d,Mp: %d/%d\n", rpg->Level, rpg->Hp, rpg->maxHp, rpg->Mp, rpg->maxMp);
    printf("���ݷ�:%d,����:%d\n", rpg->attak, rpg->defense);
}
    void levelUp(RPGCharacter * rpg) 
    {
        rpg->Level += 1;
        rpg->maxHp += 50;
        rpg->Hp = rpg->maxHp;
        rpg->maxMp += 20;
        rpg->attak += rpg->attak / 10;
        rpg->defense += rpg->defense / 10;


        printf("\n������!\n");
        printf("����:%d,Hp: %d/%d,Mp: %d/%d\n:",rpg->Level, rpg->Hp, rpg->maxHp,rpg->maxHp,rpg->maxMp);
        printf("���ݷ�:%d,����:%d\n",rpg->attak,rpg->defense);
    }

    struct Rectangle
    {
        double width = 10, height = 5;//���� ����
        int extent, cir;//���� �ѷ�

    };
    //���� ��� �Լ�
    double getArea(Rectangle rect) {

        return rect.width * rect.height;
    }
    //�ѷ� ��� �Լ� 2*(����+����)
    double getPerimeter(Rectangle rect)
    {
        return 2 * (rect.width + rect.height);
    }

    struct GameObject
    {
        char player[20];
        int HP,maxHp;
        int attak_Damage;
        int heal;
        int Status;
    };
    //���� ��� �Լ�
    void print_Status(GameObject* obj) {
        printf("�÷��̾� ����:%s(HP:%d/%d)\n\n", obj->player, obj->HP, obj->maxHp);

    }
    //������ �ޱ� �Լ�
    void takeDamage(GameObject* obj, int damage) {
        obj->HP -= damage; //���ӿ�����Ʈ�� �����ʹ� ���ٿ����ڷ� Hp�� ����Ų��.
        if (obj->HP < 0)
            obj->HP = 0;
        printf("%d �������� �޾ҽ��ϴ�!\n", damage);
        print_Status(obj);
    }
    //ȸ�� �Լ�
    void heal(GameObject* obj, int amount) {
        int before = obj->HP;
        obj->HP += amount;
        if (obj->HP > obj->maxHp) {
            obj->HP = obj->maxHp;
            printf("%d ȸ���߽��ϴ�!(�ִ� Hp �ʰ�)\n", amount);
        }
        else {
            printf("%d ȸ���߽��ϴ�!\n", amount);
        }
        print_Status(obj);
    }


int main()
{
    // 6. **����ü ũ�� Ȯ��**
    // ���� 3���� ����ü�� ����� ������ ũ�⸦ ����ϼ���:

    printf("TestA ũ��: %zu ����Ʈ\n", sizeof(TestA));
    printf("TestB ũ��: %zu ����Ʈ\n", sizeof(TestB));
    printf("TestC ũ��: %zu ����Ʈ\n", sizeof(TestC));

    //### 7. **�޸� �е� �ǽ�**
   //Player ����ü�� �� ���� ������� �����ϰ� ũ�� ���̸� Ȯ���ϼ��� :
    printf("Version1 ũ��: %zu ����Ʈ\n", sizeof(Version1));
    printf("Version2 ũ��: %zu ����Ʈ\n", sizeof(Version2));
    printf("�޸� ����: %zu ����Ʈ\n", sizeof(Version1) - sizeof(Version2));

    //### 8. * *�ּ� ��� �ǽ� * *
    //  ��ǥ ����ü(x, y)�� �����, ����ü�� �� ����� �ּҸ� ����ϼ���.
    XY point = { 10,20 };
    printf("����ü ��ü �ּ�:%p\n", &point);
    printf("x��� �ּ�:%p\ny��� �ּ�:%p\n", &point.x, &point.y);
    printf("�ּ� ����:%ld����Ʈ\n", (long)((char*)&point.y - (char*)&point.x));

    //### 9. * *�����ͷ� ����ü ���� * *
    //Character ����ü(�̸�, HP, MP)�� �����, �����͸� ����Ͽ� HP�� MP�� ������ �� ����ϼ���.
    character hero = { "����",100,50 };
    character* ptr = &hero;//����ü ����Ʈ ����
    printf("\n=== �ʱ� ���� ===\n");
    printf("�̸�:%s,Hp: %d,Mp: %d\n\n", ptr->name, ptr->Hp, ptr->Mp);
    ptr->Hp += 50;
    ptr->Mp += 50;
    printf("=== ���� ��� �� ===\n");
    printf("�̸�:%s,Hp: %d,Mp: %d\n\n", ptr->name, ptr->Hp, ptr->Mp);

    //### 10. **ȭ��ǥ ������ Ȱ��**
    //Monster ����ü �迭(3��)�� �����, �����Ϳ� ȭ��ǥ �����ڷ� ��ȸ�ϸ� ������ ����ϼ���.
    Monster monsters[3] = {
    { "���� 1", "������", 30 }, { "���� 2","���",50 }, { "���� 3","��ũ",100 }
    };
    Monster* ptr2 = monsters;//ù��° ����� �ּ�

    for (int i = 0; i < 3; i++) {
        printf("%s:", (ptr2 + i)->n1);
        printf(" %s ", (ptr2 + i)->n2);
        printf("(Hp: %d)\n", (ptr2 + i)->Hp);
    }

    //### 11. **����ü ������ �迭**
    //Score ����ü(�̸�, ����)�� �����, 3���� �÷��̾ ������ �迭�� �����Ͽ� ����ϼ���.
    Score score[3] = { {"Alice",9500},{"Bob",8200},{"Carol",7800} };
    
    Score* ptr3 = score;

    printf("\n=== ������ ===\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d��:%s-%d��\n", i+1, (ptr3 + i)->score_name, (ptr3 + i)->score_number);
    }
    printf("\n");

    //### 12. **�����ͷ� �ִ� ã��**
    //Result ����ü(�̸�, ����) �迭���� �����͸� ����� �ְ� ������ ã�� �ش� ����ü�� �����͸� ��ȯ�ϴ� ���α׷��� �ۼ��ϼ���.
    Result result[4] = { {"��ö��",85},{"�̿���",92},{"�ڹμ�",88},{"������",95} };
    Result* Ptr4 = result;
    
    for (int i = 0; i < 3; ++i)
    {
        printf("������: %s(%d),", (Ptr4 + i)->result_name, (Ptr4 + i)->result_namber);
    }
        printf("%s(%d)\n", (Ptr4 + 3)->result_name, (Ptr4 + 3)->result_namber);
        
        Result* top = findTop(result, 4);
        if (top != NULL) 
        {
            printf("�ְ� ������: %s-%d��\n", top->result_name, top->result_namber);
        }

    //13.Vector2D ����ü(x, y)�� �����, ������ ���̸� ����ϴ� �Լ��� �� ���� ������� �����ϼ���.
       
        Vector2D vector = { 3.0,4.0 };
        double length = getLength(vector);

        printf("����:%.1f,%.1f\n", vector.x, vector.y);
        printf("������ ����:%.2f\n",length);

    //14.Point ����ü(x, y)�� �����, �� ���� ��ǥ�� ��ȯ�ϴ� swap �Լ��� �����ϼ���.
        Point p1 = { 10,20 };
        Point p2 = { 30,40 };
        printf("��ȯ ��: ��A(%d,%d),��B(%d,%d)\n",p1.x,p1.y,p2.x,p2.y);
        Swap(&p1, &p2);//�����ͷ� ����
        printf("��ȯ ��: ��A(%d,%d),��B(%d,%d)\n", p1.x, p1.y, p2.x, p2.y);

    //15.Student ����ü �迭(5��)���� �ְ� ���� �л��� ã�� �Լ��� ���弼��.
        printf("�л����:\n");
        Student students[5] = { {"��ö��",85},{"�̿���",92},{"�ڹμ�",78},{"������",95},{"���ϳ�",88} };
        Student* top_ = FindTopStudent(students,5);
        for (int i = 0; i < 5; ++i) 
        {
            printf("%s: %d��\n", students[i].student, students[i].score);
                
        }
              
        if (top != NULL) 
        {
            printf("�ְ� ������: %s(%d��)\n", top_->student, top_->score);
            
        }

    //17.Vector2D �� ���� ���ؼ� ���ο� Vector2D�� ��ȯ�ϴ� �Լ��� ���弼��

        Vector2D v1 = { 5.0, 3.0 };
        Vector2D v2 = { 2.0, 7.0 };
        Vector2D sum = addVector(v1, v2);
        printf("\n����1:(%.2f,%.2f)\n",v1.x,v1.y);
        printf("����2:(%.2f,%.2f)\n",v2.x,v2.y);
        printf("���� ��:(%.2f,%.2f)\n",sum.x,sum.y);
    //18.RPGCharacter ����ü(�̸�, ����, HP, MP, ���ݷ�, ����)�� �����, ������ �Լ��� �����ϼ���.
        
        RPGCharacter Hero = {
          "���",    // �̸�
          10,       // ����
          500, 500, // hp, maxHp
          200, 200, // mp, maxMp
          50,       // ���ݷ�
          30        // ����
        };

        printStatus(&Hero);
        levelUp(&Hero);
    //19.Rectangle ����ü�� ����, ���� ���̸� �����ϰ�, ���̿� �ѷ��� ����ϴ� ��� �Լ��� �߰��ϼ���.
        Rectangle r = { 10.0,5.0 };

        printf("���簢��: ����:%.f,����%.f\n", r.width, r.height);
        printf("����: %.f\n", getArea(r));
        printf("�ѷ�: %.f\n",getPerimeter(r));

    //20.GameObject ����ü�� �̸�, HP, �ִ�HP�� �����ϰ�, ������ �ޱ�, ȸ���ϱ�, ���� ��� ��� �Լ��� �����ϼ���.

        GameObject game = {
            "����",
            100,
            100,
            30,
            20,
            50
        };
        printf("�÷��̾� ����: %s (HP: %d/%d)\n",game.player,game.HP, game.maxHp);
        takeDamage(&game,30);
        heal(&game, 20);
        heal(&game, 50);
        return 0;


}

