#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include<algorithm>
#include<random>
using namespace std;

class Maezawa {
private:
    string No;
public:
  
    void setNo(const string & newNo) { No = newNo; }
    string getNo() { return No; }
    vector<int>v;

};

int main()
{
    ofstream outfile("Number.txt", ios_base::out);
    vector<int> v;
    random_device engine;
    uniform_int_distribution<unsigned> dist1(1, 10000000);
    for (int i = 0; i < 10; ++i) 
        v.push_back(dist1(engine));
        sort(v.begin(), v.end());
        for (auto n : v) 
            outfile << n << endl;
        
         cout << endl;
         ifstream datafile("Number.txt");
         string n;
         Maezawa num[10];
         int i = 0;
         while (datafile >> n) {
             num[i].setNo(n);
             cout << "当選者" <<num[i].getNo() << "番" << endl;
             i++;
         }
}


