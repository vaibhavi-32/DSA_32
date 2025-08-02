import numpy as np
arr=np.array([1,2,3,4])
print(type(arr))

print("----------------------------------")
matrix = np.array([[1,2],[3,4]])
print(matrix)

print("----------------------------------")

arr = np.arange(0,10,2)
print(arr)

print("----------------------------------")

arr = np.linspace(0,1,5)
print(arr)

print("----------------------------------")

zeros = np.zeros((2,3))
ones = np.ones((3,2))
print(zeros)
print(ones)

print("----------------------------------")

filled = np.full((2,2),7)
print(filled)

print("----------------------------------")

identity = np.eye(3)
print(identity)

print("----------------------------------")

empty_arr = np.empty((2,2))
print(empty_arr)

print("----------------------------------")

arr=np.array([1,2,3])
print(arr.dtype)

print("----------------------------------")

float_arr=np.array([1,2,3],dtype='float32')
print(float_arr)

print("----------------------------------")

arr=np.array([1.7,2.8,3.2])
new_arr=arr.astype('int32')
print(new_arr)

print("----------------------------------")

print(arr.dtype==np.float64)

print("----------------------------------")

arr=np.array([1,2.5,'3'])
print(arr)

print("----------------------------------")

print(arr.shape)

print("----------------------------------")

arr.shape = (3)#fixed error
print(arr)

print("----------------------------------")

print(arr.size)

print("----------------------------------")

print(arr.ndim)

print("----------------------------------")

print(arr.itemsize)

print("----------------------------------")

print(arr.dtype)

print("----------------------------------")

print(arr.nbytes)

print("----------------------------------")

a= np.array([5,8,12])
print(a)

print("----------------------------------")

a = np.arange(5,14,2)
print(a)

print("----------------------------------")

a = np.arange(-5,0,1)
print(a)

print("----------------------------------")

arr = np.array([[1,2,3,4],[5,6,7,8],[9,10,11,12]])
print(arr)

print("----------------------------------")

shape = (3,4)
arr = np.zeros(shape)
print(arr)

print("----------------------------------")


shape = (3,4)
arr = np.ones(shape)
print(arr)

print("----------------------------------")

shape = (3,4)
arr = np.empty(shape)
print(arr)
