import pytest
import Rectangle_1.Line_A.A1 as A1


def test_1():

    arr1 = [1, 1, 1]
    arr2 = [1, 1, 1]
    var = 4

    assert A1.bison(arr1, arr2, 4) == "YES"

def test_2():
    arr1 = [1, 1, 3]
    arr2 = [2, 3, 4]
    var = 2

    assert A1.bison(arr1, arr2, 4) == "YES"

def test_3():
    arr1 = [1, 0, 0]
    arr2 = [1, 0, 0]
    var = 1

    assert A1.bison(arr1, arr2, 4) == "NO"