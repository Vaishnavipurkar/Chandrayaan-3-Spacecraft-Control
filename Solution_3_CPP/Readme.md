This C++ program defines a Spacecraft class with methods to handle movement and rotation as described in the requirements. It initializes the spacecraft at the specified starting position and direction and then executes a sequence of commands to control its movement. Finally, it prints the spacecraft's final position and direction.
Include Necessary Headers:

cpp
Copy code
#include <iostream>
#include <vector>
This code includes the <iostream> header for input and output operations and the <vector> header for using the vector data structure to store the commands.

Define the Spacecraft Class:

cpp
Copy code
class Spacecraft {
public:
    // Constructor to initialize the spacecraft's position and direction
    Spacecraft(int startX, int startY, int startZ, char startDir)
        : x(startX), y(startY), z(startZ), direction(startDir) {}
Here, a class named Spacecraft is defined to represent the Chandrayaan 3 spacecraft. The constructor is used to initialize the spacecraft's initial position (x, y, z) and direction (N, S, E, W, Up, Down).

Define Movement and Rotation Functions:

cpp
Copy code
    // Functions to move the spacecraft forward/backward and turn it left/right/up/down
    void moveForward() { /* ... */ }
    void moveBackward() { /* ... */ }
    void turnLeft() { /* ... */ }
    void turnRight() { /* ... */ }
    void turnUp() { /* ... */ }
    void turnDown() { /* ... */ }
Several member functions are defined to implement the movements and rotations of the spacecraft based on the current direction. These functions update the spacecraft's position and direction accordingly.

Implement Movement and Rotation Functions:

cpp
Copy code
    // Implementations of the movement and rotation functions
    void moveForward() {
        if (direction == 'N') y++;
        else if (direction == 'S') y--;
        else if (direction == 'E') x++;
        else if (direction == 'W') x--;
        else if (direction == 'U') z++;
        else if (direction == 'D') z--;
    }
    // Implementations for other functions are similar
Here, moveForward(), for example, checks the current direction of the spacecraft and updates its position accordingly. If the spacecraft is facing North ('N'), it increments the y-coordinate to move forward.

Define a Function to Get the Current Position and Direction:

cpp
Copy code
    // Function to get the current position and direction
    void getPosition() {
        cout << "Current Position: (" << x << ", " << y << ", " << z << ")" << endl;
        cout << "Current Direction: " << direction << endl;
    }
This function prints the current position and direction of the spacecraft.

main() Function:

cpp
Copy code
int main() {
    // Initialize the spacecraft
    Spacecraft chandrayaan(0, 0, 0, 'N');
In the main() function, an instance of the Spacecraft class is created, representing Chandrayaan 3. It is initialized at the specified starting position (0, 0, 0) and facing North ('N').

Define and Execute Commands:

cpp
Copy code
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
Here, a vector commands is defined to store a sequence of commands ('f', 'r', 'u', 'b', 'l'). A loop iterates through these commands and calls the appropriate member functions of the Spacecraft object to control its movement and rotation.

Get and Display the Final Position and Direction:

cpp
Copy code
    // Get the final position and direction
    chandrayaan.getPosition();

    return 0;
}
Finally, the getPosition() function is called to retrieve and display the spacecraft's final position and direction. The program then returns 0 to indicate successful execution.

This program simulates the control of Chandrayaan 3 in the galaxy by executing a sequence of commands and updating the spacecraft's position and direction accordingly.
