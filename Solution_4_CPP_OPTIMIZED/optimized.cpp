#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Spacecraft {
public:
    Spacecraft(int startX, int startY, int startZ, char startDir)
        : x(startX), y(startY), z(startZ), direction(startDir) {}

    void moveForward() {
        updatePosition(1, 0, 0);
    }

    void moveBackward() {
        updatePosition(-1, 0, 0);
    }

    void turnLeft() {
        updateDirection(-1);
    }

    void turnRight() {
        updateDirection(1);
    }

    void turnUp() {
        if (direction != 'U' && direction != 'D') {
            direction = 'U';
        }
    }

    void turnDown() {
        if (direction != 'U' && direction != 'D') {
            direction = 'D';
        }
    }

    void getPosition() {
        cout << "Current Position: (" << x << ", " << y << ", " << z << ")" << endl;
        cout << "Current Direction: " << direction << endl;
    }

private:
    int x, y, z;
    char direction;
    unordered_map<char, pair<int, int>> moveMap = {
        {'N', {0, 1}},
        {'S', {0, -1}},
        {'E', {1, 0}},
        {'W', {-1, 0}},
        {'U', {0, 0}},
        {'D', {0, 0}}
    };

    void updatePosition(int dx, int dy, int dz) {
        x += dx;
        y += dy;
        z += dz;
    }

    void updateDirection(int rotation) {
        static const string directions = "NSEW";
        int currentDirIndex = directions.find(direction);
        int newDirIndex = (currentDirIndex + rotation + 4) % 4;
        direction = directions[newDirIndex];
    }
};

int main() {
    Spacecraft chandrayaan(0, 0, 0, 'N');

    vector<char> commands = {'f', 'r', 'u', 'b', 'l'};

    for (char cmd : commands) {
        if (cmd == 'f') chandrayaan.moveForward();
        else if (cmd == 'b') chandrayaan.moveBackward();
        else if (cmd == 'r') chandrayaan.turnRight();
        else if (cmd == 'l') chandrayaan.turnLeft();
        else if (cmd == 'u') chandrayaan.turnUp();
        else if (cmd == 'd') chandrayaan.turnDown();
    }

    chandrayaan.getPosition();

    return 0;
}
