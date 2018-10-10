#include <iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream file;
    file.open("babynames.txt" , ios::in);
    int rankP;
    string name , pick1 , pick2;
    bool check1=false , check2=false;
    cin >> name;
    while(!file.eof() && !file.fail()){
        file >> rankP;
        file >> pick1 >> pick2;
        if((pick1==name)){
                cout << name << " is ranked " << rankP << " in popularity among boys" <<endl;
                check1=true;
        }
        if((pick2==name)){
                cout << name << " is ranked " << rankP << " in popularity among girls" <<endl;
                check2=true;
        }
    }
    if(!check1) cout << name << " is not ranked among the top 1000 boy names" << endl;
    if(!check2) cout << name << " is not ranked among the top 1000 girl names" << endl;

    return 0;
}
