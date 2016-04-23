#pragma once
#include "TBase.h"
using namespace std;
using namespace System;
using namespace System::Drawing;

 class TPoint: public TBase
{
private: int x, y;
public:
	TPoint();
	TPoint(const TPoint & tmp) {
		name = tmp.name;
		tol = tmp.tol;
		vis = tmp.vis;
		col = tmp.col;
		reit = tmp.reit;
		ocr = tmp.ocr;
		x = tmp.x;
		y = tmp.y;
	};
	TPoint & operator= (TPoint & tmp) {
		name = tmp.name;
		tol = tmp.tol;
		vis = tmp.vis;
		col = tmp.col;
		reit = tmp.reit;
		ocr = tmp.ocr;
		x = tmp.x;
		y = tmp.y;
		return(*this);
	}
	int getX() { return x; }
	int getY() { return y; }
	void Move(int _x, int _y) {
		x = _x;
		y = _y;
	}
	void sdvig(int dx, int dy) {
		x += dx;
		y += dy;
	}
	void Draw(Graphics ^ g) {
		SolidBrush ^ b = gcnew SolidBrush(Color);
		g->FillElipse(b, x - ocr, y - ocr, 2 * ocr, 2 * ocr);
		//вывод надписи около точки
		delete b;
	}
	bool CheckPoint(int _x, int _y) {
		int d = (x - _x)*(x - _x) + (y - _y)*(y - _y);
		if (ocr*ocr >= d)
			return 1;
		else
			return 0;
	}
	void IncReit() {
		reit++;
	}
	string getName() {};
};

