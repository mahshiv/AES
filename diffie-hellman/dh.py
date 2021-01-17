def diffie_hellman(p, g, a, b):
    A = (g ** a) % p
    B = (g ** b) % p
    key = (A ** b) % p
    print(A, B, key)


if __name__ == '__main__':
    p, g, a, b = input().split()
    diffie_hellman(int(p), int(g), int(a), int(b))
