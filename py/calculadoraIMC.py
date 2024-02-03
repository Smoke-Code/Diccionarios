def calculando_IMC(peso, altura):
    imc = peso /(altura * altura)
    if(imc <=19):
        print('eres delgado')
    elif(imc >= 20 and imc <=25):
        print('peso normal')
    elif(imc >=26 and imc <=30):
        print('tienes sobrepeso')
    elif(imc > 30):
        print('sufres de obesidad') 
    

dato1 = float(input('Digite el peso :'))
dato2 = float(input('Digite la altura : '))
calculando_IMC(dato1, dato2)
       
       
