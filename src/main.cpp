#include <iostream>
#include <ncurses.h>
#include <string>

int main(){
    initscr();
    noecho();
    raw();
    start_color();
    curs_set(0);
    init_pair(1, COLOR_RED, COLOR_BLACK);

    keypad(stdscr, TRUE);

    int row,col;
    getmaxyx(stdscr,row,col);
    char ch = 'b';
    attron(A_STANDOUT);
    attron(COLOR_PAIR(1));
    for(int y=0; y<row; y++){
        for(int x=0; x<col; x++){
            mvprintw(y,x,"%c",ch);
        }
    }
    attroff(COLOR_PAIR(1));
    mvaddch(0,0,ACS_STERLING);
    printw("DSADASD");
    getch();
    endwin();
    return 0;
}
