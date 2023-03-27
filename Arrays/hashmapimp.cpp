#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_map<string, int> menu;
    // insertion in hashmap
    menu["maggi"] = 15;
    menu["pizza"] = 50;
    menu["dosa"] = 35;
    menu["idli"] = 50;
    // deletion in hashmap
    menu.erase("maggi");

    // search in hashmap
    string item;
    cin >> item;
    if (menu.count(item))
    {
        cout << item << " is available at Rs." << menu[item];
    }
    else
    {
        cout << item << " is not available";
    }
    for (auto it : menu)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
