def is_valid(isbn):
    if '-' in isbn:
        isbn = isbn.replace('-', '')
    if len(isbn) != 10 or isbn[-1] not in '0123456789X' or not isbn[:-1].isdigit():
        return False
    total = 0
    for id, val in enumerate(isbn):
        if val == 'X':
            total += (id + 1) * 10
        else:
            total += (id + 1) * int(val)
    return total % 11 == 0