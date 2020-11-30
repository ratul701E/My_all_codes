#include<bits/stdc++.h>
#include "maintain.h"
using namespace std;

void C() {
    system("cls");
}

int main() {
    Maintain all;
    all.get_players();
    while(true) {
        C();
        all.add_point();
    }
}
