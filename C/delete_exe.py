import os

# Get the current working directory
directory = os.getcwd()

# Walk through the directory and its subdirectories
for root, dirs, files in os.walk(directory):
    for file in files:
        if file.endswith('.exe'):
            file_path = os.path.join(root, file)
            try:
                os.remove(file_path)
                print(f"Deleted: {file_path}")
            except Exception as e:
                print(f"Failed to delete {file_path}: {e}")

print("All .exe files have been deleted from the current directory and its subdirectories.")
