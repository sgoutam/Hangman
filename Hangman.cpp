#include <cstdlib>
#include <iostream>
#include <conio2.h>
#include <conio.h>
#include <vector>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[])
{
    int x, y, intro, lives=6, correct, placement=0, where=0, finish, i=0, picture, exit;
    char letter, guess, ending;
    vector<char> word;
    vector<char>::iterator output;
    for (intro=1; intro<8; intro++) {
        switch (intro) {
               case 1:
                    letter = 'H';
                    break;
               case 2:
                    letter = 'A';
                    break;
               case 3:
                    letter = 'N';
                    break;
               case 4:
                    letter = 'G';
                    break;
               case 5:
                    letter = 'M';
                    break;
               case 6:
                    letter = 'A';
                    break;
               case 7:
                    letter = 'N';
                    break;
                    }
        for (y=1;y<11;y++) {
            gotoxy(30+intro,y);
            cout << letter;
            Sleep(50);
            if (y<10)
            {
            cout << "\b\b" << "   ";
            }
            }
            }
            Sleep(2000);
            exit = 1;
            while (exit != 0) {
            word.clear();
            lives=6;
            placement=0;
            where=0;
            i=0;
            clrscr();
            cout << "Player 1: Enter your word, use only lowercase letters. " << endl;
            cout << "Press ENTER when your finished. " << endl;
            x=1;
            while (x != 0) {
                  letter=getch();
                  switch (letter) {
                         case '\r':
                              x=0;
                              break;
                         case '\b':
                              cout << "\b" << " " << "\b\b";
                              word.pop_back();
                              x=1;
                              break;
                         default:
                                 cout << "*";
                                 word.push_back(letter);
                                 x=1;
                                 break;
                                 }
                       }
            
            Sleep(2000);
            clrscr();
            gotoxy(7,21);
            for (x=0; x<word.size(); x++) {
                cout << "_____  ";
                }
                finish = word.size();
            while (lives != 0 && finish != 0) {
                  gotoxy(1,1);
                  for (x=0;x<3;x++) {
                  cout << endl;
                  clreol();
                  }
                  gotoxy(1,1);
                  cout << "Player 2: Guess a letter, You have " << lives << " tries left. " << endl;
                  cin >> guess;
                  correct=0;
                  where=0;
                  for (output = word.begin(); output != word.end(); output++) {
                      where++;
                      if (guess == *output) {
                                correct=correct+1;
                                finish--;
                                switch (guess) {
                                       case 'a':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << " ___";
                                                              break;
                                                       case 20:
                                                            cout << "|   |";
                                                              break;
                                                       case 21:
                                                            cout << "|___|";
                                                              break;
                                                       case 22:
                                                            cout << "|   |";
                                                              break;
                                                       case 23:
                                                            cout << "|   |";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'b':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << " ___";
                                                              break;
                                                       case 20:
                                                            cout << "|   \\";
                                                              break;
                                                       case 21:
                                                            cout << "|___/";
                                                              break;
                                                       case 22:
                                                            cout << "|   \\";
                                                              break;
                                                       case 23:
                                                            cout << "|___/";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'c':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << " ___";
                                                              break;
                                                       case 20:
                                                            cout << "/   \\";
                                                              break;
                                                       case 21:
                                                            cout << "|";
                                                              break;
                                                       case 22:
                                                            cout << "|";
                                                              break;
                                                       case 23:
                                                            cout << "\\___/";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'd':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << " ___";
                                                              break;
                                                       case 20:
                                                            cout << "|   \\";
                                                              break;
                                                       case 21:
                                                            cout << "|   |";
                                                              break;
                                                       case 22:
                                                            cout << "|   |";
                                                              break;
                                                       case 23:
                                                            cout << "|___/";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'e':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << " ____";
                                                              break;
                                                       case 20:
                                                            cout << "|";
                                                              break;
                                                       case 21:
                                                            cout << "|____";
                                                              break;
                                                       case 22:
                                                            cout << "|";
                                                              break;
                                                       case 23:
                                                            cout << "|____";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'f':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << " ____";
                                                              break;
                                                       case 20:
                                                            cout << "|";
                                                              break;
                                                       case 21:
                                                            cout << "|____";
                                                              break;
                                                       case 22:
                                                            cout << "|";
                                                              break;
                                                       case 23:
                                                            cout << "|    ";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'g':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << " ___";
                                                              break;
                                                       case 20:
                                                            cout << "/   \\";
                                                              break;
                                                       case 21:
                                                            cout << "|  __";
                                                              break;
                                                       case 22:
                                                            cout << "|   |";
                                                              break;
                                                       case 23:
                                                            cout << "\\___/";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'h':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << "     ";
                                                              break;
                                                       case 20:
                                                            cout << "|   |";
                                                              break;
                                                       case 21:
                                                            cout << "|___|";
                                                              break;
                                                       case 22:
                                                            cout << "|   |";
                                                              break;
                                                       case 23:
                                                            cout << "|   |";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'i':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << "_____";
                                                              break;
                                                       case 20:
                                                            cout << "  |";
                                                              break;
                                                       case 21:
                                                            cout << "  |";
                                                              break;
                                                       case 22:
                                                            cout << "  |";
                                                              break;
                                                       case 23:
                                                            cout << "__|__";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'j':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << " ____";
                                                              break;
                                                       case 20:
                                                            cout << "   | ";
                                                              break;
                                                       case 21:
                                                            cout << "   |";
                                                              break;
                                                       case 22:
                                                            cout << "   |";
                                                              break;
                                                       case 23:
                                                            cout << "\\__/ ";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'k':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << "|  /";
                                                              break;
                                                       case 20:
                                                            cout << "| /";
                                                              break;
                                                       case 21:
                                                            cout << "|/";
                                                              break;
                                                       case 22:
                                                            cout << "| \\";
                                                              break;
                                                       case 23:
                                                            cout << "|  \\";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'l':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << "| ";
                                                              break;
                                                       case 20:
                                                            cout << "| ";
                                                              break;
                                                       case 21:
                                                            cout << "|";
                                                              break;
                                                       case 22:
                                                            cout << "|";
                                                              break;
                                                       case 23:
                                                            cout << "|____";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'm':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << "    ";
                                                              break;
                                                       case 20:
                                                            cout << "|\\ /|";
                                                              break;
                                                       case 21:
                                                            cout << "| V |";
                                                              break;
                                                       case 22:
                                                            cout << "|   |";
                                                              break;
                                                       case 23:
                                                            cout << "|   |";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'n':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << "    ";
                                                              break;
                                                       case 20:
                                                            cout << "|\\  |";
                                                              break;
                                                       case 21:
                                                            cout << "| \\ |";
                                                              break;
                                                       case 22:
                                                            cout << "|  \\|";
                                                              break;
                                                       case 23:
                                                            cout << "|   |";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'o':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << " ___";
                                                              break;
                                                       case 20:
                                                            cout << "/   \\";
                                                              break;
                                                       case 21:
                                                            cout << "|   |";
                                                              break;
                                                       case 22:
                                                            cout << "|   |";
                                                              break;
                                                       case 23:
                                                            cout << "\\___/";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'p':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << " ___";
                                                              break;
                                                       case 20:
                                                            cout << "|   \\";
                                                              break;
                                                       case 21:
                                                            cout << "|___/";
                                                              break;
                                                       case 22:
                                                            cout << "|";
                                                              break;
                                                       case 23:
                                                            cout << "|    ";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'q':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << " ___";
                                                              break;
                                                       case 20:
                                                            cout << "/   \\";
                                                              break;
                                                       case 21:
                                                            cout << "|   |";
                                                              break;
                                                       case 22:
                                                            cout << "|   |";
                                                              break;
                                                       case 23:
                                                            cout << "\\___\\    ";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'r':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << " ___";
                                                              break;
                                                       case 20:
                                                            cout << "|   \\";
                                                              break;
                                                       case 21:
                                                            cout << "|___/";
                                                              break;
                                                       case 22:
                                                            cout << "|  \\";
                                                              break;
                                                       case 23:
                                                            cout << "|   \\";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 's':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << " ___";
                                                              break;
                                                       case 20:
                                                            cout << "/   \\";
                                                              break;
                                                       case 21:
                                                            cout << "\\___";
                                                              break;
                                                       case 22:
                                                            cout << "    \\";
                                                              break;
                                                       case 23:
                                                            cout << "\\___/";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 't':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << "_____";
                                                              break;
                                                       case 20:
                                                            cout << "  |";
                                                              break;
                                                       case 21:
                                                            cout << "  |";
                                                              break;
                                                       case 22:
                                                            cout << "  |";
                                                              break;
                                                       case 23:
                                                            cout << "  |  ";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'u':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << "|   |";
                                                              break;
                                                       case 20:
                                                            cout << "|   |";
                                                              break;
                                                       case 21:
                                                            cout << "|   |";
                                                              break;
                                                       case 22:
                                                            cout << "|   |";
                                                              break;
                                                       case 23:
                                                            cout << "\\___/";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'v':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << "     ";
                                                              break;
                                                       case 20:
                                                            cout << "\\   /";
                                                              break;
                                                       case 21:
                                                            cout << " \\ /";
                                                              break;
                                                       case 22:
                                                            cout << "  /";
                                                              break;
                                                       case 23:
                                                            cout << "     ";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'w':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << "  ";
                                                              break;
                                                       case 20:
                                                            cout << "  ";
                                                              break;
                                                       case 21:
                                                            cout << "\\    /";
                                                              break;
                                                       case 22:
                                                            cout << " \\/\\/";
                                                              break;
                                                       case 23:
                                                            cout << "       ";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'x':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << "\\   /";
                                                              break;
                                                       case 20:
                                                            cout << " \\ /";
                                                              break;
                                                       case 21:
                                                            cout << "  /";
                                                              break;
                                                       case 22:
                                                            cout << " / \\";
                                                              break;
                                                       case 23:
                                                            cout << "/   \\";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'y':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << "\\   /";
                                                              break;
                                                       case 20:
                                                            cout << " \\ /";
                                                              break;
                                                       case 21:
                                                            cout << "  |";
                                                              break;
                                                       case 22:
                                                            cout << "  |";
                                                              break;
                                                       case 23:
                                                            cout << "  |  ";
                                                              break;
                                                              }
                                                              }
                                            break;
                                       case 'z':
                                            for (y=19;y<=23;y++) {
                                                x=where*7;
                                                gotoxy(x,y-2);
                                                switch (y) {
                                                       case 19:
                                                            cout << "_____";
                                                              break;
                                                       case 20:
                                                            cout << "    /";
                                                              break;
                                                       case 21:
                                                            cout << "   / ";
                                                              break;
                                                       case 22:
                                                            cout << " /   ";
                                                              break;
                                                       case 23:
                                                            cout << "/____";
                                                              break;
                                                              }
                                                              }
                                            break;
                                            }
                                }
                           }
                           gotoxy(1,3);
                  switch (correct) {
                         case 0: 
                              cout << "There were no " << guess << "'s." << endl;
                              lives--;
                              switch (lives) {
                                     case 5:
                                          gotoxy(60,5);
                                          cout << "      /   /";
                                          gotoxy(60,6);
                                          cout << "   /         /";
                                          gotoxy(60,7);
                                          cout << "  /           /";
                                          gotoxy(60,8);
                                          cout << "  /           /";
                                          gotoxy(60,9);
                                          cout << "   /         /";
                                          gotoxy(60,10); 
                                          cout << "      /   /";
                                          break;
                                     case 4:
                                          for(picture=0;picture<7;picture++) {
                                          gotoxy(68,11+picture);
                                          cout << "|";
                                          }
                                          break;
                                     case 3:
                                          gotoxy(65,12);
                                          cout << "\\";
                                          gotoxy(66,13);
                                          cout << "\\";
                                          gotoxy(67,14);
                                          cout << "\\";
                                          break;
                                     case 2:
                                          gotoxy(71,12);
                                          cout << "/";
                                          gotoxy(70,13);
                                          cout << "/";
                                          gotoxy(69,14);
                                          cout << "/";
                                          break;
                                     case 1:
                                          gotoxy(67,18);
                                          cout << "/";
                                          gotoxy(66,19);
                                          cout << "/";
                                          gotoxy(65,20);
                                          cout << "/";
                                          gotoxy(64,21);
                                          cout << "/";
                                          break;
                                     case 0:
                                          gotoxy(69,18);
                                          cout << "\\";
                                          gotoxy(70,19);
                                          cout << "\\";
                                          gotoxy(71,20);
                                          cout << "\\";
                                          gotoxy(72,21);
                                          cout << "\\";
                                          break;
                                          }
                              gotoxy(2,6);
                              cout << "Incorrect Guesses: ";
                              gotoxy(2,7+i);
                              cout << guess;
                              i++;
                              break;
                         case 1:
                              cout << "There was 1 " << guess << endl;
                              break;
                         default:
                                 cout << "There were " << correct << " " << guess << "'s." << endl;
                                 break;
                           }
                  getch();
                           }
                           
            if (lives == 0) {
                 clrscr();
                 cout << endl << "\t\t" << "Sorry, but you ran out of guesses... :( " << endl << "\t\tThe word was ";
                 
                 for (output = word.begin(); output != word.end(); output++)
                 {
                          cout << *output;
                          }
                                          gotoxy(60,5);
                                          cout << "      /   /";
                                          gotoxy(60,6);
                                          cout << "   /         /";
                                          gotoxy(60,7);
                                          cout << "  /           /";
                                          gotoxy(60,8);
                                          cout << "  /           /";
                                          gotoxy(60,9);
                                          cout << "   /         /";
                                          gotoxy(60,10); 
                                          cout << "      /   /";
                                          for(picture=0;picture<7;picture++) {
                                          gotoxy(68,11+picture);
                                          cout << "|";
                                          }
                                          gotoxy(65,12);
                                          cout << "\\";
                                          gotoxy(66,13);
                                          cout << "\\";
                                          gotoxy(67,14);
                                          cout << "\\";
                                          gotoxy(71,12);
                                          cout << "/";
                                          gotoxy(70,13);
                                          cout << "/";
                                          gotoxy(69,14);
                                          cout << "/";
                                          gotoxy(67,18);
                                          cout << "/";
                                          gotoxy(66,19);
                                          cout << "/";
                                          gotoxy(65,20);
                                          cout << "/";
                                          gotoxy(64,21);
                                          cout << "/";
                                          gotoxy(69,18);
                                          cout << "\\";
                                          gotoxy(70,19);
                                          cout << "\\";
                                          gotoxy(71,20);
                                          cout << "\\";
                                          gotoxy(72,21);
                                          cout << "\\";
                          gotoxy(15,9);
                          cout << "Play again? (y/n) ";
                          cin >> ending;
                          if (ending == 'y') {
                                     exit=1;
                                     }
                          else {
                               exit = 0;
                               }
                      }
            else {
                 clrscr();
                 gotoxy(1,1);
                 gotoxy(1,1);
                 cout << endl << "\t\tCongrats! You guessed the word! :D" << endl;
                 cout << "\t\tAnd you were only incorrect " << 6-lives << " times! " << endl;
                          gotoxy(15,9);
                          cout << "Play again? (y/n) ";
                          cin >> ending;
                          if (ending == 'y') {
                                     exit=1;
                                     }
                          else {
                               exit = 0;
                               }
                 }
                           
                           }
    cout << endl << endl;
    return EXIT_SUCCESS;
}
