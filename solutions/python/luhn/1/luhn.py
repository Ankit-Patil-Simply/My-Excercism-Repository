import string
class Luhn:
    number_string = None
    def __init__(self, card_num):
        self.number_string = card_num.translate({ord(c): None for c in string.whitespace})

    def valid(self):
        if self.number_string == "0":
            return False
        elif self.number_string.isdigit():
            luhn_num = ""
            for id, val in enumerate(self.number_string[::-1]):
                if id % 2 == 0:
                    luhn_num += val
                else:
                    if int(val) * 2 > 9:
                        luhn_num += str((int(val) * 2) - 9)
                    else:
                        luhn_num += str(int(val) * 2)
            total = 0
            result = None
            for num in luhn_num:
                total += int(num)
            result = True if total % 10 == 0 else False
            return result
        else:
            return False