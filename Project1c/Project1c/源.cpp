//#include <stdio.h>
//#include <conio.h>      // _kbhit(), _getch()
//#include <windows.h>    // Sleep()
//#include <time.h>
//#include <stdlib.h>
//
//#define WIDTH  20
//#define HEIGHT 20
//#define MAX_LEN 100
//
//int body[MAX_LEN][2];   // 蛇身：[i][0]=y, [i][1]=x
//int len = 3;            // 初始长度
//int fx, fy;             // 食物坐标
//int dir = 'd';          // 初始方向：d=右
//int score = 0;
//
//// 光标移到(x,y)，避免每次清屏闪烁
//void gotoxy(int x, int y) {
//    COORD c = { x, y };
//    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
//}
//
//// 随机生成食物
//void place_food() {
//    while (1) {
//        fx = rand() % (WIDTH - 2) + 1;
//        fy = rand() % (HEIGHT - 2) + 1;
//        int ok = 1;
//        for (int i = 0; i < len; i++)
//            if (body[i][1] == fx && body[i][0] == fy) { ok = 0; break; }
//        if (ok) break;
//    }
//}
//
//// 初始化蛇
//void init() {
//    body[0][0] = 10; body[0][1] = 5;
//    body[1][0] = 10; body[1][1] = 4;
//    body[2][0] = 10; body[2][1] = 3;
//    srand(time(0));
//    place_food();
//}
//
//// 画整个画面
//void draw() {
//    gotoxy(0, 0);  // 直接在原位置覆盖，不调用system("cls")
//    for (int y = 0; y < HEIGHT; y++) {
//        for (int x = 0; x < WIDTH; x++) {
//            if (y == 0 || y == HEIGHT - 1 || x == 0 || x == WIDTH - 1)
//                printf("#");                        // 墙
//            else if (y == body[0][0] && x == body[0][1])
//                printf("O");                        // 蛇头
//            else if (y == fy && x == fx)
//                printf("*");                        // 食物
//            else {
//                int is_body = 0;
//                for (int i = 1; i < len; i++)
//                    if (body[i][0] == y && body[i][1] == x) { is_body = 1; break; }
//                printf(is_body ? "o" : " ");        // 蛇身 or 空
//            }
//        }
//        printf("\n");
//    }
//    printf("Score: %d    (WASD移动, X退出)\n", score);
//}
//
//// 移动蛇：每节往前一节的位置靠
//void move() {
//    for (int i = len - 1; i > 0; i--) {
//        body[i][0] = body[i - 1][0];
//        body[i][1] = body[i - 1][1];
//    }
//    if (dir == 'w') body[0][0]--;
//    if (dir == 's') body[0][0]++;
//    if (dir == 'a') body[0][1]--;
//    if (dir == 'd') body[0][1]++;
//}
//
//// 碰撞检测：撞墙 / 撞自己
//int hit() {
//    if (body[0][0] <= 0 || body[0][0] >= HEIGHT - 1 ||
//        body[0][1] <= 0 || body[0][1] >= WIDTH - 1)
//        return 1;
//    for (int i = 1; i < len; i++)
//        if (body[0][0] == body[i][0] && body[0][1] == body[i][1])
//            return 1;
//    return 0;
//}
//
//int main() {
//    init();
//    while (1) {
//        draw();
//
//        // 非阻塞按键：有键就读，没键就继续走
//        if (_kbhit()) {
//            int c = _getch();
//            if (c == 'x' || c == 'X') break;
//            // 防止直接反向（比如向右时按左会立刻撞自己）
//            if ((c == 'w' && dir != 's') || (c == 's' && dir != 'w') ||
//                (c == 'a' && dir != 'd') || (c == 'd' && dir != 'a'))
//                dir = c;
//        }
//
//        move();
//
//        if (hit()) {
//            gotoxy(0, HEIGHT);
//            printf("Game Over! Final Score: %d\n", score);
//            break;
//        }
//
//        // 吃到食物：加分、加长、放新食物
//        if (body[0][0] == fy && body[0][1] == fx) {
//            score += 10;
//            if (len < MAX_LEN) len++;
//            place_food();
//        }
//
//        Sleep(1000);  // 控制速度，越小越快   //修改了速度大小
//    }
//    return 0;
//}
