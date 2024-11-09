def calculate_expected_weights(N, red_weights, green_weights):
    MOD = 998244353

    # Calculate expected weights
    expected_weights = [(red_weights[i] + green_weights[i]) / 2 for i in range(N)]

    # Sort expected weights in descending order
    expected_weights.sort(reverse=True)

    # Calculate cumulative sums
    results = []
    cumulative_sum = 0

    for k in range(1, N + 1):
        cumulative_sum += expected_weights[k - 1]
        P = int(cumulative_sum * 2)  # Multiply by 2 to avoid fractions
        Q_inv = pow(2, MOD - 2, MOD)  # Q^-1 mod MOD using Fermat's Little Theorem
        results.append((P % MOD, Q_inv))  # Store (P mod MOD, Q^-1)

    return results

# Sample Input
N = 10
red_weights = [3, 1, 5, 3, 1, 3, 5, 4, 2, 2]
green_weights = [3, 3, 1, 2, 2, 5, 3, 5, 1, 5]

# Calculate and format output
output = calculate_expected_weights(N, red_weights, green_weights)
formatted_output = ' '.join(f"{p} {q}" for p, q in output)
print(formatted_output)