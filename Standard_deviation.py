from Variance import variance

def standard_deviation(X: list[int]) -> float:
    return variance(X) ** 0.5

#print(f"The standard deviation for the input is: {standard_deviation(X = [2,4,9])}")