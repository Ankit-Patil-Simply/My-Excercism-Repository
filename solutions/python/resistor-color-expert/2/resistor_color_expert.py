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
    ohms += "0" * color_codes[colors[-2]]
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