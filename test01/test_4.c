#include <stdio.h>

void menu()
{
	printf("1.ѧ���ɼ�¼��\n");
	printf("2.ѧ���ɼ�¼��\n");
	printf("3.ѧ���ɼ�¼��\n");
	printf("4.ѧ���ɼ�¼��\n");
	printf("5.ѧ���ɼ�¼��\n");
	printf("0.ѧ���ɼ�¼��\n");
}

void test02()
{
	int choose = -1;
	printf("���������ѡ��(0-5):>");
	scanf("%d", &choose);
	printf("����ѡ���ǣ�%d", choose);

	while (1)
	{

		switch (choose)
		{
		case 1:
			printf("����ʹ�ã�ѧ���ɼ�¼��\n");
			break;
		case 2:
			printf("����ʹ�ã�ѧ���ɼ��޸�\n");
			break;
		case 3:
			printf("����ʹ�ã�ѧ���ɼ�ɾ��\n");
			break;
		case 4:
			printf("����ʹ�ã�ѧ���ɼ���ѯ\n");
			break;
		case 5:
			printf("����ʹ�ã�ѧ���ɼ���ӡ\n");
			break;
		case 0:
			printf("ллʹ�ã��ټ�\n");
			break;
		default:
			printf("�Բ���û������˵���!\n");
			break;
		}
	}
}

int main()
{
	menu();
	test02();
	return 0;
}

