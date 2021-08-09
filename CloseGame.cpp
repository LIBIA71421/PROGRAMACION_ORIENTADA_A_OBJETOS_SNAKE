#include "CloseGame.h"

CloseGame::CloseGame(Snv* snv) {
    this->snv = snv;
    Portada::setX(25);
    c = 24;
    f = 79;
    t = 178;
}

void CloseGame::text(){    
    gotoxy(3, 16); cout << "/ |    /     \\ /      \\/  \\     /  /        |    /      \\/  |     /  /         /     \\ " << endl;
    gotoxy(3, 17); cout << "$$|   /$$$$$$  / $$$$$$  $$  \\   /$$ $$$$$$$$/    /$$$$$$  $$ |     $$ $$$$$$$$ /$$$$$$$|" << endl;
    gotoxy(3, 18); cout << "$$|   $$ | _$$/ $$   |$$ $$$  \\ /$$$ $$ |         $$ |  $$ $$ |   $$ $$ |_      $$ |_ $$ |" << endl;
    gotoxy(3, 19); cout << "$$|   $$ | /    $$    $$ $$$$  /$$$$ $$    |      $$ |  $$ $$  \\ /$$/$$    |    $$   $$<" << endl;
    gotoxy(3, 20); cout << "$$/   $$ | $$$$ $$$$$$$$ $$ $$ $$/$$ $$$$$/       $$ |  $$ |$$  /$$/ $$$$$/     $$$$$$$|" << endl;
    gotoxy(3, 21); cout << "  _   $$ \\_$$   $$ |  $$ $$ |$$$/ $$ $$ |_        $$ \\  $$ | $$ $$/  $$ |__  |  $$|    $$ |" << endl;
    gotoxy(3, 22); cout << "/  |  $$   $$/  $$ |  $$ $$ | $/  $$ $$       |   $$    $$/   $$$/   $$        |$$|    $$ |" << endl;
    gotoxy(3, 23); cout << "$$/   $$$$$$/   $$/   $$/$$/      $$/$$$$$$$$/      $$$$$$/    $/    $$$$$$$$/  $$/    $$ |" << endl;

    gotoxy(3, 26); cout << "Presione ENTER";

    cout << "Presione ESC para salir o cualquier otra tecla para seguir jugando";
    key = _getch();
    if (key == 27)
        exit(1);
}
void CloseGame::muerte2() {
    system("cls");
    for (int i = 0; i < f; i++) {
        gotoxy(i, 0);
        cout << t;
        gotoxy(i, c);
        cout << t;
    }
    for (int i = 0; i <= c; i++) {
        gotoxy(0, i);
        cout << t;
        gotoxy(f, i);
        cout << t;
    }
    string g4meover[] = { "  ____                       ___"," / ___| __ _ _ __ ___   ___ / _ \\__   _____ _ __ ",
    "| |  _ / _` | '_ ` _ \\ / _ \\ | | \\ \\ / / _ \\ '__|","| |_| | (_| | | | | | |  __/ |_| |\\ V /  __/ | ",
    " \\____|\\__,_|_| |_| |_|\\___|\\___/  \\_/ \\___|_|" };
    r = 2;
    for (int i = 0; i < 5; i++) {
        gotoxy(15, r);
        r++;
        cout << g4meover[i] << endl;
    }
    string g4meover2[] = { "   _________         _________","  /         \\       /         \\",
    " /  /~~~~~\\  \\     /  /~~~~~\\  \\"," |  |     |  |     |  |     |  |"," |  |     |  |     |  |     |  |",
    " |  |     |  |     |  |     |  |         /"," |  |     |  |     |  |     |  |       //","(X  X)    \\  \\_____/  /     \\  \\_____/ /",
    " \\__/      \\         /       \\        /","  |         ~~~~~~~~~         ~~~~~~~~","  ^" };
    for (int i = 0; i < 11; i++) {
        gotoxy(20, r);
        cout << g4meover2[i] << endl;
        r++;
    }
    gotoxy(33, r);
    cout << "Score: " << (snv->getScore() - 1) * 10;
    r++;
    gotoxy(33, r);
    cout << "Level: " << snv->getNivel();
    gotoxy(8, 23);
    cout << "Presione ESC para salir o cualquier otra tecla para seguir jugando";
    key = _getch();
    if (key == 27)
        exit(1);
}