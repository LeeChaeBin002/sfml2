//1. �⺻ scanf ���: ����ڷκ��� �� ���� ������ �Է¹޾� ����, ����, ����, ������ ����� ����ϴ� ���α׷��� �ۼ��ϼ���. �������� �Ǽ� ����� ����ϼ���.
int a, b;
scanf("%d%d", &a, &b);
printf("�� ������ �Է��ϼ���%d,%d\n", a, b);
printf("%d+%d=%d\n", a, b, a + b);
printf("%d-%d=%d\n", a, b, a - b);
printf("%d*%d=%d\n", a, b, a* b);
printf("%d/%d=%.2f\n", a, b, (float)a / b);

//2. �پ��� �ڷ��� �Է¹ޱ�: ����ڷκ��� ����, �Ǽ�, ���ڸ� ���� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��ϼ���. �Ǽ��� �Ҽ��� ��5° �ڸ����� ����ϼ���.
int j;
float s;
char A;

scanf("%d%f %c", &j, &s, &A);
printf("\n������ �Է��ϼ���:%d\n", j);
printf("�Ǽ��� �Է��ϼ���:%.5f\n", s);
printf("���ڸ� �Է��ϼ���:%c\n", A);
printf("�Է¹��� ����:%d\n", j);
printf("�Է¹��� �Ǽ�:%.5f\n", s);
printf("�Է¹��� ����:%d\n", A);
printf("�Է¹��� ������ ASCII�ڵ�:%c\n", A);

//3 �л� ���� �Է� �� ó��: �л��� �̸�(���ڿ�), ����, ����, ���� ������ �Է¹޾� ������ ����� ����Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���. ����� �Ҽ��� ��° �ڸ����� ����ϼ���.
int a, b, c;
char name[100];

scanf("%s%d%d%d", name, &a, &b, &c);

printf("�л��̸��� �Է��ϼ���:%s\n", name);
printf("���� ������ �Է��ϼ���:%d\n", a);
printf("���� ������ �Է��ϼ���:%d\n", b);
printf("���� ������ �Է��ϼ���:%d\n", c);
printf("==����ǥ==\n");
printf("�̸�:%s\n", name);
printf("����:%d��\n", a);
printf("����:%d��\n", b);
printf("����:%d��\n", c);
printf("����:%d��\n", a + b + c);
printf("���:%.2f��\n", (a + b + c) / 3.0);

//4. ��ǰ ���� �Է� �� ��� : ��ǰ��, �ܰ�, ������ �Է¹޾� �� �ݾ��� ����ϰ�, 10 % ���ε� �ݾ׵� �Բ� ����ϴ� ���α׷��� �ۼ��ϼ���.

char name[100];
int a;
int b;
scanf("%s%d%d", name, &a, &b);
printf("��ǰ���� �Է��ϼ���:%s\n", name);

printf("�ܰ��� �Է��ϼ���:%d��\n", a);
printf("������ �Է��ϼ���:%d\n", b);
printf("==���� ����==\n");
printf("�ܰ�:%d��\n", a);
printf("����:%d��\n", b);
int discounted_price = (a + a) * 0.9f;
printf("�� �ݾ�:%d��\n", a + a);
printf("���� �ݾ�(10%):%d��\n", (a + a) * 10 / 100);
printf("���� �ݾ�:%d��\n", discounted_price);

//5���� ���� ���� �Է� : ������� ����, Ű(�Ǽ�), ������(�Ǽ�), ����(����), �̸��� �Է¹޾� BMI�� ����ϰ� ���� ������ ����Ͽ� ����ϴ� ���α׷��� �ۼ��ϼ���.BMI = ������(kg) / (Ű(m) * Ű(m))
char  name[10];
int age;
float key, bmi, wight;
char gender;


scanf("%d%f%f %c%s", &age, &key, &wight, &gender, name);
printf("���̸� �Է��ϼ���:%d\n", age);
printf("Ű�� �Է��ϼ���:%.1f\n", key);
printf("�����Ը� �Է��ϼ���:%.1f\n", wight);
printf("������ �Է��ϼ���:%c\n", gender);
printf("�̸��� �Է��ϼ���:%s\n", name);
float height_m = key / 100.0f;
bmi = wight / (height_m * height_m);
printf("BMI:%.2f\n", bmi);
printf("==�������� ���==\n");
printf("�̸�:%s\n", name);
printf("����:%c\n", gender);
printf("Ű:%.2f\n", key);
printf("������:%.2f\n", wight);
