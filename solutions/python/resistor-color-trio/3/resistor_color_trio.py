color_codes = {'black': 0, 'brown': 1, 'red': 2, 'orange': 3, 
                   'yellow': 4, 'green': 5, 'blue': 6, 'violet': 7, 
                   'grey': 8, 'white': 9}
    
def value(colors):
    ohms = ""
    for color in colors:
        ohms += str(color_codes[color])
        if len(ohms) == 2:
            return ohms
            
def label(colors):
    ohms = value(colors)
    if len(colors) > 3: ohms += "0"
    if colors[-1] == "brown": ohms = ohms + "0" * 1
    elif colors[-1] == "red": ohms = ohms + "0" * 2
    elif colors[-1] == "orange": ohms = ohms + "0" * 3
    elif colors[-1] == "yellow": ohms = ohms + "0" * 4
    elif colors[-1] == "green": ohms = ohms + "0" * 5
    elif colors[-1] == "blue": ohms = ohms + "0" * 6
    elif colors[-1] == "violet": ohms = ohms + "0" * 7
    elif colors[-1] == "grey": ohms = ohms + "0" * 8
    elif colors[-1] == "white": ohms = ohms + "0" * 9
    ohms = int(ohms)
    
    if ohms <= 1000:
        return f"{ohms} ohms"
    elif ohms <= 1000000:
        return f"{ohms//1000} kiloohms"
    elif ohms <= 1000000000:
        return f"{ohms//1000000} megaohms"
    else:
        return f"{ohms//1000000000} gigaohms"