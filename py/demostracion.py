while True:
    numero = input('Introduzca un numero entre 1 y 10 : ')
    try:
        numero = int(numero)
    except:
        pass
    else:
        if 1 <= numero <=10:
            break

print('estamos seguros de que ', numero,
      'se encuentra entre el 1 y el 10 inlcuidos ')
