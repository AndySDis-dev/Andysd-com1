/* --- Global & Base Styles --- */
:root {
    /* andysd Manifesto */
    --manifesto-background: #0d0d0d;
    --manifesto-text: #f0f0f0;
    --manifesto-accent: #7d4427;
    --manifesto-font-primary: 'Montserrat', sans-serif;
    --manifesto-font-secondary: 'Playfair Display', serif;

    /* ArtPeriod */
    --artperiod-background: #f9f9f9;
    --artperiod-text: #2c2c2c;
    --artperiod-accent: #a46d3e;
    --artperiod-font-primary: 'Montserrat', sans-serif;
    --artperiod-font-secondary: 'Playfair Display', serif;

    /* ToneZ */
    --tonez-background: #000000;
    --tonez-text: #00FFFF;
    --tonez-accent: #FF00FF;
    --tonez-font-primary: 'Oxanium', monospace;
    --tonez-font-secondary: 'Share Tech Mono', monospace;

    /* Flip */
    --flip-background: #121212;
    --flip-text: #f0f0f0;
    --flip-accent: #00FF7F;
    --flip-font-primary: 'Fira Code', monospace;
    --flip-font-secondary: 'Inter', sans-serif;

    /* Clenze */
    --clenze-background: #E6EBF0;
    --clenze-text: #4a5568;
    --clenze-accent: #5A67D8;
    --clenze-font-primary: 'Inter', sans-serif;
    --clenze-font-secondary: 'Inter', sans-serif;

    /* --- HYPOTHETICAL APP THEMES --- */

    /* Project: Chrono (Productivity) */
    --productivity-background: #f0f4f7;
    --productivity-text: #2c3e50;
    --productivity-accent: #34a853;
    --productivity-font-primary: 'Lato', sans-serif;
    --productivity-font-secondary: 'Lato', sans-serif;

    /* Project: Resonate (Music) */
    --music-background: #1e1e1e;
    --music-text: #e0e0e0;
    --music-accent: #8a2be2;
    --music-font-primary: 'Roboto', sans-serif;
    --music-font-secondary: 'Roboto', sans-serif;

    /* Project: Nomad (Travel) */
    --travel-background: #f8f9fa;
    --travel-text: #4a5568;
    --travel-accent: #ffc107;
    --travel-font-primary: 'Nunito', sans-serif;
    --travel-font-secondary: 'Nunito', sans-serif;

    /* Project: Surge (Fitness) */
    --fitness-background: #000000;
    --fitness-text: #f0f0f0;
    --fitness-accent: #ff4500;
    --fitness-font-primary: 'Roboto', sans-serif;
    --fitness-font-secondary: 'Roboto', sans-serif;

    /* Project: Nexus (Social) */
    --social-background: #f0f0f0;
    --social-text: #5a5a5a;
    --social-accent: #ff69b4;
    --social-font-primary: 'Nunito', sans-serif;
    --social-font-secondary: 'Nunito', sans-serif;

    /* Project: Glimpse (Data) */
    --data-background: #1b2b34;
    --data-text: #d2d2d2;
    --data-accent: #26d9e9;
    --data-font-primary: 'Fira Code', monospace;
    --data-font-secondary: 'Roboto', sans-serif;

    /* Project: Ardent (Gaming) */
    --gaming-background: #222222;
    --gaming-text: #f0f0f0;
    --gaming-accent: #ff4500;
    --gaming-font-primary: 'Oxanium', monospace;
    --gaming-font-secondary: 'Playfair Display', serif;

    /* Foundation */
    --foundation-background: #0d0d0d;
    --foundation-text: #f0f0f0;
    --foundation-accent: #7d4427;
    --foundation-font-primary: 'Montserrat', sans-serif;
    --foundation-font-secondary: 'Playfair Display', serif;

    /* Current theme variables - will be updated by JS */
    --background-color: var(--manifesto-background);
    --text-color: var(--manifesto-text);
    --accent-color: var(--manifesto-accent);
    --font-primary: var(--manifesto-font-primary);
    --font-secondary: var(--manifesto-font-secondary);
    --transition-speed: 1s ease-in-out;
}

/* Base styles and shared components remain the same */
* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
}

html, body {
    height: 100%;
    scroll-behavior: smooth;
}

body {
    background-color: var(--background-color);
    color: var(--text-color);
    font-family: var(--font-primary);
    transition: background-color var(--transition-speed), color var(--transition-speed);
}
/* ... (rest of the base CSS from the previous response) ... */
/* --- App Showcase Section --- */
.app-showcase {
    /* ... (rest of the app showcase CSS) ... */
}
.app-title {
    /* ... (rest of the app title CSS) ... */
}
.mobile-frame {
    /* ... (rest of the mobile frame CSS) ... */
}

/* Add unique styles for each app's mobile frame here if needed */
.mobile-frame.artperiod { background-color: #e0e0e0; }
.mobile-frame.tonez { background-color: #1a1a1a; border: 2px solid var(--accent-color); box-shadow: 0 0 20px var(--accent-color); }
.mobile-frame.flip { background-color: #000000; border: 1px solid var(--accent-color); }
.mobile-frame.clenze { background-color: #ffffff; border: 1px solid var(--accent-color); box-shadow: 0 5px 15px rgba(0, 0, 0, 0.1); }
.mobile-frame.productivity { background-color: #e6e9ee; border: 2px solid var(--accent-color); }
.mobile-frame.music { background-color: #000000; border: 2px solid var(--accent-color); }
.mobile-frame.travel { background-color: #ffffff; border: 1px solid var(--accent-color); }
.mobile-frame.fitness { background-color: #1a1a1a; border: 2px solid var(--accent-color); }
.mobile-frame.social { background-color: #ffffff; border: 1px solid var(--accent-color); }
.mobile-frame.data { background-color: #111111; border: 1px solid var(--accent-color); }
.mobile-frame.gaming { background-color: #000000; border: 2px solid var(--accent-color); box-shadow: 0 0 20px var(--accent-color); }

/* --- Responsive & Animations --- */
/* ... (rest of the CSS) ... */
