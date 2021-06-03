#include"libOne.h"
void gmain() {
    window(800, 600, full);
    int buta1Img = loadImage("assets\\buta1.png");
    float px = 800, py = 450, angle = 0, scale = 1;
    while (notQuit) {
        if (isPress(KEY_D)) { px += 3; }
        clear(60);
        rectMode(CENTER);
        image(buta1Img, px, py, angle, scale);

    }
}