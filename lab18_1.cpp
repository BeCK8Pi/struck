#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect a, Rect b){

	double x1,x2,y1,y2;

	if(a.x>b.x) x1 = a.x;
	else x1 = b.x;
	if(a.y<b.y) y1 = a.y;
	else y1 = b.y;
	if(a.x+a.w<b.x+b.w) x2 = a.x+a.w;
	else x2 = b.x+b.w;
	if(a.y-a.h>b.y-b.h) y2 = a.y-a.h;
	else y2 = b.y-b.h;

	if(x2>x1 && y1>y2) return (x2-x1)*(y1-y2);

	return 0;
	
}