# C++ Fundamentals Teaching Scripts - Setup Instructions

## 📋 What You Get

This system generates comprehensive teaching scripts for your C++ Fundamentals slide deck, specifically designed for grades 6-9 students. Each script includes:

- **Age-appropriate language** with gaming and social media references
- **Detailed timing guidelines** for each slide
- **Interactive elements** to keep students engaged
- **Common student questions** and suggested responses
- **Technical setup requirements** for live coding
- **Transition statements** between slides

## 🚀 Quick Start

### Option 1: Automated Generation (Recommended)

1. **Install Python dependencies:**

   ```bash
   pip install beautifulsoup4
   ```

2. **Run the script generator:**

   ```bash
   python3 generate-scripts.py
   ```

3. **Review generated scripts:**
   - Navigate to `teaching-scripts/` directory
   - Customize scripts for your teaching style
   - Add specific examples for your students

### Option 2: Manual Creation

1. Use the `script-template.md` as your starting point
2. Copy slide content from `slides.html`
3. Follow the examples in `teaching-scripts/00-introduction/`

## 📁 File Organization

After generation, you'll have:

```
teaching-scripts/
├── README.md                     # Overview and guidelines
├── script-template.md            # Template for custom scripts
├── 00-introduction/              # Course intro (6 slides)
│   ├── lesson-overview.md
│   ├── slide01-script.md
│   ├── slide02-script.md
│   └── ...
├── 01-lesson1-first-application/ # Setup and Hello World (15 slides)
├── 02-lesson2-control-flow/      # If statements and loops (12 slides)
├── 03-lesson3-arrays/            # Arrays and strings (8 slides)
├── 04-lesson4-functions/         # Functions (11 slides)
├── 05-project1-robot-gear/       # Hands-on project (8 slides)
├── 06-lesson5-structs/           # Objects & structs (10 slides)
├── 07-lesson6-standard-library/  # Standard library (15 slides)
├── 08-lesson7-classes/           # Classes and OOP (8 slides)
└── teaching-notes/               # General tips and resources
    ├── general-tips.md
    ├── troubleshooting.md
    └── assessment-ideas.md
```

## 🎯 Using the Scripts

### Before Class

1. **Review the lesson overview** - understand objectives and timing
2. **Read through slide scripts** - familiarize yourself with the flow
3. **Test technical examples** - ensure all code works on your setup
4. **Prepare backup materials** - have code examples ready to copy/paste

### During Class

1. **Follow the script structure** but adapt to your style
2. **Use the timing guidelines** as starting points
3. **Leverage the interaction prompts** to engage students
4. **Reference the troubleshooting notes** for common issues

### After Class

1. **Note what worked well** - customize scripts for next time
2. **Track student progress** - use assessment suggestions
3. **Update technical examples** - keep code current and relevant

## ⚙️ Customization Tips

### Adapting for Your Students

- **Local references:** Replace Roblox/Fortnite with games your students play
- **Cultural connections:** Use examples from your students' interests
- **Skill levels:** Adjust complexity based on your class abilities
- **Time constraints:** Scale activities to fit your class periods

### Technical Adaptations

- **Software choices:** Scripts assume VS Code but adapt for your IDE
- **Operating systems:** Examples are Mac-focused but easily adaptable
- **Classroom setup:** Modify for your specific lab configuration

## 🛠️ Technical Requirements

### For Teachers

- Computer with projector for demonstrations
- C++ compiler installed (clang++ or g++)
- Code editor (VS Code recommended)
- Copy of all slide code examples

### For Students

- Individual computers with C++ development environment
- Basic file management skills
- No prior programming experience required

## 📊 Assessment Integration

The scripts include multiple assessment opportunities:

- **Formative:** Quick checks during lessons
- **Hands-on:** Working code demonstrations
- **Peer learning:** Students helping each other debug
- **Portfolio:** Collection of working programs

## 🎉 Success Metrics

You'll know the scripts are working when you see:

- Students asking "What if..." questions
- Peer collaboration on coding problems
- Excitement about working programs
- Connections to real-world technology

## 📞 Support & Updates

### Troubleshooting

- Check `teaching-notes/troubleshooting.md` for common issues
- Review `general-tips.md` for classroom management strategies
- Adapt scripts based on your students' needs

### Updates

- Scripts are templates - customize freely!
- Share improvements with other educators
- Keep code examples current with C++ standards

---

**Remember:** These scripts are starting points. The best teaching happens when you adapt them to your unique students and classroom environment!

## 📝 Next Steps

1. ✅ Generate or create your teaching scripts
2. ✅ Review the general teaching tips
3. ✅ Test technical examples on your setup
4. ✅ Customize scripts for your students
5. ✅ Plan your first lesson timing
6. ✅ Prepare backup materials and troubleshooting resources

**Ready to inspire the next generation of programmers? Let's code! 🚀**
