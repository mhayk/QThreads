#include <iostream>
#include <thread>

void hello()
{
	std::cout << "Hello World!" << std::endl;
}

int main(void)
{
	std::thread t1(hello);
	std::thread t2(hello);
	std::thread t3(hello);
	std::thread t4(hello);

	t1.join();
	t2.join();
	t3.join();
	t4.join();

	system("pause");
	return 0;
}