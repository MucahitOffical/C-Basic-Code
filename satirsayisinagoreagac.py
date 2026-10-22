satir = int(input("Kaç satırlık ağaç istiyorsun ? "))

sayac = 1

while(sayac != satir):
    print(" "*(satir-sayac) + "*"*(sayac*2 -1))
    sayac += 1