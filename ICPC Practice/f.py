import math
from fractions import Fraction

def calculate_inradius(a, b, c):
    s = (a + b + c) / 2.0
    area = math.sqrt(s * (s - a) * (s - b) * (s - c))
    r = area / s
    return r * r

# Main function to process multiple test cases
def main():
    tc = int(input())
    for _ in range(tc):
        a, b, c = map(float, input().split())
        result = calculate_inradius(a, b, c)

        fraction = Fraction(result).limit_denominator()
        # Explicitly show the fraction as "numerator/denominator"
        print(f"{fraction.numerator}/{fraction.denominator}")

if __name__ == "__main__":
    main()
