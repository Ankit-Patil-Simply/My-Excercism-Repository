def egg_count(display_value):
    binary = ""
    egg_count = 0
    while display_value:
        binary += str(display_value % 2)
        display_value //= 2
    for bit in binary:
        if bit == '1':
            egg_count += 1
    return egg_count