def transpose(text):
    result = []
    for r, line in enumerate(text.splitlines()):
        for c, char in enumerate(line):
            while len(result) <= c:
                result.append([])
            while len(result[c]) < r:
                result[c].append(' ')
            result[c].append(char)
    return '\n'.join(''.join(row) for row in result)