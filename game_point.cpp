#include <bits/stdc++.h>

using namespace std;
struct Player
{
    string name;
    int point = 0;
};
int addPoint()
{
    string a;
x:
    cin >> a;
    if(a == "admin")
        return -500;
    for(int i = 0; i < a.size() ; i++)
    {
        if(a[i] == '-' or a[i] == '+')
            continue;
        else if(a[i] > '9' or a[i] < '0')
            goto x;
    }
    return stoi(a);
}

int single_input() {

	string s;
x:
	cin >> s;
	if(s[0]>'9' or s[0]<'0') goto x;
	return stoi(s);
}
void C()
{
    system("clear");
    //system("cls");
}
int main()
{
	C();
    int c;
    cout << "How many player : ";
    c = single_input();
    Player p[c];
    for(int i = 0 ; i < c ; i++)
    {
        cout << "player " << i+1 << " name : ";
        cin >> p[i].name;
    }
    while(true)
    {
first:
        C();
        cout << "\t\tC U R R E N T  P O I N T\n\n";
        for(int i = 0 ; i < c ; i++)
        {
            cout << p[i].name << "\t: " << p[i].point << "\n\n";
        }
        cout << "\n\n............Add Point..........\n\n>> ";
        for(int i = 0 ; i < c ; i++)
        {
            int temp =  addPoint();
            if(temp == -500)
            {
start:
                C();
                //cout << "admin panel";
                //system("PAUSE");
                cout << "1. Edit point\n2. End season\n3. Exit from admin\n>> ";
                int choice = single_input();
                if(choice == 2)
                {
                    C();
		    cout << "F I N A L  R E S U L T\n\n";
                    for(int i = 0 ; i < c ; i++)
                    {
                        cout << p[i].name << "\t: " << p[i].point << "\n";
                    }
                    return 0;
                }
                if(choice == 1)
                {
                    C();
                    for(int i = 0 ; i < c ; i++)
                    {
                        int temp;
                        cout << p[i].name << " (" << p[i].point << ")  : ";
                        temp = addPoint();
                        p[i].point += temp;
                    }
                }
                if (choice == 3)
                    goto first;
                else
                    goto start;
            }
            else
                p[i].point += temp;
        }
    }
}
