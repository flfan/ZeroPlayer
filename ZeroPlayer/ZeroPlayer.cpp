#include<thread>
#include<chrono>
#include"ZeroThread/ZeroThread.h"

class MyMMThread : public ZeroThread
{
private:
	int a = 0;
public:
	MyMMThread(int _a)
	{
		a = _a;
	}

	virtual void run()
	{
		printf("MyMMThread %d\n", a);
	}
};

int main()
{
	MyMMThread t(10);
	t.Start();
	int bar = 23;
	MyMMThread* d = new MyMMThread(bar);

	std::this_thread::sleep_for(std::chrono::seconds(2));

	return 0;
}