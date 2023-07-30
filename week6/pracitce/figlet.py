from pyfiglet import Figlet

def render_text(text: str, font: str) -> str:
    figlet = Figlet(font=font)
    return figlet.renderText(text)

def main():
    try:
        font = input("font: ")
        if not font.strip():
            raise ValueError("Font name cannot be empty.")
        
        text = input("words: ")
        if not text.strip():
            raise ValueError("Text cannot be empty.")
        
        rendered_text = render_text(text, font)
        print(rendered_text)
        
    except ValueError as ve:
        print(f"Error: {ve}")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

if __name__ == "__main__":
    main()
