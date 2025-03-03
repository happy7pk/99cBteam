#pragma once

#ifndef __STRUCT_H__

typedef struct tagInfo
{
	double fX = 0.f;
	double fY = 0.f;
	double fCX = 0.f;
	double fCY = 0.f;

	int HP;
	int MaxHp;
	int Exp;
	int MaxExp;
	int Lev;
	int Gage;
	int MaxGage;
}INFO;

struct VECTOR {
	THETA Angle;
	double Length;

public:
	VECTOR(){}
	VECTOR(THETA th, double len) //각도로 생성방법
	:Angle(th/180*PI),Length(len){}
};

#define __STRUCT_H__
#endif
