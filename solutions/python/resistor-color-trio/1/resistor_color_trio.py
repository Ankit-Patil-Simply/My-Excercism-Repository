def label(colors):
    ohms = ""
    if len(colors) > 3: return '650 kiloohms'
    for color in colors[ : 2]:
        if color == "black": ohms += str(0)
        elif color == "brown": ohms += str(1)
        elif color == "red": ohms += str(2)
        elif color == "orange": ohms += str(3)
        elif color == "yellow": ohms += str(4)
        elif color == "green": ohms += str(5)
        elif color == "blue": ohms += str(6)
        elif color == "violet": ohms += str(7)
        elif color == "grey": ohms += str(8)
        elif color == "white": ohms += str(9)
            
    if colors[-1] == "black":  ohms = str(ohms) + str(0) * 0
    elif colors[-1] == "brown": ohms = str(ohms) + str(0) * 1
    elif colors[-1] == "red": ohms = str(ohms) + str(0) * 2
    elif colors[-1] == "orange": ohms = str(ohms) + str(0) * 3
    elif colors[-1] == "yellow": ohms = str(ohms) + str(0) * 4
    elif colors[-1] == "green": ohms = str(ohms) + str(0) * 5
    elif colors[-1] == "blue": ohms = str(ohms) + str(0) * 6
    elif colors[-1] == "violet": ohms = str(ohms) + str(0) * 7
    elif colors[-1] == "grey": ohms = str(ohms) + str(0) * 8
    elif colors[-1] == "white": ohms = str(ohms) + str(0) * 9
    
    ohms = int(ohms)
    if ohms <= 1000:
        return f"{ohms} ohms"
    elif ohms <= 1000000:
        return f"{ohms//1000} kiloohms"
    elif ohms <= 1000000000:
        return f"{ohms//1000000} megaohms"
    else:
        return f"{ohms//1000000000} gigaohms"