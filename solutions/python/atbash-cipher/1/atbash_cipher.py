plain = list('abcdefghijklmnopqrstuvwxyz')
cipher = list('zyxwvutsrqponmlkjihgfedcba')

def encode(plain_text):
    ciphered_text = ""
    for letter in plain_text.lower():
        if letter in ",. ":
            continue
        if letter.isdigit():
            ciphered_text += letter
        else:
            ciphered_text += cipher[plain.index(letter)]
        if (len(ciphered_text) - ciphered_text.count(" ")) % 5 == 0:
            ciphered_text += " "
    return ciphered_text.strip()

def decode(ciphered_text):
    plain_text = ""
    for letter in ciphered_text:
        if letter == " ":
            continue
        if letter.isdigit():
            plain_text += letter
        else:
            plain_text += plain[cipher.index(letter)]
    return plain_text