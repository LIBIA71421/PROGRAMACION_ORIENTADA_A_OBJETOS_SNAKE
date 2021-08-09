#include "Portada.h"

Portada::Portada() {
    system("cls");
    t = 178;
    xg = 0;
}
void Portada::graficaTablero(){
    system("cls");
    grafico();
    text();
}
void Portada::grafico() {
    gotoxy(xg, 1); cout << "       ---_ .......---." << endl;
    gotoxy(xg, 2); cout << "      (|\\\\ /      / /| \\\\ \\\\" << endl;
    gotoxy(xg, 3); cout << "      /  /     .'  -=-'   `." << endl;
    gotoxy(xg, 4); cout << "     /  /    .'             )" << endl;
    gotoxy(xg, 5); cout << "   _/  /   .'        _.)   /" << endl;
    gotoxy(xg, 6); cout << "  / o   o        _.-' /  .'" << endl;
    gotoxy(xg, 7); cout << "  \\\\          .-'    / .'*|" << endl;
    gotoxy(xg, 8); cout << "   \\\\___.-'//    .'.' \\\\*|" << endl;
    gotoxy(xg, 9); cout << "    \\\\| \\\\ | //   .'.' _|*|" << endl;
    gotoxy(xg, 10); cout << "     `   \\\\|//  .'.'_ _ ||" << endl;
    gotoxy(xg, 11); cout << "      .  .// .'.' | _ _ \\\\|" << endl;
    gotoxy(xg, 12); cout << "     \\\\`-|\\\\//    \\\\ _ _ \\\\*\\" << endl;
    gotoxy(xg, 13); cout << "                   \\\\ _ _ \\\\*" << endl;
    gotoxy(xg, 14); cout << "                    \\\\ _ _ \\\\ " << endl;
    gotoxy(xg, 15); cout << "                     \\\\_" << endl;
}
void Portada::text(){
    gotoxy(23, 26); cout << "Presione ENTER";
}
void Portada::setX(int xo) {
    xg = xo;
}
void Portada::tablero() {
    for (int i = 1; i < snv.getF(); i++) {
        gotoxy(i, 1);
        cout << t;
        gotoxy(i, snv.getC());
        cout << t;
    }
    for (int i = 1; i <= snv.getC(); i++) {
        gotoxy(1, i);
        cout << t;
        gotoxy(snv.getF(), i);
        cout << t;
    }
}
