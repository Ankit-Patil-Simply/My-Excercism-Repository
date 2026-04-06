color_codes = {'black': 0, 'brown': 1, 'red': 2, 'orange': 3, 'yellow': 4, 
               'green': 5, 'blue': 6, 'violet': 7, 'grey': 8, 'white': 9}
def value(colors):
    result = ""
    for color in colors:
        result += str(color_codes[color])
        if len(result) == 2:
            return int(result)