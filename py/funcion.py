def mostrar_Precio_Final(producto, precio, descuento):
    precio_Final= precio -(precio * (descuento/100))
    print(f'el {producto} tiene el costo de {precio} soles, con un descuento del {descuento}, por lo que costaria {precio_Final} ')

mostrar_Precio_Final("short", 40.0, 20)
mostrar_Precio_Final("pantalon", 50.0, 30)
