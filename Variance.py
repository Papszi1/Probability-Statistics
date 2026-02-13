import numpy as np

def expected_value_calculation(X: list[float]) -> float:
    return np.mean(X)

def variance(X: list[float]) -> float:
    Xexp = expected_value_calculation(X)
    Xsqrexp = expected_value_calculation(np.square(X))
    print(f"The variance for the input is: {Xsqrexp - (Xexp**2)}")
    return Xsqrexp - (Xexp**2)

variance(X = [2,4,9])