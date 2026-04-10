def largest_product(series, size):
    if size > len(series):
        # span of numbers is longer than number series
        raise ValueError("span must not exceed string length")
    elif size < 0:
        # span of number is negative
        raise ValueError("span must not be negative")
    elif not series.isdigit():
        # series includes non-number input
        raise ValueError("digits input must only contain digits")
        
    possbilities = [series[id : id + size] for id in range(len(series)) 
                    if id + size <= len(series)]

    products = [0 if '0' in item else calculate_product(int(item))
               for item in possbilities]
    return max(products)

def calculate_product(item):
    if item < 10:
        return item
    return (item % 10) * calculate_product(item // 10)