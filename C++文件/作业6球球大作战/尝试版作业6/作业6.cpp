#define CRT SECURE NO WARNINGS
#include"easyx.h"
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<WinUser.h>

int main()
{
	int x=300, y = 20,r=10;//С�������
	int v=5;//�ƶ����ٶ�
	int vx = v, vy= v;//�����ٶ��������ٶ�
	int minx = 10 ,miny = 10, maxx = 460,maxy=460;//�߽緶Χ
    char key=0;//���尴��
	initgraph(640,480);
	BeginBatchDraw();//������ͼ
	while (1)
	{
		setbkcolor(RGB(200, 200, 200));
		cleardevice();
		//���Ʊ߿�
		setlinestyle(PS_SOLID, 3);
		setlinecolor(BLUE);
		line(minx,miny,minx,maxy);
		line(minx,miny,maxx,miny);
		line(maxx,miny,maxx,maxy);
		line(minx,maxy,maxx,maxy);
		//����С��
		setfillcolor(RGB(100,200,200));
		solidcircle(x,y,r);
		FlushBatchDraw();
		//�����߽練��
		if (y >maxy - r )
		{vy=-v;
		putchar('\a');}
		if(y<miny+r)
		{vy=v;
		putchar('\a');}
		if(x> maxx -r)
		{vx=-v;
		putchar('\a');}
		if (x<minx +r)
		{vx=v;
		putchar('\a');}
		//�ƶ�С��
		x = x + vx;
		y =y+ vy;
		//С�����
		if (y > maxy +r)
		{		cleardevice();
		        IMAGE img;
		        loadimage(&img,L"lose.jpg",640,480,true);
		        putimage(0, 0, &img);
		        break;
		}
		if (_kbhit())key = _getch();
		switch (key)
		{
		case 'a':
			vx = -v;
			break;
		case 's':
			vy=v;
			break;
		case 'd':
			vx=v;
			break;
		case 'w':
			vy=-v;
			break;
		}
		Sleep(10);
	}
	closegraph();


	Sleep(10);
	EndBatchDraw();
	system(" pause");
	closegraph();
}