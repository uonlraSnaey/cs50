# TODO
def print_half_pyramid(height):
    for i in range(1, height + 1):
        spaces = " " * (height - i)
        hashes = "#" * i
        print(spaces + hashes)

if __name__ == "__main__":
    while True:
        height_input = input("Height: ")
        if height_input.isdigit():
            height = int(height_input)
            if 1 <= height <= 8:
                break
        print("高度为 1 - 8.")

    print_half_pyramid(height)