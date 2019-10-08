#include <list>
#include <iostream>
#include <set>

using namespace std;

class object
{
public:
	static void show_list(set<basic_string<char>>& set)
	{
		for (auto it = set.begin(); it != set.end(); ++it)
			cout << *it << '\n';
	}

	static int run(int choice)
	{
		static set<string> set_container;

		if (choice == 1)
		{
			string to_push;
			cout << "\nStudent to add: ";
			cin >> to_push;
			set_container.insert(to_push);
			cout << to_push << " - pushed to back\n";
			return main_menu();
		}
		if (choice == 2)
		{
			string student_name;
			cout << "\nStudent name to erase: ";
			cin >> student_name;
			set_container.erase(student_name);
			show_list(set_container);
			return main_menu();
		}
		if (choice == 3)
		{
			show_list(set_container);
			return main_menu();
		}
		if (choice == 4) { return 0; }

		return 0;
	}

	static int main_menu()
	{
		cout << "................................" << endl;
		cout << "What to do: " << endl;
		cout << "1 Push student to list\n"
			"2 Take off student from list\n"
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
	object::main_menu();
	return 0;
}
