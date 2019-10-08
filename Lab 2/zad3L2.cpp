#include <iostream>
#include <map>

using namespace std;

class object
{
public:
	static void show_list(map<string, string> dict)
	{
		cout << "................................" << endl;
		cout << "\nThe map dictionary is : \n";
		cout << "\tKEY\tELEMENT\n";
		for (auto itr = dict.begin(); itr != dict.end(); ++itr)
		{
			cout << '\t' << itr->first
				<< '\t' << itr->second << '\n';
		}
		cout << "................................" << endl;
	}

	static int run(int choice)
	{
		static map<string, string> map_of_words;
		map_of_words.insert(pair<string, string>("Krowa", "Cow"));

		if (choice == 1)
		{
			string po_polsku;
			string in_english;
			cout << "\nPolish word to add: ";
			cin >> po_polsku;
			cout << "\nEnglish word to add: ";
			cin >> in_english;
			map_of_words.insert(pair<string, string>(po_polsku, in_english));
			cout << po_polsku << " & " << in_english << " - pushed to map\n";
			return main_menu();
		}
		if (choice == 2)
		{
			string student_name;
			cout << "\nPolish word to erase pair form dictionary: ";
			cin >> student_name;
			map_of_words.erase(student_name);
			show_list(map_of_words);
			return main_menu();
		}
		if (choice == 3)
		{
			show_list(map_of_words);
			return main_menu();
		}
		if (choice == 4) { return 0; }

		return 0;
	}

	static int main_menu()
	{
		cout << "................................" << endl;
		cout << "What to do: " << endl;
		cout << "1 Add word to dictionary \n"
			"2 Delete from dictionary\n"
			"3 Show map\n"
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
