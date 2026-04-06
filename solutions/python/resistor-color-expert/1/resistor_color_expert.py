color_codes = {'black': 0, 'brown': 1, 'red': 2, 'orange': 3, 'yellow': 4,
               'green': 5, 'blue': 6, 'violet': 7, 'grey': 8, 'white': 9}
def value(colors):
    ohms = ""
    if len(colors) == 1:
        ohms = str(color_codes[colors[0]])
        return ohms
    for color in colors[:-2]:
        ohms += str(color_codes[color])
    return ohms
            
def label(colors):
    ohms = value(colors)
    if len(colors) == 1:
        return f"{ohms} ohms"
    if colors[-2] == "brown": ohms +=  "0" * 1
    elif colors[-2] == "red": ohms += "0" * 2
    elif colors[-2] == "orange": ohms += "0" * 3
    elif colors[-2] == "yellow": ohms += "0" * 4
    elif colors[-2] == "green": ohms += "0" * 5
    elif colors[-2] == "blue": ohms += "0" * 6
    elif colors[-2] == "violet": ohms += "0" * 7
    elif colors[-2] == "grey": ohms += "0" * 8
    elif colors[-2] == "white": ohms += "0" * 9
    ohms = int(ohms)
    
    if ohms < 1000:
        return f"{ohms} ohms"
    elif ohms <= 1000000:
        return f"{ohms/1000:g} kiloohms"
    elif ohms <= 1000000000:
        return f"{ohms/1000000:g} megaohms"
    else:
        return f"{ohms/1000000000:g} gigaohms"
        
def resistor_label(colors):
    tolerance = {"grey": " ±0.05%", "violet": " ±0.1%", "blue": " ±0.25%", 
                 "green": " ±0.5%", "brown": " ±1%", "red": " ±2%", 
                 "gold": " ±±5%", "silver": " ±10%"}
    ohms = str(label(colors))
    if len(colors) == 1:
        return ohms
    ohms += tolerance[colors[-1]]
    return ohms