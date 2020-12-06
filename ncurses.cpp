#include<ncurses.h>
using namespace std;
int main(int argc , char ** argv) { 
	initscr();
	refresh();
	getch();
	endwin();
}
