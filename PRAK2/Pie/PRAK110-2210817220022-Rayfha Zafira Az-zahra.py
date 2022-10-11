import math
print("Diketahui :")
a = 12
c = 5
print("Alas =", c,"cm")
print("Tinggi =", a,"cm\n")

print("Jawab :")
p = (a**2) + (c**2)
b = math.sqrt(p)
print("Sisi A =", a,"cm")
print("Sisi B =", round(b),"cm")
print("Sisi C =", c,"cm")
k = a + b + c
print("Keliling =", round(k),"cm")
l = 0.5 * a * c
print("Luas =", round(l),"cm")