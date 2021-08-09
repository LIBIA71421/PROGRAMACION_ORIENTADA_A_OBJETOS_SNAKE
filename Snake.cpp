#include "Snake.h"
Snake::Snake() {
    gameover = false;
    snv = new Snv();
}
void Snake::actualizar() {//>>snake /(serpiente/logica juego)
    int i;
    gotoxy(snake[snv->getTam() - 1].x, snake[snv->getTam() - 1].y);
    cout << " ";
    for (i = snv->getTam() - 1; i > 0; i--) {
        snake[i].x = snake[i - 1].x;
        snake[i].y = snake[i - 1].y;
    }
    snake[0].x += snake[0].dx;
    snake[0].y += snake[0].dy;
}
void Snake::imprimir() {
    int i;
    for (i = snv->getTam() - 1; i >= 0; i--) {
        gotoxy(snake[i].x, snake[i].y);
        cout << snake[i].cuerpo;
    }
}
void Snake::genSnake() {
    int i;
    snake[0].x = 30;
    snake[0].y = 10;
    snake[0].dx = 1;
    snake[0].dy = 0;
    snake[0].cuerpo = 157;
    for (i = 1; i < snv->getTam(); i++) {
        snake[i].x = snake[i - 1].x - 1;
        snake[i].y = snake[i - 1].y;
        snake[i].cuerpo = 184;
    }
    for (i = 0; i < snv->getTam(); i++) {
        gotoxy(snake[i].x, snake[i].y);
        cout << snake[i].cuerpo;
    }
}
int Snake::getSnakeX(int xi) {    
    return snake[xi].x;
}
int Snake::getSnakeY(int yi) {    
    return snake[yi].y;
}
int Snake::getSnakeDX() {    
    return snake[0].dx;
}
int Snake::getSnakeDY() {   
    return snake[0].dy;
}
bool Snake::getGameOver() {     
    return gameover; 
}

void Snake::setSnakeDX(int dx) {    
    snake[0].dx = dx;
}
void Snake::setSnakeDY(int dy) {    
    snake[0].dy = dy;
}
void Snake::setSnakeCuerpo(int ci,char c) {    
    snake[ci].cuerpo = c;
}
void Snake::setGameOver(bool game) { 
    gameover = game; 
}

void Snake::muerte() {
    if (snake[0].x == 1 || snake[0].x == snv->getF() || snake[0].y == 1 || snake[0].y == snv->getC())
        gameover = true;
    for (int i = 1; i < snv->getTam() && gameover == false; i++) {
        if (snake[0].x == snake[i].x && snake[0].y == snake[i].y) {
            gameover = true;
        }
    }
}