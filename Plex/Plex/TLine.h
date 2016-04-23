#pragma once
#include"TBase.h"
#include "TPoint.h"
class TLine:public TBase
{
private:
	TBase * L;
	TBase * R;
public:
	TLine(TPoint *_L, TPoint *_R):TBase() {
		tfigure = line;
		name = _L->getName() + " " + _R->getName();
		L = (TBase*)_L;
		R = (TBase)_L;
	}
	TLine(const TLine & tmp);
	TLine & operator=(const TLine & tmp);
	void Draw(Graphics ^ g);
	bool LineCheck(int _x, int _y) {

	};
	TBase * getL();
	TBase * getR();
	void setL(TBase * _tmp);
	void setR(TBase * _tmp);
	void setreiting(int _reit);
	void TurnName();
};

