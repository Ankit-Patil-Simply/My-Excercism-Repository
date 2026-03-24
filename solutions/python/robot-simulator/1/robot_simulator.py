# Globals for the directions
# Change the values as you see fit
EAST = "EAST"
NORTH = "NORTH"
WEST = "WEST"
SOUTH = "SOUTH"


class Robot:
    x_pos = 0
    y_pos = 0
    direction = None
    coordinates = None
        
    def __init__(self, direction=NORTH, x_pos=0, y_pos=0):
        self.x_pos = x_pos
        self.y_pos = y_pos
        self.direction = direction
        self.coordinates = (self.x_pos, self.y_pos)
        
    def advance(self, direction, amount = 1):
        if self.direction == "EAST":
            self.x_pos += amount
        elif self.direction == "NORTH":
            self.y_pos += amount 
        elif self.direction == "WEST":
            self.x_pos -= amount
        elif self.direction == "SOUTH":
            self.y_pos -= amount 
        self.coordinates = (self.x_pos, self.y_pos)
        

    def change_direction(self, turn):
        if self.direction == EAST and turn == "R":
            self.direction = SOUTH
        elif self.direction == EAST and turn == "L":
            self.direction = NORTH
        elif self.direction == WEST and turn == "R":
            self.direction = NORTH
        elif self.direction == WEST and turn == "L":
            self.direction = SOUTH
        elif self.direction == NORTH and turn == "R":
            self.direction = EAST
        elif self.direction == NORTH and turn == "L":
            self.direction = WEST
        elif self.direction == SOUTH and turn == "R":
            self.direction = WEST
        elif self.direction == SOUTH and turn == "L":
            self.direction = EAST

    def move(self, orders):
        for order in orders:
            if order in "LR":
                self.change_direction(order)
            else:
                self.advance(order)