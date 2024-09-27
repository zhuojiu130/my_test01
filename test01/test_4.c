#include <stdio.h>

void menu()
{
	printf("1.学生成绩录入\n");
	printf("2.学生成绩录入\n");
	printf("3.学生成绩录入\n");
	printf("4.学生成绩录入\n");
	printf("5.学生成绩录入\n");
	printf("0.学生成绩录入\n");
}

void test02()
{
	int choose = -1;
	printf("请输入你的选择(0-5):>");
	scanf("%d", &choose);
	printf("您的选择是：%d", choose);

	while (1)
	{

		switch (choose)
		{
		case 1:
			printf("正在使用：学生成绩录入\n");
			break;
		case 2:
			printf("正在使用：学生成绩修改\n");
			break;
		case 3:
			printf("正在使用：学生成绩删除\n");
			break;
		case 4:
			printf("正在使用：学生成绩查询\n");
			break;
		case 5:
			printf("正在使用：学生成绩打印\n");
			break;
		case 0:
			printf("谢谢使用，再见\n");
			break;
		default:
			printf("对不起，没有这个菜单项!\n");
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

