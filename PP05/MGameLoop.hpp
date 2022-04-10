#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include <Windows.h>

using namespace std;

namespace MuSeoun_Engine
{
	void MoveCursor(short x, short y)
	{
		COORD positon = { x , y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), positon);
	}
	void SetCursorState(bool visible)
	{
		CONSOLE_CURSOR_INFO consolCursorInfo;
		consolCursorInfo.bVisible = visible;
		consolCursorInfo.dwSize = 1;
		SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &consolCursorInfo);
	}
}
