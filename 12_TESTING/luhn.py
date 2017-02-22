def is_luhn_valid(n):
    n = str(n)
    card_length = len(n)
    s = 0
    if card_length%2==0:
        for i, j in enumerate(n):
            j = int(j)
            if i%2==0:
                dbld = 2*j
                s += dbld if dbld<9 else dbld-9
            else:
                s+=j
    else:
        for i, j in enumerate(n):
            j = int(j)
            if i%2!=0:
                dbld = 2*j
                s += dbld if dbld<9 else dbld-9
            else:
                s+=j
    if s%10==0:
        return True
    else:
        return False

print is_luhn_valid(488913194231919)