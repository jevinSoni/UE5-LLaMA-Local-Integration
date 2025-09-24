# UE5-LLaMA-Local-Integration

Integrated the official llama.cpp repository into Unreal Engine 5 by compiling it into a pre-compiled Windows DLL library (packaged with the project for execution) and building it as a static .a library for Android (ARM64), enabling dependency-free packaging and seamless cross-platform AI integration.

This project integrates a **local LLaMA-based language model** into **Unreal Engine 5**, with support for both **Windows** and **Android (ARM64)** platforms.

It uses the efficient **GGUF format** and is built on top of **llama.cpp** to provide **offline**, **privacy-focused**, and **API-free** AI interaction right inside your Unreal project.

---

## 🌟 Features

- 🧠 Run LLaMA models locally in UE5 (offline)
- 🔌 Custom UE5 plugin with Blueprint-callable AI nodes
- 🖥️ Windows + 📱 Android platform support
- 📂 Modular plugin structure for reuse
- 🚀 Based on llama.cpp backend
- 📘 Supports GGUF models (e.g., LLaMA 2, TinyLLaMA, OpenHermes, etc.)

---

## 🧠 How to Get GGUF Models

Due to licensing, you must download GGUF models yourself.

### 🔽 Steps:

1. Visit: [https://huggingface.co/models]
2. Choose a model (e.g. `llama-2-7b-chat.Q4_K_M.gguf`)
3. Download the `.gguf` file
4. Place it in the following directory:

```plaintext
<YourProject>/Models/

📁 Project Structure & Folders
📂 /Plugins/LocalLlama/

Contains the core plugin logic and model handling code.

Exposes two Blueprint-callable functions:

InitializeLlama	Loads and prepares the model
LoadTinyModelAndGenerateTextAsync1	Loads model and generates text async

You can use these functions directly in your Blueprints.

📂 /Dll/ — Windows Only

For Windows builds, include the .dll files from this folder in your packaged build:

🔧 Required Action:

<YourProject>/Binaries/Win64/

📂 /Models/

Place your downloaded GGUF models here.

Not included in the repo (must be downloaded separately).



⚠️ Current Limitations

This is a functionality-first version.

Code is not optimized for performance yet.

Some Blueprint functions are experimental or hardcoded.

Project structure and logic will be improved in future updates.
