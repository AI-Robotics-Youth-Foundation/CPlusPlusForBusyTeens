#!/usr/bin/env python3
"""
Script to integrate teaching scripts into slides as speaker notes.
Usage: python add-speaker-notes.py
"""

import os
import re
from pathlib import Path


def read_teaching_script(script_path):
    """Read a teaching script file and return formatted HTML."""
    if not os.path.exists(script_path):
        return ""
    
    with open(script_path, 'r', encoding='utf-8') as f:
        content = f.read()
    
    # Convert markdown to HTML for speaker notes
    # Simple conversion - you might want to use a proper markdown parser
    content = content.replace('**', '<strong>').replace('**', '</strong>')
    content = content.replace('_[', '<em>[').replace(']_', ']</em>')
    content = re.sub(r'^### (.+)$', r'<h3>\1</h3>', content, flags=re.MULTILINE)
    content = re.sub(r'^## (.+)$', r'<h2>\1</h2>', content, flags=re.MULTILINE)
    
    # Convert lines to paragraphs
    lines = content.split('\n')
    html_lines = []
    for line in lines:
        line = line.strip()
        if line and not line.startswith('<h'):
            html_lines.append(f'<p>{line}</p>')
        elif line.startswith('<h'):
            html_lines.append(line)
    
    return '\n'.join(html_lines)

def main():
    """Main function to integrate scripts."""
    # Define script mappings
    script_mappings = {
        1: "teaching-scripts/00-introduction/slide01-script.md",
        2: "teaching-scripts/00-introduction/slide02-script.md", 
        3: "teaching-scripts/00-introduction/slide03-script.md",
        4: "teaching-scripts/00-introduction/slide04-script.md",
        5: "teaching-scripts/00-introduction/slide05-script.md",
        6: "teaching-scripts/00-introduction/slide06-script.md",
        8: "teaching-scripts/01-lesson1-first-application/slide08-script.md",
        11: "teaching-scripts/01-lesson1-first-application/slide11-script.md",
        12: "teaching-scripts/01-lesson1-first-application/slide12-script.md",
    }
    
    print("🎭 Teaching Script Integration Tool")
    print("===================================")
    print("\nThis tool helps you add speaker notes to your slides.")
    print("Currently integrated slides:")
    
    for slide_num, script_path in script_mappings.items():
        if os.path.exists(script_path):
            print(f"  ✅ Slide {slide_num}: {script_path}")
        else:
            print(f"  ❌ Slide {slide_num}: {script_path} (missing)")
    
    print(f"\n📁 Available script files:")
    for root, dirs, files in os.walk("teaching-scripts"):
        for file in files:
            if file.endswith("-script.md"):
                print(f"  📄 {os.path.join(root, file)}")
    
    print(f"\n🎯 To add more speaker notes:")
    print("1. Edit slides-with-scripts.html")
    print("2. Find the <section> for your slide")
    print("3. Add <aside class=\"notes\"> with your script content")
    print("4. Use the format shown in the existing slides")
    
    print(f"\n🚀 To use dual-screen presentation:")
    print("1. Open slides-with-scripts.html in your browser")
    print("2. Press 'S' to open speaker view")
    print("3. Position windows on different screens")
    print("4. Navigate with arrow keys")

if __name__ == "__main__":
    main() 