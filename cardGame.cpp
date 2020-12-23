#include<bits/stdc++.h>
using namespace std;

#define db(x) cout << x << endl;

pair<int,char> cards[52] = {{2,'S'},{3,'S'},{4,'S'},{5,'S'},{6,'S'},{7,'S'},{8,'S'},{9,'S'},{10,'S'},{11,'S'},{12,'S'},{13,'S'},{14,'S'},
                            {2,'C'},{3,'C'},{4,'C'},{5,'C'},{6,'C'},{7,'C'},{8,'C'},{9,'C'},{10,'C'},{11,'C'},{12,'C'},{13,'C'},{14,'C'},
                            {2,'L'},{3,'L'},{4,'L'},{5,'L'},{6,'L'},{7,'L'},{8,'L'},{9,'L'},{10,'L'},{11,'L'},{12,'L'},{13,'L'},{14,'L'},
                            {2,'D'},{3,'D'},{4,'D'},{5,'D'},{6,'D'},{7,'D'},{8,'D'},{9,'D'},{10,'D'},{11,'D'},{12,'D'},{13,'D'},{14,'D'}};

class Players {
    string name;
    long point;
    public:
    vector <int> spades;
    vector <int> diamond;
    vector <int> heart;
    vector <int> cherry;

    Players();
    long getPoint();
    void showCards() ;
    void sizes();
};

Players players[4];

class CardManagement {
public:
    int voidIndex();
    void putCardInDeck(int n);
    void distribute();
};


CardManagement manager;
int winner = 0;
bool isFirst = 1;
char turnCard = 'N';

pair<int,char> botPlay(int botc);

void showMenu(int card , char cn , int n);
void playRound();

//          main function

int main() {

    manager.distribute();
//    for(int i(0) ; i < 4 ; i++) {
//        cout << "player : " << i+1 << endl;
//        players[i].sizes();
//        players[i].showCards();
//        cout << "\n\n";
//    }
//
    playRound();

}

//functions

Players::Players() {
    point = 0;
}
long Players::getPoint(){
    return point;
}

void Players::showCards(){
    for(int i = 0 ; i < spades.size() ; i++) cout << spades[i] << " of Spades\n";
    for(int i = 0 ; i < heart.size() ; i++) cout << heart[i] << " of heart\n";
    for(int i = 0 ; i < diamond.size() ; i++) cout << diamond[i] << " of diamond\n";
    for(int i = 0 ; i < cherry.size() ; i++) cout << cherry[i] << " of cherry\n";

}

void Players::sizes() {
    printf("%d %d %d %d\n", spades.size(),heart.size(),diamond.size(),cherry.size());
}
void playRound(){
    pair<int ,char> temp;
    int turnLimit = 1;
    while(turnLimit <= 13){
        for(int i = 0 ;i < 4 ;i++ ) {
            //players[i].sizes();
            temp = botPlay(i);
            showMenu(temp.first,temp.second,i+1);
        }
        isFirst = 1;
        turnCard = 'N';
        system("PAUSE");
        system("CLS");
        turnLimit++;
    }
}
void showMenu(int card , char cn , int n) {

    printf("Bot %d :\t%d of %c\n\n",n,card,cn);
    //system("PAUSE");
}
pair<int,char> botPlay(int botc) {
    bool ms = 1;
    if(isFirst){
        //db("isFirst started");
        if(players[botc].spades.size() != 0){
            pair<int,char>temp;
            isFirst = 0;
            turnCard = 'S';
            int random = rand()%players[botc].spades.size();
            temp =  {players[botc].spades[random],'S'};
            players[botc].spades.erase(players[botc].spades.begin()+random,players[botc].spades.begin()+random + 1);
            return temp;
        }
        if(players[botc].diamond.size() != 0){
            pair<int,char>temp;
            isFirst = 0;
            turnCard = 'D';
            int random = rand()%players[botc].diamond.size();
            temp =  {players[botc].diamond[random],'D'};
            players[botc].diamond.erase(players[botc].diamond.begin()+random,players[botc].diamond.begin()+random + 1);
            return temp;
        }
        if(players[botc].heart.size() != 0){
            pair<int,char>temp;
            isFirst = 0;
            turnCard = 'L';
            int random = rand()%players[botc].heart.size();
            temp =  {players[botc].heart[random],'L'};
            players[botc].heart.erase(players[botc].heart.begin()+random,players[botc].heart.begin()+random + 1);
            return temp;
        }
        if(players[botc].cherry.size() != 0){
            pair<int,char>temp;
            isFirst = 0;
            turnCard = 'C';
            int random = rand()%players[botc].cherry.size();
            temp =  {players[botc].cherry[random],'C'};
            players[botc].cherry.erase(players[botc].cherry.begin()+random,players[botc].cherry.begin()+random + 1);
            return temp;
        }
    //db("isFirst finished");
    }

    else if(!isFirst) {
        //db("!isFirst started");
        if(turnCard == 'S' and players[botc].spades.size() == 0) {
            ms = 0;
        }
        else if(turnCard == 'S') {
            int random = rand()%players[botc].spades.size();
            pair<int,char> temp ;
            temp =   {players[botc].spades[random],'S'};
            players[botc].spades.erase(players[botc].spades.begin()+random,players[botc].spades.begin()+random + 1);
            return temp;

        }
        if(turnCard == 'D' and players[botc].diamond.size() == 0) {
            ms = 0;
        }
        else if (turnCard == 'D') {
            int random = rand()%players[botc].diamond.size();
            pair<int,char> temp ;
            temp =  {players[botc].diamond[random],'D'};
            players[botc].diamond.erase(players[botc].diamond.begin()+random,players[botc].diamond.begin()+random + 1);
            return temp;

        }
        if(turnCard == 'L' and players[botc].heart.size() == 0) {
            ms = 0;
        }
        else if(turnCard == 'L') {
            int random = rand()%players[botc].heart.size();
            pair<int,char> temp ;
            temp =  {players[botc].heart[random],'L'};
            players[botc].heart.erase(players[botc].heart.begin()+random,players[botc].heart.begin()+random + 1);
            return temp;

        }
        if(turnCard == 'C' and players[botc].cherry.size() == 0) {
            ms = 0;
        }
        else if(turnCard == 'C') {
            int random = rand()%players[botc].cherry.size();
            pair<int,char> temp ;
            temp =  {players[botc].cherry[random],'C'};
            players[botc].cherry.erase(players[botc].cherry.begin()+random,players[botc].cherry.begin()+random + 1);
            return temp;

        }
        //db("!isFirst finished");
    }
    if(!ms){
        //db("random access started");
        if(players[botc].spades.size() != 0) {
            int random = rand()%players[botc].spades.size();
            pair<int,char> temp ;
            temp =  {players[botc].spades[random],'S'};
            players[botc].spades.erase(players[botc].spades.begin()+random,players[botc].spades.begin()+random + 1);
            return temp;
        }
        if(players[botc].diamond.size() != 0) {
            int random = rand()%players[botc].diamond.size();
            pair<int,char> temp ;
            temp =  {players[botc].diamond[random],'D'};
            players[botc].diamond.erase(players[botc].diamond.begin()+random,players[botc].diamond.begin()+random + 1);
            return temp;
        }
        if(players[botc].heart.size() != 0) {
            int random = rand()%players[botc].heart.size();
            pair<int,char> temp ;
            temp =  {players[botc].heart[random],'L'};
            players[botc].heart.erase(players[botc].heart.begin()+random,players[botc].heart.begin()+random + 1);
            return temp;
        }
        if(players[botc].cherry.size() != 0) {
            int random = rand()%players[botc].cherry.size();
            pair<int,char> temp ;
            temp =  {players[botc].cherry[random],'C'};
            players[botc].cherry.erase(players[botc].cherry.begin()+random,players[botc].cherry.begin()+random + 1);
            return temp;
        }
        //db("random access finished");
    }

}

void CardManagement::putCardInDeck(int n) {
        int temp = voidIndex();
        //cout << cards[temp].first << " " << cards[temp].second << endl;
        if(cards[temp].second == 'S') players[n].spades.push_back(cards[temp].first);
        else if(cards[temp].second == 'D') players[n].diamond.push_back(cards[temp].first);
        else if(cards[temp].second == 'L') players[n].heart.push_back(cards[temp].first);
        else if(cards[temp].second == 'C') players[n].cherry.push_back(cards[temp].first);
        else cout << "not matched\n";
        cards[temp].second = 'N';
    }
void CardManagement:: distribute() {
        for(int i = 0 ; i < 13 ;i++ ) {
            putCardInDeck(0);
            putCardInDeck(1);
            putCardInDeck(2);
            putCardInDeck(3);
        }
    }
int CardManagement::voidIndex(){
    srand(time(0));
    int ret;
    do {
        ret = rand() % 52;
    }while(cards[ret].second == 'N');
    //cout << ret << " ";
    return ret;
}
