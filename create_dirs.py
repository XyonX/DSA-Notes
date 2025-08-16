import os

# Create the directory structure for pointer concepts
dirs = [
    "C:/notes-vault/OOP/Pointers",
    "C:/notes-vault/OOP/Pointers/problems",
    "C:/notes-vault/OOP/Pointers/problems/single_double_pointers"
]

for dir_path in dirs:
    os.makedirs(dir_path, exist_ok=True)
    print(f"Created directory: {dir_path}")