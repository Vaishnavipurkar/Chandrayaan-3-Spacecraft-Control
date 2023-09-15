# Chandrayaan 3 Lunar Craft: Galactic Space Craft Control 🚀🌌
Control software for Chandrayaan 3 lunar spacecraft navigation in galactic coordinates.
![Chandrayaan 3]([https://example.com/path/to/your/image.jpg](https://images.moneycontrol.com/static-mcnews/2023/08/Chandrayaannew-1-770x433.jpg?impolicy=website&width=770&height=431))

Chandrayaan 3

Welcome to the Chandrayaan 3 Lunar Craft Galactic Space Craft Control Assessment! 🛰️

Scientist: Vaishnavi Khandu Purkar
Email: Vaishnavipurkar7@gmail.com 📧
Contact No: 9767966853 📞
GitHub: github.com/Vaishnavipurkar 🌐
LinkedIn: linkedin.com/in/vaishnavi-purkar-4a9373230 📲

Table of Contents 📜
Introduction
Problem Description
Requirements
Constraints
Example
Assessment Guidelines
Introduction 🚀
Imagine yourself as a scientist at ISRO, with the thrilling responsibility of controlling the Chandrayaan 3 lunar spacecraft. In this assessment, you will embark on a mission to develop a program that translates commands sent from Earth into instructions that Chandrayaan 3 can understand and execute as it navigates through the vast galaxy using galactic coordinates.

Problem Description 🌌
The Galactic Coordinates 🌠
The spacecraft operates within the galaxy using galactic coordinates, which are represented by (x, y, z) coordinates:

x for east or west location.
y for north or south location.
z for distance above or below the galactic plane.
Requirements 🛰️
You will be provided with the following information:

The initial starting point of the spacecraft as (x, y, z).
The initial direction it is facing (N, S, E, W, Up, Down).
A character array of commands that you need to interpret and execute.
Here are the functionalities you need to implement:

Move the spacecraft forward/backward (f, b): The spacecraft moves one step forward or backward based on its current direction.

Turn the spacecraft left/right (l, r): The spacecraft rotates 90 degrees to the left or right, changing its facing direction.

Turn the spacecraft up/down (u, d): The spacecraft changes its angle, rotating upwards or downwards.

Constraints 🌐
The spacecraft's initial direction represents the reference frame for movement and rotation.
The spacecraft cannot move or rotate diagonally; it can only move in the direction it is currently facing.
Assume that the spacecraft’s movement and rotations are rigid, and it cannot move beyond the galactic boundaries.
Example 🚀
Let's consider an example to illustrate how your program should work:

Commands: ["f", "r", "u", "b", "l"]

Starting Position: (0, 0, 0)

Initial Direction: N

"f" - (0, 1, 0) - N
"r" - (0, 1, 0) - E
"u" - (0, 1, 0) - U
"b" - (0, 1, -1) - U
"l" - (0, 1, -1) - N
Final Position: (0, 1, -1)

Final Direction: N.   🌟
