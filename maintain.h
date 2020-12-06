#include<bits/stdc++.h>
#include "player.h"
using namespace std;

class Maintain {
    vector<Player> all_players;
    int total_point;



public:
    int input(string s) {
        string c;
        cout << s;
        cin >> c;
        if (c == "admin") return -500;
        return stoi(c);
    }
    void C() {
        system("cls");
    }
    void get_players() {
        cout << "How many players : ";
        int t;  cin >> t;
        for(long i = 0 ; i < t ; i++) {
            cout << "No " << i+1 << " player name : ";
            string tmp;    cin >> tmp;
            all_players.push_back(Player());
            all_players[i].set_name(tmp);
            all_players[i].set_no(i+1);
        }
        total_point = all_players.size() * 5;
    }

    void show_all_players_details() {
        cout << ". . . . C U R R E N T  D E T A I L S . . . .\n\n\n";
        for(int i = 0 ; i < all_players.size() ; i++) {
            all_players[i].show_details();
        }
        cout << "\n\n. . . . A D D  P O I N T . . . .\n\n\n";
    }
    void add_point() {
        start:
        C();
        show_all_players_details();
        vector<int> normal_players_index;
        vector<bool> normal_players_status;
        long player_who_understood_no;
        bool player_who_understood_status;
        long player_who_hold;
        player_who_hold = input("Holder NO : ");
        if(player_who_hold == -500) {
            admin();
            goto start;
        }

        player_who_understood_no = input("No and status who understand : ");
        cin >> player_who_understood_status;
        for(int i = 0 ; i < all_players.size() ; i++) {
            if(i+1 == player_who_understood_no) continue;
            else if (i+1 == player_who_hold) continue;
            normal_players_index.push_back(i);
        }
        for(int i = 0 ; i < normal_players_index.size() ; i++) {

            string tmp = all_players[normal_players_index[i]].get_name();
            cout << tmp << " status : ";
            bool tmp2;  cin >> tmp2;
            normal_players_status.push_back(tmp2);
        }

        if(player_who_understood_status) {
            all_players[player_who_understood_no-1].add_point(10);
            all_players[player_who_understood_no-1].add_to_history(10);
        }
        else {
            all_players[player_who_understood_no-1].add_point(-10);
            all_players[player_who_understood_no-1].add_to_history(-10);
        }

        int normal_people_right_guess_count = 0;

        for(int i = 0 ; i < normal_players_status.size() ; i++) {
            if(normal_players_status[i]) {
                normal_people_right_guess_count++;
                all_players[normal_players_index[i]].add_point(5);
                all_players[normal_players_index[i]].add_to_history(5);
            }
            else {
                all_players[normal_players_index[i]].add_point(-5);
                all_players[normal_players_index[i]].add_to_history(-5);
            }
        }
        all_players[player_who_hold-1].add_point(total_point-(normal_people_right_guess_count*5));
        all_players[player_who_hold-1].add_to_history(total_point-(normal_people_right_guess_count*5));

    }

    void admin() {
        C();
        string menu = "1. Edit Point\n2. History\n3. Exit\n\n>> ";
        while(true) {
            C();
            int choice;
            cout << menu;
            cin >> choice;
            if(choice == 1) {
                while(true){
                    C();
                    for(int i = 0 ; i < all_players.size() ; i++) {
                        all_players[i].show_details();
                    }
                    cout << "No and New value (-1 to exit): ";
                    int tmp1 , tmp2;
                    cin >> tmp1;
                    if (tmp1 == -1 ) break;
                    else cin >> tmp2;
                    all_players[tmp1-1].add_point(tmp2);
                    cout << "Done..";
                }
            }
            else if (choice == 2) {
                    C();
                    cout << ". . . . H I S T O R Y . . . .\n\n\n";
                for(int i = 0 ; i < all_players.size() ; i++) {
                    all_players[i].show_history();
                }
                cin.ignore();
                cin.get();
            }
            else break;
        }
    }
};
