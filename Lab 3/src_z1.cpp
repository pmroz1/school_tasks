//#include <thread>
#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;

template <class T> class run {
public:
	template< typename T > void get(T a[], T n)
	{
		
		std::cout << "enter " << n << " array elements: "<<endl;
		for (int i = 0; i < n; ++i) std::cin >> a[i];
	}
	
	template< typename T > void insertion_sort(T a[], T n)
	{
		int  j;

		for (int i = 1; i < n; i++)
		{
			T temp = a[i];

			for (j = i - 1; j >= 0 && a[j] > temp; j--)
				a[j + 1] = a[j];

			a[j + 1] = temp;
		}
	}
	template< typename T > void b_sort(T a[], T n)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				if (a[j] < a[i])
				{
					T temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
	}
	template< typename T > void display(const T a[], T n)
	{
		std::cout << "the sorted array: ";
		for (int i = 0; i < n; ++i) std::cout << a[i] << ' ';
		std::cout << '\n';
	}
///////////////////////////////////////////////////////////////////////////////////////
	template< typename T > void q_sort(T n)
	{
		constexpr auto N = 5;
		//float array[10] = { 0 };
		T array2[5] = { 0 };
		cout << "\n------------------Quick sort-----------------" << endl;
		get(array2, n);
		vector<int>my_vector(array2, array2 + 5);
		sort(my_vector.begin(), my_vector.begin() + 4);
		display(array2, n);
		cout << "\n---------------------------------------------" << endl;
	}
//////////////////////////////////////////////////////////////////////////////////////
	template< typename T > void bubble_sort(T n)
	{
		//float array[10] = { 0 };
		T array[5] = { 0 };
		cout << "\n-----------------Bubble sort----------------" << endl;
		/*auto t1 = run.thread_get(array, N);
		t1.join();*/
		get(array, n);
		b_sort(array, n);
		display(array, n);
		cout << "\n---------------------------------------------" << endl;
	}
////////////////////////////////////////////////////////////////////////////////////////
	template< typename T > void insertion_sort(T n)
	{
		T array[5] = { 0 };
		cout << "\n---------------Insertion sort------------------" << endl;
		/*auto t1 = run.thread_get(array, N);
		t1.join();*/
		get(array, n);
		insertion_sort(array, n);
		display(array, n);
		cout << "\n---------------------------------------------" << endl;
		
	}
	////////////////////////////////////////////////
	///            Threads
	///////////////////////////////////////////////
	/*std::thread thread_get(T a[], int n) {
	return std::thread([=] { get(a, n); });}*/
	
};

int main()
{
	constexpr double n = 5;
	run<int> run;
	run.bubble_sort(n);
	run.q_sort(n);
	run.insertion_sort(n);
	return 0;
}