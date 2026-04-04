def prime(number):
    if number < 1:
        raise ValueError('there is no zeroth prime')
    num = 1
    while number:
        num += 1
        check_prime = True
        for i in range(2, (num // 2) + 1):
            if num % i == 0:
                check_prime = False
                break
        if check_prime:
            number -= 1
    return num