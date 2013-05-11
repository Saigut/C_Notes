#include <ncurses.h> // This include stdio.h

int main()
{
initscr(); // Initalise the ncurses library 
cbreak(); // option to disable buffering etc.
noecho(); // disable the echoing of keystrokes
printw("Enter Password: "); // print some text to the screen
refresh(); // update the screen, so the text is displayed
char pass[25]; // a place to store the text
getstr(pass); // get text until newline or carriage return
endwin(); // close ncurses library

printf("You entered: %s\n", pass); // print what the user typed to stdout

return 0;
}
