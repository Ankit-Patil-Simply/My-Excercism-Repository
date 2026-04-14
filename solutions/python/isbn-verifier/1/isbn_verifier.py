def is_valid(isbn):
    if '-' in isbn:
        isbn = ''.join(isbn.split('-'))
    if len(isbn) < 10 or len(isbn) > 10 or (isbn[-1] != 'X' and isbn[-1] not in '0123456789') or not isbn[:-1].isdigit():
        return False
    total = 0
    for id, val in enumerate(isbn):
        if val == 'X':
            total += (id + 1) * 10
        else:
            total += (id + 1) * int(val)
    total %= 11
    if total:
        return False
    else:
        return True