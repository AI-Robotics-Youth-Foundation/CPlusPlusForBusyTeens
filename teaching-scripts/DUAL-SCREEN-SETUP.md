# 🖥️ Dual-Screen Presentation Setup

This guide shows you how to integrate your teaching scripts with the slide presentation for seamless dual-screen teaching.

## 🎯 Option 1: Reveal.js Speaker Notes (Recommended)

### How It Works

- One screen shows slides to students
- Another screen shows your teaching script (speaker notes)
- Built-in timer and slide preview
- Press `S` during presentation to open speaker view

### Setup Instructions

1. **Use the Enhanced Slides File**: Open `slides-with-scripts.html` instead of the regular `slides.html`

2. **Start Presentation**:

   ```bash
   # Open in your browser
   open slides-with-scripts.html
   ```

3. **Open Speaker View**:

   - Press `S` key during presentation
   - Or manually open speaker view window
   - Position one window on each screen

4. **Teaching Mode**:
   - **Student screen**: Shows clean slides
   - **Teacher screen**: Shows slide + full teaching script + timer + next slide preview

### Features

- ✅ Built-in timer for each slide
- ✅ Preview of next slide
- ✅ Full teaching script with timing cues
- ✅ Stage directions and interaction prompts
- ✅ Works with any number of screens

## 🎯 Option 2: Side-by-Side Browser Setup

### Quick Setup (2 minutes)

1. Open two browser windows
2. **Window 1**: `slides.html` (for projection/students)
3. **Window 2**: Teaching script files in VS Code or browser
4. Use arrow keys to sync slide navigation

### Folder Navigation

```
teaching-scripts/
├── 00-introduction/
│   ├── slide01-script.md
│   ├── slide02-script.md
│   └── ...
├── 01-lesson1-first-application/
│   ├── lesson-overview.md
│   ├── slide08-script.md
│   └── ...
```

## 🎯 Option 3: Script Overlay (Advanced)

For tech-savvy educators who want a more integrated experience:

### Features

- Scripts appear as overlay on top of slides
- Toggle on/off with keyboard shortcut
- Customizable transparency and position

### Implementation

See `slides-with-overlay.html` (if you want me to create this version)

## 📱 Mobile/Tablet Option

Use your phone or tablet as a "teleprompter":

1. Open teaching scripts on mobile device
2. Position device near computer screen
3. Navigate scripts manually or use auto-scroll
4. Students see clean presentation, you see scripts

## 🎮 Controls & Navigation

### Reveal.js Keyboard Shortcuts

- `→` / `Space` - Next slide
- `←` - Previous slide
- `S` - Open speaker view
- `F` - Fullscreen
- `Esc` - Slide overview
- `B` - Blackout screen

### Speaker View Controls

- **Timer**: Shows elapsed time
- **Slide**: Current slide content
- **Notes**: Your teaching script
- **Next**: Preview of next slide
- **Reset**: Restart timer

## 🔧 Troubleshooting

### Speaker View Won't Open

- Make sure popups are enabled in your browser
- Try manual URL: Add `?print-pdf#/speaker-notes` to your slide URL
- Some browsers block multiple windows - try Chrome or Firefox

### Scripts Not Showing

- Check that you're using `slides-with-scripts.html`
- Verify that slides have `<aside class="notes">` sections
- Try refreshing both windows

### Sync Issues

- Use the same browser for both windows
- Navigate using keyboard (arrow keys) rather than clicking
- Both windows should stay in sync automatically

## 💡 Teaching Tips

### Preparation

- Practice with dual screens before class
- Have backup plan (printed scripts)
- Test all equipment beforehand

### During Class

- Keep scripts window positioned where students can't see it
- Use the timer to pace yourself
- Follow the stage directions for better engagement

### Backup Options

- Print key slides with scripts attached
- Have scripts on mobile device
- Use simple markdown viewer for script files

## 🚀 Quick Start Checklist

- [ ] Download/open `slides-with-scripts.html`
- [ ] Set up dual monitor or use two devices
- [ ] Press `S` to open speaker view
- [ ] Position windows appropriately
- [ ] Test navigation with arrow keys
- [ ] Practice with first few slides

## 📞 Need Help?

If you need assistance setting this up or want additional features, let me know! I can:

- Create custom overlay versions
- Add more interactive features
- Help troubleshoot technical issues
- Create mobile-optimized script viewers
