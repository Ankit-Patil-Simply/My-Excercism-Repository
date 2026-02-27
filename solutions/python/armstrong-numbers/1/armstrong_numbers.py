def is_armstrong_number(number):
    if number == 0:
        return True
    digits = len(str(number))
    num = number
    is_armstrong_number = 0
    for i in range(digits):
        is_armstrong_number += pow(num % 10, digits)
        num //= 10
    return is_armstrong_number == number