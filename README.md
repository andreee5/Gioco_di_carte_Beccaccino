# 🃏 Progetto Gioco di Carte "Beccaccino" (C++ CLI)

[![Download v1.0](https://img.shields.io/github/v/release/andreee5/Gioco_di_carte_Beccaccino?label=Download%20v1.0)](https://github.com/andreee5/Gioco_di_carte_Beccaccino/releases/latest)

Simulazione testuale del gioco di carte tradizionale romagnolo **Beccaccino**, sviluppata in linguaggio C++ con interfaccia testuale (CLI).

---

## 🧠 Descrizione del progetto

Progetto scolastico sviluppato durante il quarto anno di liceo scientifico.  
Il software riproduce fedelmente le regole del Beccaccino, con:

- Distribuzione casuale delle carte
- Tavolo da gioco testuale con sfondo verde e carte ASCII
- Turnazione dinamica con “rotazione visiva” delle carte
- Visualizzazione riservata delle mani dei giocatori
- Calcolo automatico delle prese e dei punteggi

🔒 Solo il giocatore attivo può visualizzare le proprie carte ed effettuare mosse.

---

## 🖼️ Screenshot

### Tavolo di gioco iniziale
![Tavolo di gioco](media/screenshot_gioco.png)

### Turno giocatore attivo
![Turno attivo](media/screenshot_turno.png)

---

## 🎞️ Demo animata

Clip dimostrativa dell’esecuzione del programma:

![Demo GIF](media/beccaccino_demo.gif)

---

## 🛠️ Come compilare ed eseguire

### 1. Compilazione da terminale (Windows o Linux)
Assicurati di avere `g++` installato:

```bash
g++ -o beccaccino codice/Beccaccino.cpp
