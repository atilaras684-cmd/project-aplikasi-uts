# 1. Input user
print("====================\n")
print("    TEMAN TAGIH     \n")
print("====================\n")

nama = input("Nama peminjam: ")
pinjaman = int(input("Jumlah pinjaman: Rp"))
lama = int(input("Lama pinjaman (bulan): "))
bayar = int(input("Sudah dibayar: Rp"))

# 2. Operasi aritmatika
biaya = pinjaman * 10 // 100
total = pinjaman + biaya
cicilan = total / lama
sisa = total - bayar
sisa_pembagian = total % lama

# 3. Menghitung hasil
print("\n========== HASIL ==========")
print("Nama peminjam :", nama)
print("Jumlah pinjaman : Rp", pinjaman)
print("Biaya 10%      : Rp", biaya)
print("Total utang    : Rp", total)
print("Cicilan/bulan  : Rp", cicilan)
print("Sudah dibayar  : Rp", bayar)
print("Sisa utang     : Rp", sisa)
print("Sisa Pembagian        :", sisa_pembagian)
print("============================")
