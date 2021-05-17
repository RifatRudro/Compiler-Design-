#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char str[] = "My Name Is Rifat Al Mamun Rudro";
	char* p;
	p= strtok_r(str, "-");
	while (p!= NULL) {
		cout <<p<< endl;
		p= strtok(NULL, " ");
	}
	return 0;
}
