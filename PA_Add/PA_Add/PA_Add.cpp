// PA_Add.cpp: 主项目文件。

#include "stdafx.h"
//#include "regex.h"

using namespace System;


bool ParseInput(String ^input, String ^&a, String ^&b);
void calc(Char a, Char b, Char m, Char &T, Char &S);
int const BASE_VAL = 48;



int main(array<System::String ^> ^args)
{
	String ^inputData = Console::ReadLine();
	String ^a, ^b;
	if (ParseInput(inputData, a, b))
	{
		array<Char> ^aa = a->ToCharArray();
		array<Char> ^bb = b->ToCharArray();

		Char x='7', y='9',m='9',i,j;
		calc(x, y, m, i, j);
		Console::WriteLine(x + " + " + y + " = " +i+j );
	}
	else
	{		
		Console::WriteLine(L"输入有误。请确保输入格式如下：\na b\n并且限制如下：\n1 <= {a, b} < 10^16");
	}
	
	Console::ReadLine();
	return 0;
}

bool ParseInput(String ^input, String ^&a, String ^&b)
{
	a = "123";
	b = "234";
	return true;
}

void calc(Char a, Char b, Char m, Char &T,Char &S)
{	
	int x= a+b+m-3*BASE_VAL;
	int t = x / 10;
	int s = x % 10;
	T = t + BASE_VAL;
	S = s + BASE_VAL;
}