#include <iostream>
#include <chrono>
#include <iomanip>

using namespace std;

int main()
{
	struct tm newtime;
	std::cout << "Hello World" << std::endl ;
	auto timeNow = chrono::system_clock::now();
	auto tt = chrono::system_clock::to_time_t(timeNow);
	localtime_s(&newtime, &tt);
	cout << put_time(&newtime, "%Y %m %d %H,%M,%S") << std::endl;
	return 0;
}