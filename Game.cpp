#include "Game.h"
#include "MMSystem.h"
using namespace std;

Game::Game() {
    snv = new Snv();
    fruta = new Fruta(snv);
    close = new CloseGame(snv);
    open = new OpenGame();
    snake = new Snake();
}

void Game::tecla() {
    if (!snake->getGameOver()) {
        if (_kbhit() == 1) {
            key = _getch();
        }
        if ((key == 72) && snake->getSnakeDY() != 1) {
            snake->setSnakeDX(0);            
            snake->setSnakeDY(-1);
        }
        if ((key == 80) && snake->getSnakeDY() != -1) {
            snake->setSnakeDX(0);            
            snake->setSnakeDY(1);
        }
        if ((key == 75) && snake->getSnakeDX() != 1) {
            snake->setSnakeDX(-1);            
            snake->setSnakeDY(0);
        }
        if ((key == 77) && snake->getSnakeDX() != -1) {
            snake->setSnakeDX(1);            
            snake->setSnakeDY(0);
        }
    }
}

void Game::loop() {
    while (!snake->getGameOver()) {
        if (fruta->cFruta(snake->getSnakeX(0), snake->getSnakeY(0))) {
            snake->setSnakeCuerpo(snv->getTam() - 1, 184);
        }
        snv->puntos();
        snake->actualizar();
        snake->imprimir();
        tecla();
        snake->muerte();
        Sleep(snv->getVelocidad());
    }
}
void Game::main() {
    system("color 0a");//E0
    snake->setGameOver(false);

 //   open->portada();
    open->graficaTablero();
    system("cls");

    open->tablero();
    srand(time(NULL));

    snake->genSnake();
    fruta->genFruta();
    loop();

    close->muerte2();
    //close->graficaTablero();
    main();
}
