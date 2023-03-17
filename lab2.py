# Лабораторная работа №2
import math
t = float(input("Введите число t: "))

x = float(input("Введите число x: "))
a = 9 * math.pi * t + 10 * math.cos(x) * math.e ** x
b = math.sqrt(t) - abs(math.sin(t))
c = a / b
print("Значение выражения равно: %.2f" % c)
