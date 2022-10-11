a = int(input("Harga sepatu A adalah "))
b = int(input("Harga sepatu B adalah "))
d1 = 0.13
h1 = a - (a * d1)
d2 = 0.21
h2 = b - (b * d2)

print("Sepatu A mendapat diskon 13% sehingga harganya menjadi ", round(h1))
print("Sepatu B mendapat diskon 21% sehingga harganya menjadi ", round(h2))