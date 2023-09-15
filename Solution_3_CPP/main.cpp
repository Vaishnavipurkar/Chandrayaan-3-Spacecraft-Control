#include <iostream>
#include <vector>

using namespace std;

// Define the spacecraft class
class Spacecraft {
public:
    // Constructor to initialize the spacecraft's position and direction
    Spacecraft(int startX, int startY, int startZ, char startDir)
        : x(startX), y(startY), z(startZ), direction(startDir) {}

    // Function to move the spacecraft forward
    void moveForward() {
        if (direction == 'N') y++;
        else if (direction == 'S') y--;
        else if (direction == 'E') x++;
        else if (direction == 'W') x--;
        else if (direction == 'U') z++;
        else if (direction == 'D') z--;
    }

    // Function to move the spacecraft backward
    void moveBackward() {
        if (direction == 'N') y--;
        else if (direction == 'S') y++;
        else if (direction == 'E') x--;
        else if (direction == 'W') x++;
        else if (direction == 'U') z--;
        else if (direction == 'D') z++;
    }

    // Function to turn the spacecraft left
    void turnLeft() {
        if (direction == 'N') direction = 'W';
        else if (direction == 'S') direction = 'E';
        else if (direction == 'E') direction = 'N';
        else if (direction == 'W') direction = 'S';
    }

    // Function to turn the spacecraft right
    void turnRight() {
        if (direction == 'N') direction = 'E';
        else if (direction == 'S') direction = 'W';
        else if (direction == 'E') direction = 'S';
        else if (direction == 'W') direction = 'N';
    }

    // Function to turn the spacecraft up
    void turnUp() {
        if (direction == 'N' || direction == 'S') direction = 'U';
        else if (direction == 'E' || direction == 'W') direction = 'U';
    }

    // Function to turn the spacecraft down
    void turnDown() {
        if (direction == 'N' || direction == 'S') direction = 'D';
        else if (direction == 'E' || direction == 'W') direction = 'D';
    }

    // Function to get the current position
    void getPosition() {
        cout << "Current Position: (" << x << ", " << y << ", " << z << ")" << endl;
        cout << "Current Direction: " << direction << endl;
    }

private:
    int x, y, z;
    char direction;
};

int main() {
    // Initialize the spacecraft
    Spacecraft chandrayaan(0, 0, 0, 'N');

    // Define the commands
    vector<char> commands = {'f', 'r', 'u', 'b', 'l'};

    // Execute the commands
    for (char cmd : commands) {
        if (cmd == 'f') chandrayaan.moveForward();
        else if (cmd == 'b') chandrayaan.moveBackward();
        else if (cmd == 'r') chandrayaan.turnRight();
        else if (cmd == 'l') chandrayaan.turnLeft();
        else if (cmd == 'u') chandrayaan.turnUp();
        else if (cmd == 'd') chandrayaan.turnDown();
    }

    // Get the final position and direction
    chandrayaan.getPosition();

    return 0;
}
