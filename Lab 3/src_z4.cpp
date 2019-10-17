#include<iostream>
#include<map>
#include<Windows.h>

using namespace std;

template<class C>class object {
public:
	template<typename T>
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
	template<typename T> T run(T choice)
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
			return main_menu<int>();
		}
		if (choice == 2)
		{
			string student_name;
			cout << "\nPolish word to erase pair form dictionary: ";
			cin >> student_name;
			map_of_words.erase(student_name);
			show_list<int>(map_of_words);
			return main_menu<int>();
		}
		if (choice == 3)
		{
			show_list<int>(map_of_words);
			return main_menu<int>();
		}
		if (choice == 4) { return 0; }

		return 0;
	}
	
	template<typename T> T main_menu()
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
		if ((choice > 4) || (choice < 1)) { return main_menu<int>(); }
		run(choice);
		return 0;
	}
};

int main()
{
	object<string> obj;
	obj.main_menu<int>();
	return 0;
}