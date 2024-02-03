def pali(palabra):
    palabra_reversa = palabra[::-1]
    if palabra == palabra_reversa:
        return True
    else:
        return False

print(pali('ana'))

