#pragma once
#include <iostream>
#include <Windows.h>

using namespace std;

namespace MuSeoun_Engine
{
	class MConsoleRenderer
	{
	public:
		MConsoleRenderer() 
		{
			SetCursorState(false);
		}
		~MConsoleRenderer() {}

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

		void DrawString(string s)
		{
			cout << s;
		}

		void Clear()
		{
			system("cls");
		}
	};
	
}
