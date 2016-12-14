#include <iostream>

int main(int argc, char const *argv[])
{
	int a[10] = {10,26,80,90,61,47,2,8,3,0};
	for (int i = 0; i < 10; i++)
	{
		std::cout<<a[i]<<", ";
	}
	std::cout<<""<<std::endl;
	for (int i = 1; i < 10; i++)
	{
		int tmp = a[i];
		int j = i-1;
		while (j > -1 && a[j] > tmp){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = tmp;
	}
	for (int i = 0; i < 10; i++)
	{
		std::cout<<a[i]<<", ";
	}
	std::cout<<""<<std::endl;
	return 0;
}