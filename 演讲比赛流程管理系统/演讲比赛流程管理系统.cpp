#include<iostream>
#include"speechManager.h"
using namespace std;

int main()
{
	//创建管理类对象
	SpeechManager sm;

	int choice = 0; //用于存储用户输入

	while(true)
	{ 
		sm.show_Menu();

		cin >> choice;

		switch (choice)
		{
		case 1:   //开始演讲比赛
			sm
			break;
		case 2:   //查看往届记录
			sm
			break;
		case 3:   //清空比赛记录
			sm
			break;
		case 0:   //退出比赛程序
			sm.exitSystem();
			break;
		default:
			system("cls");  //清屏
			break;
		}
	}

	system("pause");
	return 0;
}