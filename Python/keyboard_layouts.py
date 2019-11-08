Problem: https://codeforces.com/contest/831/problem/B

Solution:

a = raw_input()
b = raw_input()
texto = raw_input()
saida = ""
 
for i in range(len(texto)):
	if texto[i].isdigit():
		saida += texto[i]
	else:
		eh_maiuscula = False
		if texto[i].isupper():
			x = texto[i].upper()
			eh_maiuscula = True
		else:
			x = texto[i]
		for j in range(26):
			if a[j] == x.lower():
				if eh_maiuscula:
					saida += b[j].upper()
				else:
					saida += b[j]
				break
print saida

