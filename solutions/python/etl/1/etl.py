def transform(legacy_data):
    new_dict = {}
    for key, values in legacy_data.items():
        for value in values:
            new_dict[value.lower()] = key
    return new_dict