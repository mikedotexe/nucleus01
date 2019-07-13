#include <iostream>
#include <bitset>
#include <vector>
#include <string>

using namespace std;

int main()
{

    // vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};
    string name = "S1X0R!";
    
    // for (const string& word : msg)
    // {
    //     cout << word << " ";
    // }
    for (std::size_t i = 0; i < name.size(); ++i) {
      cout << "aloha --- " << name[i] << ": " << bitset<8>(name.c_str()[i]) << endl;
    }    

    cout << "aloha -------------------" << endl;

    auto result = std::bitset<8>(name[0]) ^ std::bitset<8>(name[1]);
    cout << "aloha --- " << result << endl;
}