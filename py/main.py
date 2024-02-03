producto = input('Digite el nombre del producto : ')
precio = float(input('Digite el precio del producto : '))
descuento = int(input('Digite el descuento del producto : '))
precio_final = precio - (precio * (descuento/100)) 
print(f'el {producto} tiene el costo de {precio} soles, con un descuento del {descuento}, por lo que costaria {precio_final} ')
 
