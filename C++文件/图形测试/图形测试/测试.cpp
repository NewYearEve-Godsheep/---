#include <easyx.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	initgraph(640,480);
	circle (200,200,100);
	_getch();
	closegraph();
	return 0;
}