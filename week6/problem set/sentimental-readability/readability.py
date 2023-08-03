# TODO
from cs50 import get_string

def main():
    text = get_string("Text: ")
    letters, words, sentences = count_elements(text)

    L = (letters / words) * 100
    S = (sentences / words) * 100
    index = 0.0588 * L - 0.296 * S - 15.8

    grade_level = round(index)

    if grade_level >= 16:
        print("Grade 16+")
    elif grade_level < 1:
        print("Before Grade 1")
    else:
        print(f"Grade {grade_level}")

def count_elements(text):
    letters = 0
    words = 1  # Initialize to 1 to account for the last word without a space after it
    sentences = 0

    for char in text:
        if char.isalpha():
            letters += 1
        elif char.isspace():
            words += 1
        elif char in ['.', '!', '?']:
            sentences += 1

    return letters, words, sentences

if __name__ == "__main__":
    main()