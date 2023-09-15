class Chandrayaan3:
    def __init__(self, initial_position, initial_direction):
        self.position = list(initial_position)  # Convert initial_position to a list
        self.direction = initial_direction

    def move_forward(self):
        if self.direction == 'N':
            self.position[1] += 1
        elif self.direction == 'S':
            self.position[1] -= 1
        elif self.direction == 'E':
            self.position[0] += 1
        elif self.direction == 'W':
            self.position[0] -= 1
        elif self.direction == 'Up':
            self.position[2] += 1
        elif self.direction == 'Down':
            self.position[2] -= 1

    def move_backward(self):
        if self.direction == 'N':
            self.position[1] -= 1
        elif self.direction == 'S':
            self.position[1] += 1
        elif self.direction == 'E':
            self.position[0] -= 1
        elif self.direction == 'W':
            self.position[0] += 1
        elif self.direction == 'Up':
            self.position[2] -= 1
        elif self.direction == 'Down':
            self.position[2] += 1

    def turn_left(self):
        if self.direction == 'N':
            self.direction = 'W'
        elif self.direction == 'S':
            self.direction = 'E'
        elif self.direction == 'E':
            self.direction = 'N'
        elif self.direction == 'W':
            self.direction = 'S'
        # No change for Up and Down

    def turn_right(self):
        if self.direction == 'N':
            self.direction = 'E'
        elif self.direction == 'S':
            self.direction = 'W'
        elif self.direction == 'E':
            self.direction = 'S'
        elif self.direction == 'W':
            self.direction = 'N'
        # No change for Up and Down

    def turn_up(self):
        if self.direction not in ('Up', 'Down'):
            self.direction = 'Up'

    def turn_down(self):
        if self.direction not in ('Up', 'Down'):
            self.direction = 'Down'

    def execute_commands(self, commands):
        for command in commands:
            if command == 'f':
                self.move_forward()
            elif command == 'b':
                self.move_backward()
            elif command == 'l':
                self.turn_left()
            elif command == 'r':
                self.turn_right()
            elif command == 'u':
                self.turn_up()
            elif command == 'd':
                self.turn_down()

    def get_position(self):
        return tuple(self.position)

    def get_direction(self):
        return self.direction

# Example usage:
if __name__ == "__main__":
    starting_position = (0, 0, 0)
    starting_direction = 'N'
    commands = ["f", "r", "u", "b", "l"]

    chandrayaan = Chandrayaan3(starting_position, starting_direction)
    chandrayaan.execute_commands(commands)

    final_position = chandrayaan.get_position()
    final_direction = chandrayaan.get_direction()

    print("Final Position:", final_position)
    print("Final Direction:", final_direction)
