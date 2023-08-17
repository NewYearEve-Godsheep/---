#define CRT SECURE NO WARNINGS
#include"easyx.h"
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<WinUser.h>

int main()
{
	int x=300, y = 20,r=10;//小球的坐标
	int v=5;//移动的速度
	int vx = v, vy= v;//横向速度与纵向速度
	int minx = 10 ,miny = 10, maxx = 460,maxy=460;//边界范围
    char key=0;//定义按键
	initgraph(640,480);
	BeginBatchDraw();//批量绘图
	while (1)
	{
		setbkcolor(RGB(200, 200, 200));
		cleardevice();
		//公制边框
		setlinestyle(PS_SOLID, 3);
		setlinecolor(BLUE);
		line(minx,miny,minx,maxy);
		line(minx,miny,maxx,miny);
		line(maxx,miny,maxx,maxy);
		line(minx,maxy,maxx,maxy);
		//绘制小球
		setfillcolor(RGB(100,200,200));
		solidcircle(x,y,r);
		FlushBatchDraw();
		//碰到边界反弹
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
		//移动小球
		x = x + vx;
		y =y+ vy;
		//小球掉落
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