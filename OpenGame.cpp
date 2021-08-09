#include "OpenGame.h"

OpenGame::OpenGame(){
 //   Portada::setAlto(79);
    Portada::setX(20);
    c = 24;
    f = 79;
    t = 178;
}
void OpenGame::text(){
    gotoxy(5, 16); cout << "  )\\ )   (              )\\ )  (  ( /(  \\ ))\ ) *   )   (      " << endl;
    gotoxy(5, 17); cout << " (()/(   )\\      (   ( (()/(( )\ )\\())(()/(()/` )  /(   )\\     " << endl;
    gotoxy(5, 18); cout << "  /(_)((((_)(    )\\  )\\ /(_))((_((_)\\  /(_)/(_)( )(_)((((_)(   " << endl;
    gotoxy(5, 19); cout << " (_))  )\\ _ )\\  ((_)((_(_))((_)_  ((_)(_))(_))(_(_()) )\\ _ )\\ " << endl;
    gotoxy(5, 20); cout << " | |   (_)_\\(_) \\ \\ / /|_ _|| _ )/ _ \\| _ |_ _|_   _| (_)_\\(_)" << endl;
    gotoxy(5, 21); cout << " | |__  / _ \\    \\ V /  | | | _ | (_) |   /| |  | |    / _ \\  " << endl;
    gotoxy(5, 22); cout << " |____|/_/ \\_\\    \\_/  |___||___/\\___/|_|_|___| |_|   /_/ \\_\\ " << endl;

    gotoxy(23, 23);
    cout << "Presione ENTER para empezar";
    system("pause>INICIO");
}
void OpenGame::portada() {
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
    string snkd[] = { "       ---_ ......._-_--.","      (|\\ /      / /| \\  \\","      /  /     .'  -=-'   `.",
            "     /  /    .'             )","   _/  /   .'        _.)   /","  / o   o        _.-' /  .'",
            "  \\          _.-'    / .'*|","   \\______.-'//    .'.' \\*|","    \\|  \\ | //   .'.' _ |*|",
            "     `   \\|//  .'.'_ _ _|*|","      .  .// .'.' | _ _ \\*|","      \\`-|\\_/ /    \\ _ _ \\*\\",
            "                     \\ _ _ \\*","                      \\ _ _ \\ ","                       \\_" };
    r = 2;
    for (int i = 0; i < 14; i++) {
        gotoxy(20, r);
        r++;
        cout << snkd[i] << endl;
    }
    string snkl[] = { "                     __     ","   _________  ____ _/ /_____","  / ___/ __ \\/ __ `/ //_/ _ \\",
    " (__  ) / / / /_/ / ,< /  __/","/____/_/ /_/\\__,_/_/|_|\\___/" };
    for (int i = 0; i < 5; i++) {
        gotoxy(22, r);
        r++;
        cout << snkl[i] << endl;
    }
    gotoxy(23, 23);
    cout << "Precione ENTER para empezar";
    system("pause>dsdsd");
}