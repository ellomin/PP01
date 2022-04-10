#pragma once
#include <chrono>
#include <thread>
#include "MConsolUtil.hpp"
#include <string>

using namespace std;

namespace MuSeoun_Engine
{
	class MGameLoop
	{
	private:
		bool _isGameRunning;
		MConsoleRenderer cRenderer;

	public:
		MGameLoop()
		{
			_isGameRunning = false;
		}
		~MGameLoop()
		{
		}

		void Run()
		{
			_isGameRunning = true;

			Initialize();

			while (_isGameRunning)
			{
				Input();
				Update();
				Render();
			}

			Release();
		}

		void Stop()
		{
			_isGameRunning = false;
		}


	private:

		void Initialize()
		{
			
		}
		void Release()
		{
	
		}

		void Input()
		{
			
		}
		void Update()
		{

		}
		void Render()
		{
			chrono::system_clock::time_point startRenderTimePoint = chrono::system_clock::now();

			cRenderer.Clear();
			cRenderer.MoveCursor(10, 20);
			cRenderer.DrawString("test");

			chrono::duration<double> renderDuration = chrono::system_clock::now() - startRenderTimePoint;


			string fps = "FPS(milliseconds): " + to_string(renderDuration.count());
			cRenderer.DrawString(fps);
		}
	};
}
