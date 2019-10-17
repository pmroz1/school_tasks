#include<iostream>
#include<list>
#include<Windows.h>

using namespace std;

template<class C>class object {
public:
	template<typename T>
	static void show_list (list<T>g)
	{
		cout << "------------------------------------" << endl;
		for (auto it = g.begin(); it != g.end(); ++it)
			cout << '\t' << *it;
		cout << '\n';
		cout << endl << "------------------------------------" << endl;
	}
	template<typename T>
	static void add(list<T>& g, T x)
	{
		g.push_back(x);
		cout << endl << x << " inserted to list" << endl;
	}
	template<typename T>
	static void pop_f_stack(list<T>& g)
	{
		g.pop_back();
		show_list(g);
		cout << endl << " poped from list" << endl;
	}
};

int main()
{
	list<int>g;
	auto input = 6;
	auto insert = 0;

	while (input != 0)
	{
		system("cls");
		cout << "................................" << endl;
		cout << "What to do: " << endl;
		cout << "1 Push element to list\n"
			"2 show stack\n"
			"3 pop from stack\n"
			"0 Quit\n"
			"Choice: ";
		cin >> input;
		if (input == 1) {
			cout << "\nInsert value to push: ";
			cin >> insert;
			object<int>::add(g, insert);
			system("Pause");
		}
		if (input == 2) {
			system("cls");
			object<int>::show_list(g);
			system("Pause");
		}
		if (input == 3) {
			system("cls");
			if (!g.empty()) {
				object<int>::pop_f_stack(g);
			}
			system("Pause");
		}
	}

	return 0;
}