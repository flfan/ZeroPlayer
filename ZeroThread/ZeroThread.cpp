#include<thread>
#include "ZeroThread.h"

int ZeroThread::Start()
{
	std::thread t(&ZeroThread::run, this);
	t.detach();
	
	return 0;
}