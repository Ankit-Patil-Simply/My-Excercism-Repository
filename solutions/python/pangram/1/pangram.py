def is_pangram(sentence):
    alphabets = []
    for alphabet in sentence.strip().lower():
        if alphabet == " ":
            continue
        elif alphabet.isalpha() and alphabet not in alphabets:
            alphabets.append(alphabet)
    
    return True if len(alphabets) == 26 else False