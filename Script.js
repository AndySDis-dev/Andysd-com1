document.addEventListener('DOMContentLoaded', () => {
    const sections = document.querySelectorAll('section');
    const root = document.documentElement;
    const scrollContainer = document.querySelector('.scroll-container');

    const themes = {
        manifesto: {
            bg: '#0d0d0d',
            text: '#f0f0f0',
            accent: '#7d4427',
            font1: 'Montserrat, sans-serif',
            font2: 'Playfair Display, serif'
        },
        artperiod: {
            bg: '#f9f9f9',
            text: '#2c2c2c',
            accent: '#a46d3e',
            font1: 'Montserrat, sans-serif',
            font2: 'Playfair Display, serif'
        },
        tonez: {
            bg: '#000000',
            text: '#00FFFF',
            accent: '#FF00FF',
            font1: 'Oxanium, monospace',
            font2: 'Share Tech Mono, monospace'
        },
        flip: {
            bg: '#121212',
            text: '#f0f0f0',
            accent: '#00FF7F',
            font1: 'Fira Code, monospace',
            font2: 'Inter, sans-serif'
        },
        clenze: {
            bg: '#E6EBF0',
            text: '#4a5568',
            accent: '#5A67D8',
            font1: 'Inter, sans-serif',
            font2: 'Inter, sans-serif'
        },
        productivity: {
            bg: '#f0f4f7',
            text: '#2c3e50',
            accent: '#34a853',
            font1: 'Lato, sans-serif',
            font2: 'Lato, sans-serif'
        },
        music: {
            bg: '#1e1e1e',
            text: '#e0e0e0',
            accent: '#8a2be2',
            font1: 'Roboto, sans-serif',
            font2: 'Roboto, sans-serif'
        },
        travel: {
            bg: '#f8f9fa',
            text: '#4a5568',
            accent: '#ffc107',
            font1: 'Nunito, sans-serif',
            font2: 'Nunito, sans-serif'
        },
        fitness: {
            bg: '#000000',
            text: '#f0f0f0',
            accent: '#ff4500',
            font1: 'Roboto, sans-serif',
            font2: 'Roboto, sans-serif'
        },
        social: {
            bg: '#f0f0f0',
            text: '#5a5a5a',
            accent: '#ff69b4',
            font1: 'Nunito', sans-serif,
            font2: 'Nunito, sans-serif'
        },
        data: {
            bg: '#1b2b34',
            text: '#d2d2d2',
            accent: '#26d9e9',
            font1: 'Fira Code, monospace',
            font2: 'Roboto, sans-serif'
        },
        gaming: {
            bg: '#222222',
            text: '#f0f0f0',
            accent: '#ff4500',
            font1: 'Oxanium, monospace',
            font2: 'Playfair Display, serif'
        },
        foundation: {
            bg: '#0d0d0d',
            text: '#f0f0f0',
            accent: '#7d4427',
            font1: 'Montserrat, sans-serif',
            font2: 'Playfair Display, serif'
        }
    };

    function setTheme(themeKey) {
        const theme = themes[themeKey];
        if (theme) {
            root.style.setProperty('--background-color', theme.bg);
            root.style.setProperty('--text-color', theme.text);
            root.style.setProperty('--accent-color', theme.accent);
            root.style.setProperty('--font-primary', theme.font1);
            root.style.setProperty('--font-secondary', theme.font2);
        }
    }

    const observer = new IntersectionObserver((entries) => {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                const theme = entry.target.getAttribute('data-theme');
                if (theme) {
                    setTheme(theme);
                }
            }
        });
    }, {
        root: scrollContainer,
        threshold: 0.5
    });

    sections.forEach(section => {
        observer.observe(section);
    });

    const initialTheme = sections[0].getAttribute('data-theme');
    if (initialTheme) {
        setTheme(initialTheme);
    }
});
