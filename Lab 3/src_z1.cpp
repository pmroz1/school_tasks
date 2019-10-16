#include <thread>
#include<iostream>

using namespace std;

template <class T> class run {
public:
	template< typename T > void get(T a[], int n)
	{
		
		std::cout << "enter " << n << " array elements: "<<endl;
		for (int i = 0; i < n; ++i) std::cin >> a[i];
	}

	template< typename T > void sort(T a[], int n)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				if (a[j] < a[i])
				{
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}

	template< typename T > void display(const T a[], int n)
	{
		std::cout << "the sorted array: ";
		for (int i = 0; i < n; ++i) std::cout << a[i] << ' ';
		std::cout << '\n';
	}

	
	////////////////////////////////////////////////
	///            Threads
	///////////////////////////////////////////////
	std::thread thread_get(T a[], int n) {
	return std::thread([=] { get(a, n); });}
	
};

int main()
{
	constexpr auto N = 10;
	//float array[10] = { 0 };
	int array[10] = { 0 };
	run<int> run;
	cout << "\n-----------------Bubble sort----------------" << endl;
		auto t1 = run.thread_get(array, N);
		t1.join();
		run.sort(array, N);
		run.display(array, N);	
	cout << "\n---------------------------------------------" << endl;
	return 0;
}