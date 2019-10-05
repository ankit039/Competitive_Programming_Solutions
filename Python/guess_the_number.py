#coding: utf-8
import random
choice_num = random.randint(0, 20)
bigger = None
smaller = None
winner = False

for n in range(0, 5):
    n = input("Tente adivinhar o numero certo! voce tem 5 tentativas:")
    if n == choice_num:
        winner = True
        break
    else:
        print("Tente novamente!")
        if n > choice_num:
            print("e menor que %s "% n)
        elif n < choice_num:
            print("e maior que %s"% n)
if winner == True:
    print("Voce acertou!")
else:
    print("Voce perdeu!")