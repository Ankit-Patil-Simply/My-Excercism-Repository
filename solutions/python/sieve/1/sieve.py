def primes(limit):
    prime = [True] * (limit + 1)
    i = 2
    while i * i <= limit:
        if prime[i]:
            for j in range(i * i, limit + 1, i):
                prime[j] = False
        i += 1
    result = []
    for j in range(2, limit + 1):
        if prime[j]:
            result.append(j)
    return result