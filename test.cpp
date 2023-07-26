#include <iostream>

using namespace std;

void fibonacci(int n, int* count_zero, int* count_one)
{
	if (n == 0)
	{
		(*count_zero)++;
	}
	else if (n == 1)
	{
		(*count_one)++;
	}
	else
	{
		fibonacci(n - 1, count_zero, count_one);
		fibonacci(n - 2, count_zero, count_one);
	}
}

int main()
{
	int test_case = 0;
	cin >> test_case;

	int* insert = new int[test_case]; //값 입력
	int* count_zero = new int[test_case]; //결과 저장 0
	int* count_one = new int[test_case]; //결과 저장 1

	for (int i = 0; i < test_case; i++)
	{
		insert[i] = 0;
		count_zero[i] = 0;
		count_one[i] = 0;
	}

	int i = 0;
	while (i < test_case)
	{
		cin >> insert[i];

		fibonacci(insert[i], &count_zero[i], &count_one[i]);
		i++;
	}

	cout << endl;

	for (int i = 0; i < test_case; i++)
	{
		cout << count_zero[i] << " " << count_one[i] << endl;
	}

	return 0;
}