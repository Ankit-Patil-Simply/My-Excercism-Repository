def sum_of_multiples(limit, multiples):
    multipliers = []
    for multiple in multiples:
        multipliers += [multiple * i if multiple * i < limit else 0  for i in range(1, limit)]
    return sum(set(multipliers))