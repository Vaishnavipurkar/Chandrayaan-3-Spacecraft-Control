class Chandrayaan3:
    def __init__(self, initial_position, initial_direction):
        self.position = list(initial_position)
        self.direction = initial_direction

        # Define direction changes for movement and rotation
        self.direction_changes = {
            'N': (0, 1, 0),
            'S': (0, -1, 0),
            'E': (1, 0, 0),
            'W': (-1, 0, 0),
            'Up': (0, 0, 1),
            'Down': (0, 0, -1),
        }

        self.rotation_changes = {
            'l': {'N': 'W', 'W': 'S', 'S': 'E', 'E': 'N'},
            'r': {'N': 'E', 'E': 'S', 'S': 'W', 'W': 'N'},
            'u': {'N': 'Up', 'Up': 'S', 'S': 'Down', 'Down': 'N'},
            'd': {'N': 'Down', 'Down': 'S', 'S': 'Up', 'Up': 'N'},
        }

    def move(self, direction):
        dx, dy, dz = self.direction_changes[direction]
        self.position[0] += dx
        self.position[1] += dy
        self.position[2] += dz

    def rotate(self, rotation):
        self.direction = self.rotation_changes[rotation][self.direction]

    def execute_commands(self, commands):
        for command in commands:
            if command in ['f', 'b']:
                self.move(command)
            elif command in ['l', 'r', 'u', 'd']:
                self.rotate(command)

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
