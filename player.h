#include<bits/stdc++.h>
using namespace std;
class Player {
    string name;
    long point;
    long no;
    vector<int>history;
    long stand;
public:
    Player() {
        point = 0;
        stand = 0;
    }
    void set_name(string _name) {
        name = _name;
    }
    void set_no(long _no) {
        no = _no;
    }
    string get_name() {
        return name;
    }
    long get_point(){
        return point;
    }
    long get_no(){
        return no;
    }
    void show_details() {
        int space = 20;
        space -= name.size();
        cout << no << ". " << name ;
        while(space--) cout<<" ";
        cout << point << endl;
    }
    void add_point (int _point) {
        point += _point;
    }
    void add_to_history(int p) {
        history.push_back(p);
    }
    void show_history() {
        cout << name << "'s History : \n";
        for (int i = 0; i < history.size() ; i++) {
            cout << history[i] << endl;
        }
    }

};
