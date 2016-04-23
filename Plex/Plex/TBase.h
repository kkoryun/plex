#pragma once
#include <string>
using namespace std;
using namespace System;
using namespace System::Drawing;
 class TBase
{
public:
	enum figure
	{
		point = 0,
		line = 1,
		rectangle = 2,
		arc = 3,
		autofigure = 4,
	};
#pragma region constructor
	TBase(string _name = "", Color _col ) {
		name = _name;
		col = _col;
		ocr = tol * 3;
		reit = 1;
	}
#pragma endregion

	
	virtual void Draw(Graphics ^ g) = 0;
	virtual void Move() = 0;
#pragma region get_set
	figure getTF() { return tfigure; }
	string getString() { return name; }
	Color getColor() { return col; }
	void setColor(Color c) { col = c; }
	bool getVisible() { return vis; }
	void setVisible() { !vis; }
	int getTol() { return tol; }
	void setTol(int t) {
		tol = t;
		ocr = 3 * t;
	}
	int getReit() { return reit };
	virtual void setReit() = 0;
#pragma endregion

	


protected:
	figure tfigure;
	string name;
	Color col;
	bool vis;
	int ocr;
	int tol;//толщина
	int reit;//направление




};

