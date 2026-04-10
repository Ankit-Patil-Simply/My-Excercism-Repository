import random

class Character:
    def __init__(self):
        self.strength = calculate(sorted([random.randint(1, 6) 
                        for _ in range(4)], reverse = True))
        self.dexterity = calculate(sorted([random.randint(1, 6) 
                        for _ in range(4)], reverse = True))
        self.constitution = calculate(sorted([random.randint(1, 6) 
                        for _ in range(4)], reverse = True))
        self.intelligence = calculate(sorted([random.randint(1, 6) 
                        for _ in range(4)], reverse = True))
        self.wisdom = calculate(sorted([random.randint(1, 6) 
                        for _ in range(4)], reverse = True))
        self.charisma = calculate(sorted([random.randint(1, 6) 
                        for _ in range(4)], reverse = True))
        self.hitpoints = 10 + modifier(self.constitution)
        
    def ability(self):
        return calculate(sorted([random.randint(1, 6) 
                    for _ in range(4)], reverse = True))

def calculate(lst):
    total = 0
    for i in range(len(lst) - 1):
        total += lst[i]
    return total
    
def modifier(value):
    return (value - 10) // 2