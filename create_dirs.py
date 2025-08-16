import os

# Create the directory structure for merge sort
dirs = [
    "C:/notes-vault/DSA/Sorting",
    "C:/notes-vault/DSA/Sorting/problems",
    "C:/notes-vault/DSA/Sorting/problems/merge_sort"
]

for dir_path in dirs:
    os.makedirs(dir_path, exist_ok=True)
    print(f"Created directory: {dir_path}")