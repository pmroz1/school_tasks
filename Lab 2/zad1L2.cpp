#include <list>
#include <iostream>

using namespace  std;

class object
{
public:
	static void show_list(list <int> g)
	{
		for (auto it = g.begin(); it != g.end(); ++it)
			cout << '\t' << *it;
		cout << '\n';
	}
	
	static int run(int choice)
	{
		static list<int>list_container;
		if(choice==1)
		{
			int to_push;
			cout << "\nValue to push: ";
			cin >> to_push;
			list_container.push_back(to_push);
			cout << to_push << " - pushed to back\n";
			return main_menu();
		}
		if (choice == 2)
		{
			list_container.pop_back();
			show_list(list_container);
			return main_menu();
		}
		if (choice == 3)
		{
			show_list(list_container);
			return main_menu();
		}
		if (choice == 4) { return 0; }

		return 0;
	}
	
	static int main_menu()
	{
		cout << "................................" << endl;
		cout << "What to do: " << endl;
		cout << "1 Push element to list\n"
			"2 Take off from list\n"
			"3 Show list\n"
			"4 Quit\n"
			"Choice: ";
		int choice;
		cin >> choice;
		if ((choice > 4) || (choice < 1)) { return main_menu(); }
		run(choice);
		return 0;
	}
};


int main()
{
	object obj;
	obj.main_menu();
	return 0;
}
piot
