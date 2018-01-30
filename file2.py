from sklearn.datasets import load_iris
import numpy as np

iris = load_iris()
test_idx = [0, 50, 100]
print(iris.feature_names)
print(iris.target_names)
print(iris.data[0])
print(iris.target[0])

#training
train_target = np.delete(iris.target, test_idx)