#include <iostream>
#include "Core/Random.h"
#include "Core/FileIO.h"
#include "Core/Time.h"
#include "Core/Memorey.h"
#include "Renderer/Renderer.h"
using namespace std;

int main()
{	auto start = std::chrono::high_resolution_clock::now();

	
	afro::g_memoryTracker.DisplayInfo();
	int* p = new int;
	afro::g_memoryTracker.DisplayInfo();
	delete p;
	afro::g_memoryTracker.DisplayInfo();

	/*auto start = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 10000069; i++) {}
	auto end = std::chrono::high_resolution_clock::now();
	cout << std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();*/


	afro::Time timer;
	for(int i = 0; i < 10000069; i++) {}
	cout << timer.GetElapsedMilliseconds() << endl;



	/*cout << afro::getFilePath() << endl;
	afro::setFilePath("Assets");
	cout << afro::getFilePath() << endl;
	size_t size = 0;
	afro::getFileSize("game.txt", size);
	cout << "Size: " << size << endl;

	std::string s;
	afro::readFile("game.txt", s);
	cout << s << endl;


	afro::seed_random((unsigned int)time(nullptr));
	for (int i = 0; i < 10; i++)
	{
		cout << afro::random(10, 20) << endl;
	}*/


}