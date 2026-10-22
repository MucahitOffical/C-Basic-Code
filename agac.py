x = int(input("Kökü kaç olan bir ağaç çizdirmek istersin ? "))

if x % 2 == 0:
        space = (x-2)//2
        sayac = 2
else:
    space = (x-1)//2
    sayac = 1

while(sayac <= x):
    print(" "*space + "*"*sayac + " "*space)
    sayac += 2
    space -= 1