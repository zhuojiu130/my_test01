//#include <stdio.h>
//#include <windows.h>	// ���� Sleep() ����
//
//// ��ʾ�˵�����
//void menu()
//{
//	printf("===== ѧ���ɼ�����ϵͳ =====\n");
//	printf("1. ѧ���ɼ�¼��\n");
//	printf("2. ѧ���ɼ��޸�\n");
//	printf("3. ѧ���ɼ�ɾ��\n");
//	printf("4. ѧ���ɼ���ѯ\n");
//	printf("5. ѧ���ɼ���ӡ\n");
//	printf("0. �˳�ϵͳ\n");
//	printf("===========================\n");
//}
//
////�ɼ�¼�뺯��
//void input_score()
//{
//	printf("׼���ɼ�¼��......\n");
//	//����3�˳ɼ��ı���
//	int stu1 = 0;
//	int stu2 = 0;
//	int stu3 = 3;
//	//����3���˵ĳɼ�
//	printf("�������һ���˵ķ���:");
//	scanf("%d", &stu1);
//
//	printf("������ڶ����˵ķ���:");
//	scanf("%d", &stu2);
//
//	printf("������������˵ķ���:");
//	scanf("%d", &stu3);
//
//	//��ӡ���˵ĳɼ�
//	printf("��һ��ѧ���ĳɼ�:%d\n", stu1);
//	printf("�ڶ���ѧ���ĳɼ�:%d\n", stu2);
//	printf("������ѧ���ĳɼ�:%d\n", stu3);
//}
//
//
//// �û�ѡ��ĺ���
//void test02()
//{
//	int choose = -1; // ��ʼ��ѡ��Ϊ -1��ȷ������ѭ��
//
//	while (choose != 0)
//	{
//		menu(); // ��ʾ�˵�
//
//		printf("���������ѡ�� (0-5):> ");
//		scanf("%d", &choose);
//
//		switch (choose)
//		{
//		case 1:
//			printf("����ʹ�ã�ѧ���ɼ�¼��\n");
//			input_score();	//���ú���
//			break;
//		case 2:
//			printf("����ʹ�ã�ѧ���ɼ��޸�\n");
//			break;
//		case 3:
//			printf("����ʹ�ã�ѧ���ɼ�ɾ��\n");
//			break;
//		case 4:
//			printf("����ʹ�ã�ѧ���ɼ���ѯ\n");
//			break;
//		case 5:
//			printf("����ʹ�ã�ѧ���ɼ���ӡ\n");
//			break;
//		case 0:
//			printf("ллʹ�ã��ټ���\n");
//			break;
//		default:
//			printf("�Բ���û������˵�����������롣\n");
//			break;
//		}
//
//		Sleep(2500); // ������ͣ
//
//		system("cls"); // ������������ʾ�˵�
//	}
//}
//
//int main()
//{
//	test02(); // ���ô�����
//	return 0;
//}
