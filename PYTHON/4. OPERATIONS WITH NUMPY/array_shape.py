import numpy as np
a=[1,2,3,4,5]
a_numpy=np.array(a)
row_vector=a_numpy[:,np.newaxis]
column_vector=a_numpy[np.newaxis,:]
print("Row Vector Shape: ",row_vector.shape)
print("Column Vector Shape: ",column_vector.shape)
reshaped_array=np.arange(15).reshape(3,5)
print("Reshaped Array:\n",reshaped_array)