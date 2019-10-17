#include<iostream>
#include<stack>
#include<Windows.h>

using namespace std;

template<class C>class object {
public:
	template<typename T>
	static void show_stack(stack<T>g)
	{
		cout << "------------------------------------" << endl;
		while(!g.empty())
		{
			cout << ' ' << g.top();
			g.pop();
		}
		cout << endl<<"------------------------------------" << endl;
	}
	template<typename T>
	static void add(stack<T>&g,T x)
	{
		g.push(x);
		cout<<endl<<x<< " pushed to stack" << endl;
	}
	template<typename T>
	static void pop_f_stack(stack<T>& g)
	{
		cout << ' ' << g.top();
		g.pop();
		cout << endl <<" poped from stack" << endl;
	}
};

int main()
{
	stack<int>g;
	auto input = 6;
	auto insert = 0;

	while(input!=0)
	{
		system("cls");
		cout << "................................" << endl;
		cout << "What to do: " << endl;
		cout << "1 Push element to stack\n"
			"2 show stack\n"
			"3 pop from stack\n"
			"0 Quit\n"
			"Choice: ";
		cin >> input;
		if(input==1){
			cout << "\nInsert value to push: ";
			cin >> insert;
			object<int>::add(g,insert);
			system("Pause");
		}
		if (input == 2) {
			system("cls");
			object<int>::show_stack(g);
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