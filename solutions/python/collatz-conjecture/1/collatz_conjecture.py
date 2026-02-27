def steps(number):
    if number <= 0:
        raise ValueError("Only positive integers are allowed")
    else:
        if number == 1: return 0
        steps = 0
        while number >= 1:
            if number == 1:
                return steps
            elif number % 2 == 0:
                steps += 1
                number //= 2
            else:
                steps += 1
                number = number * 3 + 1 