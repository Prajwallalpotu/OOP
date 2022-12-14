/*Write a program in C++ to use map associative container. The keys will be the
names of states and the values will be the populations of the states. When the
program runs, the user is prompted to type the name of a state. The program then
looks in the map, using the state name as an index and returns the population of the
state*/

#include<iostream>
#include<string>
#include<map>
#include<utility>

using namespace std;

int main()
{
    typedef map<string,int> mapType;
    mapType PopulationMap;
    PopulationMap.insert(make_pair("Maharashtra",122));
    PopulationMap.insert(make_pair("Rajasthan",44));
    PopulationMap.insert(make_pair("UP",144));
    PopulationMap.insert(make_pair("Punjab",24));
    mapType::iterator iter=--PopulationMap.end();
    PopulationMap.erase(iter);
    cout<<"size of population map :"<<PopulationMap.size()<<endl;
    for(iter = PopulationMap.begin();iter!=PopulationMap.end();++iter)
    {
        cout<<iter->first<<":"<<iter->second<<"million \n";
    }
    string state("Maharashtra");
    iter=PopulationMap.find(state);
    if(iter != PopulationMap.end())
    {
        cout<<iter->first<<"'s population is :"<<iter->second<<"  million\n";
    }
    else{
        cout<<"key is not in PopulationMap!!"<<endl;
    }
    PopulationMap.clear();
    return 0;
}

// int main()
// {
//     typedef map<string,int> maptype;
//     maptype PopulationMap;
//     PopulationMap.insert(make_pair("Maharashtra",122));
//     PopulationMap.insert(make_pair("Jumbo and Kashmir",122));
//     PopulationMap.insert(make_pair("Karnataka",122));
//     PopulationMap.insert(make_pair("Punjab",122));
//     PopulationMap.insert(make_pair("UP",122));
//     maptype :: iterator iter=--PopulationMap.end();
//     PopulationMap.erase(iter);
//     cout<<"size of population map :"<<PopulationMap.size()<<endl;

//     for (iter=PopulationMap.begin();iter != PopulationMap.end();iter++)
//     {
//         cout<<iter -> first<<" : "<<iter -> second <<" millions ."<<endl;
//     }
//     PopulationMap.clear();
//     return 0;
// }