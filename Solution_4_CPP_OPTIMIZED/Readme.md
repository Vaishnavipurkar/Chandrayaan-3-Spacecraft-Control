To optimize the code, we can make a few improvements by using a data structure to map the commands to actions and removing unnecessary if-else chains. Here's an optimized version of the code:



Optimizations made in this code:

Used an unordered map (moveMap) to map commands to corresponding changes in position. This eliminates the need for long if-else chains.

Created a separate function (updatePosition) to update the position based on the command and another function (updateDirection) to update the direction. This improves code readability and reduces redundancy.

Ensured that turning commands ('u' and 'd') do not change direction if the spacecraft is already facing up or down, respectively.

Used a static const string to define the valid directions and simplified the direction update logic.

These optimizations make the code more efficient, maintainable, and readable while preserving the same functionality.
