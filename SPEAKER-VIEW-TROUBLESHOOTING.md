# 🔧 Speaker View Troubleshooting

## 🚀 Quick Fix Steps

### Step 1: Try Opening Speaker View Again

1. **Refresh the page**: `slides-with-scripts.html`
2. **Press `S` key** (make sure you're focused on the slide window)
3. **Check for popup blocker warning** in your browser

### Step 2: If Popup is Blocked

**Chrome/Safari/Firefox:**

- Look for popup blocked icon in address bar
- Click it and select "Always allow popups"
- Try pressing `S` again

### Step 3: Manual Method (Always Works!)

If automatic popup doesn't work:

1. **Copy your current URL**, for example:

   ```
   file:///Users/robert/devel/Training/CPlusPlus/slides-with-scripts.html
   ```

2. **Open a new browser window**

3. **Paste the URL and add `?speaker-view=true`**:

   ```
   file:///Users/robert/devel/Training/CPlusPlus/slides-with-scripts.html?speaker-view=true
   ```

4. **Position the windows**:
   - Original window: Student/projector screen
   - New window: Your teacher screen

## ✅ What You Should See

### Normal Window (Students see):

- Clean slides with regular content
- Normal navigation

### Speaker View Window (You see):

- **Left half**: Smaller version of current slide
- **Right half**: Full teaching script for current slide
- **Bottom left**: Timer showing elapsed time
- **Bottom**: Slide counter (e.g., "Slide 2 of 75")

## 🎯 Testing the Setup

1. **Open both windows**
2. **Navigate with arrow keys in either window**
3. **Both should stay synchronized**
4. **Speaker view should show scripts for slides 1-3**

## 🚨 Common Issues & Fixes

### Issue: "S" key doesn't work

**Fix**: Make sure you click on the slide area first, then press `S`

### Issue: Popup blocked

**Fix**: Use the manual method above, or enable popups for your site

### Issue: Can't see teaching scripts

**Fix**: Only slides 1, 2, and 3 have scripts integrated. Navigate to those slides to test.

### Issue: Windows not syncing

**Fix**:

- Use keyboard (arrow keys) not mouse clicks
- Both windows should be from the same browser
- Try refreshing both windows

## 🎮 Controls Reminder

| Key            | Action            |
| -------------- | ----------------- |
| `→` or `Space` | Next slide        |
| `←`            | Previous slide    |
| `S`            | Open speaker view |
| `F`            | Fullscreen        |
| `Esc`          | Overview mode     |

## ⚡ Quick Test

1. Open `slides-with-scripts.html`
2. Press `S`
3. If popup blocked, manually open second window with `?speaker-view=true`
4. Navigate to slide 2 using arrow keys
5. You should see the full teaching script appear in speaker view!

## 📞 Still Need Help?

If none of these work, try:

1. **Different browser** (Chrome works best)
2. **Serve from local web server** instead of file://
3. **Use the original backup plan**: Open script files separately in another window

The goal is to get you teaching smoothly - the technology should help, not hinder!
