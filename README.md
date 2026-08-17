# WPS Points Calculator

https://wps-points-calculator.vercel.app

A high-performance World Para Swimming (WPS) Points Calculator built with a C++ backend compiled to WebAssembly (WASM) and a modern, responsive web interface.

---

## Key Features

* **Blazing Fast Performance:** Heavy calculation loops and classification lookup tables execute natively via WebAssembly.
* **Strict Classification Validation:** Automatically enforces WPS pairing rules:
  * Individual Medley (IM) events strictly require **SM** classifications.
  * Breaststroke events strictly require **SB** classifications.
  * Freestyle, Backstroke, and Butterfly events strictly require **S** classifications.
* **Modern, Responsive UI:** Features a centered card design, clean typography, and intuitive input formatting.
* **Automated Deployment:** Integrated build pipeline for continuous deployment via Vercel.

---

## Tech Stack

* **Core Engine:** C++17
* **Compilation:** Emscripten (`emcc`) to WebAssembly (`.wasm` / `.js`)
* **Frontend:** HTML5, CSS3 (CSS Variables, Flexbox), Vanilla JavaScript (`Module.ccall`)
* **Hosting & Deployment:** Vercel

---

## Local Development & Compilation

To build and run this project locally, ensure you have the Emscripten SDK (`emsdk`) installed.

### 1. Compile C++ to WebAssembly
Run the following command to generate the bindings:
```bash
emcc Para_Score.cpp -o Para_score.js \
    -s EXPORTED_FUNCTIONS='["_calculateScore"]' \
    -s EXPORTED_RUNTIME_METHODS='["ccall"]' \
    -s WASM=1
