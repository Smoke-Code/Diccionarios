#clase 
class persona:
    nombre = ""
    edad = 0

# Objetos

juan = Persona()
juan.nombre = "juan"
juan.edad = 25

#Metodos 

class persona:
    def hablar(self):
        print('Hola mi nombre es', self.nombre)

#Herencia 
class Estudiantes (Persona):
    pass 

#Encapsulamiento

class Persona:
    def __init__(self, nombre, edad):
        self.__nombre = nombre
        self.__edad = edad

    def get_nombre(self):
        return self.nombre
persona1 = Persona('Juan', 25)
print(persona1.get_nombre*()) # Accediendo por el metodo
print(persona1.__nombre) # esto es un error

#poliformismo

class Perro:
    def hablar(self):
        print('Guau!')
class Gato:
    def hablar((self):
        print('Miau!')
perro = Perro()
gato = Gato()

perro.hablar()
gato.hablar()
               
