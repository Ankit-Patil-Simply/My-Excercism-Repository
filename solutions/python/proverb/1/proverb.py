def proverb(*input_data, qualifier = None):         
    result = []   
    for i, input in enumerate(input_data[:-1]):
        result.append(f'For want of a {input} the {input_data[i+1]} was lost.')   
    if input_data:
        if qualifier:
            result.append(f'And all for the want of a {qualifier} {input_data[0]}.')
        else:
            result.append(f'And all for the want of a {input_data[0]}.')    
    return result