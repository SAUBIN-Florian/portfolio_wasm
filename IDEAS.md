portfolio/
│
├── engine/
│   ├── solar_system
│   ├── camera
│   ├── animation
│   └── interaction
│
├── application/
│   ├── projects
│   ├── cv
│   └── navigation
│
├── web/
│   ├── index.html
│   ├── style.css
│   └── bridge.js
│
└── assets/


Initial HTML/CSS/JS        < 100 KB
WASM                       < 1 MB
Assets critiques           < 500 KB
────────────────────────────────
First meaningful render    < ~2 MB


géométrie procédurale ;
couleurs plutôt que textures ;
textures très petites ;
SVG pour certains éléments 2D ;
compression ;
chargement lazy des projets ;
pas de vidéo en background ;
pas de modèles 3D photoréalistes ;
pas de dépendance à une énorme police ;
assets chargés uniquement lorsqu'une planète/projet est exploré.
