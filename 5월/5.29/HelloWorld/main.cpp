#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <cmath>



int main()
{
	//2-1���: ������ ���� ���� ���� �ý����� �����ϼ���.����ڴ� ���� �������� �����Ͽ� �Ա�, ���, �ܾ� ��ȸ ���� �۾��� ������ �� �ֽ��ϴ�.
	char name[100];
	int age, account, start_deposit, menu, count = 0;
	int transaction_count = 0;//�ŷ�Ƚ��
	double total_money, money = 0;

	float rate = 3.0f;
	float interest_rate = 0.0;//���� ���
	int Plus_amount;

	if (age >= 65)
	{
		interest_rate += 0.005;//65�� �̻� :0.5% �߰�
	}
	else if (age < 30)
	{
		interest_rate += 0.002;//30�� �̸�:0.2% �߰�
	}
	rate += interest_rate;

	printf("==���� ���� ���� �ý���==\n");
	printf("���� ������ ���� ������ �Է��ϼ���.\n");
	printf("���̸�:");
	scanf("%s", name);
	printf("\n����:");
	printf("&d", &age);
	printf("\n�ʱ� �Աݾ�:");
	scanf("%d", &start_deposit);

	printf("���°� ���������� �����Ǿ����ϴ�!\n");
	printf("����:%s(%d��)\n", name, age);
	printf("�ʱ��ܾ�:%d��\n", start_deposit);
	printf("���� ����:%.1f%%(���%.1f%%����)\n\n", rate, interest_rate);


	do

	{
		printf("==�޴�==\n1:�Ա�\n2:���\n3:�ܾ���ȸ\n4:���ڰ��\n5:���� ���� ���\n0:����\n");
		printf("����:%d");
		scanf("%d", &menu);
		printf("\n");



		switch (menu)
		{
		case 1:

			printf("�Ա��� �ݾ��� �Է��ϼ���");
			scanf("%d", &money);

			if (money < 0)
			{
				printf("���̳ʽ� �Դϴ�. �ٽ� �Է��ϼ���.");
			}
			else {

				Plus_amount += total_money;
				printf("�Ա��� �Ϸ�Ǿ����ϴ�.\n");
				printf("���� �ݾ�:%d��\n", total_money);
			}
			break;

		case 2:
			printf("����� �ݾ�:");
			scanf("%d", &money);

			if (money < 0)
			{
				printf("�����ݾ��� ����� �Ұ��մϴ�.\n");
				break;
			}

			if (total_money < money)
			{
				printf("��� ���� �ݾ׺��� �����ϴ�.\n");
			}
			else
			{
				total_money -= money;
				printf("��� �Ϸ�.\n");
				count++;
				if (count > 5)
				{
					total_money -= 500;//���� ������
					printf("�����ܾ�:%d��\n", total_money);
					printf("�ŷ�Ƚ��:%dȸ(����)\n", count);
				}
				else
				{
					printf("���� �ܾ�:%d��\n", total_money);
					printf("�ŷ�Ƚ��:%dȸ(����)\n", total_money);
				}
			}
			break;
		case 3:
			printf("���� ���¿� �ִ� �ݾ�: % d��\n", Plus_amount);
			break;
		case 4:
			printf("�̹��� ���ڴ� %.f���Դϴ�.\n", Plus_amount * 0.01 * rate / 12);
			break;
		case 5:
			printf("���� ������ ����մϴ�.\n");
			printf("����:%s(%d��)\n", name, age);
			printf("���� �ܾ�: % d��\n", total_money);
			printf("���� ����:%1.f%%(��� %.1f%% ����\n", rate, interest_rate);
			break;

		case 0:
			printf("����Ǿ����ϴ�.\n");
			break;
		default:
			printf("�޴� ������ ������ϴ�.\n");
		}
		printf("\n");

	} while (menu != 0);


   
    return 0;
        }





			
       
        

		

