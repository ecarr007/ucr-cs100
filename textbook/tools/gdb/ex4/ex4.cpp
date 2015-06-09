#include <iostream>

using namespace std;

long factorial(int n);

int main()
{
	int n = 0;
	cout << "Enter number to take factorial of: ";
	cin >> n;
	long val = factorial(n);
    cout << val << endl;
    cin.get();
    return 0;
}

long factorial(int n)
{
	long result = 1;
	while(n>0)
    {
    	result *= n;
    	n--;
    }
}
