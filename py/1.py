def validar(nombre):
    cont = len(nombre)
    
    if cont >=6 and cont <=12:
        print('comprobando que es alfanumerico'.upper())
        while not nombre.isalnum() or nombre.isalpha():
            print('Por favor el nombre ingresado no es correcto')
            nombre = input('ingresa un nombre nuevo : ')
            
    elif cont<6:
        print('el nombre de usuario al menos debe de contener 6 caracteres')
    elif cont> 12:
        print('el nombre de usuario no puede contener mas de 12 caracteres')
    
    print('El nombre es valid')

n = input('digite el nombre : ')
validar(n)
