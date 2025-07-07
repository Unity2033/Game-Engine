#include <iostream>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int main()
{
#pragma region 연관 컨테이너

#pragma region unordered set

	//	std::unordered_set<const char*> unordered_set;
	//	
	//	unordered_set.max_load_factor(2.0f);
	//	
	//	unordered_set.insert("Alistar");
	//	unordered_set.insert("Janna");
	//	unordered_set.insert("Jinx");
	//	unordered_set.insert("Bard");
	//	unordered_set.insert("Rumble");	
	//	unordered_set.insert("Lucian");
	//	unordered_set.insert("Jhin");
	//	unordered_set.insert("Soraka");
	//	unordered_set.insert("Shen");
	//	
	//	unordered_set.insert("Jinx");
	//	
	//	cout << "Load Factor : " << unordered_set.load_factor() << endl;
	//	cout << "Bucket Count : " << unordered_set.bucket_count() << endl;
	//	
	//	if (unordered_set.find("Shen") != unordered_set.end())
	//	{
	//		cout << "Found it" << endl;
	//	}
	//	else
	//	{
	//		cout << "Not Key Found..." << endl;
	//	}
	//	
	//	unordered_set.erase("Rumble");
	//	
	//	for (const char * element : unordered_set)
	//	{
	//		cout << element << endl;
	//	}

#pragma endregion

#pragma region unordered map

	//	std::unordered_map<const char*, int> unordered_map;
	//	
	//	unordered_map.insert({"Sterak's Gage", 3100});
	//	unordered_map.insert({ "Trinity Force", 3333 });
	//	unordered_map.insert({ "Gargoyle Stonepalte", 3300 });
	//	unordered_map.insert({ "Zhonya's Hourglass", 2900 });
	//	
	//	unordered_map.insert({ "Sterak's Gage", 3100 });
	//	
	//	unordered_map.erase("Trinity Force");
	//	
	//	cout << "unordered_map size : " << unordered_map.size() << endl;
	//	
	//	for (const auto& element : unordered_map)
	//	{
	//		cout << "Key : " << element.first << endl;
	//		cout << "Value : " << element.second << endl;
	//	}
	//	
	//	unordered_map.clear();
	//	
	//	cout << "Load Factor : " << unordered_map.load_factor() << endl;

#pragma endregion

#pragma region set

	// std::set<int> set;
	// 
	// set.insert(55);
	// set.insert(34);
	// set.insert(10);	
	// set.insert(61);
	// 
	// set.insert(10);
	// 
	// cout << "set empty : " << set.empty() << endl;
	// cout << "set max size : " << set.max_size() << endl;
	// 
	// for (const int & element : set)
	// {
	// 	cout << element << endl;
	// }

#pragma endregion

#pragma region map

	// std::map<const char*, float> map;
	// 
	// map.insert({"South Korea", 36.5f});
	// map.insert({ "Brazil", 38.2f });
	// map.insert({ "Italy", 37.1f });
	// map.insert({ "Germany", 36.8f });
	// 
	// for (const auto & element : map)
	// {
	// 	  cout << "Key : " << element.first << endl;
	// 	  cout << "Value : " << element.second << endl;
	// }
	//
	// map.clear();
	// 
	// cout << "map size : " << map.size() << endl;
#pragma endregion

#pragma endregion

	return 0;
}
