# Use map to pass time limit
max_map = {}
for i in range(12):
    max_map[i] = i

def get_max_dollars(coin):
    if coin in max_map:
        return max_map[coin]

    half = coin // 2
    if half >= 12:
        half = get_max_dollars(half)

    third = coin // 3
    if third >= 12:
        third = get_max_dollars(third)

    quarter = coin // 4
    if quarter >= 12:
        quarter = get_max_dollars(quarter)

    bank_val = half + third + quarter

    max_map[coin] = coin if coin > bank_val else bank_val
    return max_map[coin]


while True:
    try:
        print(get_max_dollars(int(input())))
    except EOFError as e:
        break

