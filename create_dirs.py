import os

# Create the directory structure for pointer concepts under Fundamental
dirs = [
    "C:/notes-vault/Fundamental/Pointers",
    "C:/notes-vault/Fundamental/Pointers/problems",
    "C:/notes-vault/Fundamental/Pointers/problems/single_double_pointers"
]

for dir_path in dirs:
    os.makedirs(dir_path, exist_ok=True)
    print(f"Created directory: {dir_path}")