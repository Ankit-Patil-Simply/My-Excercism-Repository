def square_root(number):
    if number == 1:
        return 1
    else:
        for num in range(number // 2 + 1):
            if num ** 2 == number:
                return num