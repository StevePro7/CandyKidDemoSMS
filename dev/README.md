CandyKidDemoSMS
27-Sep-2026


Q.
I have open an old Sega Master System demo I built in 2017 in C using the devkitSMS - I am learning about GitHub Copilot: agents, instructions, skills, prompts - I would like to translate all this programming knowledge into Markdown files that can be used to build future games built for the SMS using devkitSMS - I was advised one good way was to get Copilot to reverse engineer an existing project - like this one and have Copilot start composing the markdown files for me - does this sound like a good/reasonable strategy?

## Answer

Yes. Reverse engineering a working, existing demo is a practical way to preserve the knowledge embedded in it while learning how to use GitHub Copilot. This project is a particularly good source because it separates several reusable Sega Master System and devkitSMS concerns:

- `build.bat` and `gfx.bat`: build and asset-conversion steps.
- `main.c` and `game.c`: application startup, initialization, and game loop.
- `screen/`: screen lifecycle and game-flow code.
- `engine/`: reusable gameplay and platform managers.
- `object/`: gameplay data structures.
- `devkit/` and `psg.c`: devkitSMS and PSG audio integration.

The repository-level `README.md` also records the original toolchain: devkitSMS, C/Z80, WLA-DX, BMP2Tile, and Mod2PSG2.

### Important caveat

Use Copilot's output as a draft based on evidence, not as unquestioned historical fact. Ask it to distinguish between:

- **Verified facts:** directly supported by code, scripts, assets, or build output.
- **Inferences:** plausible conclusions that require confirmation.
- **Modern recommendations:** improved approaches for future projects which may differ from the 2017 implementation.

This keeps the documentation useful and prevents assumptions from becoming project history.

## Recommended documentation

Create a documentation area such as `docs/sms-devkit/` and build it up incrementally:

1. `README.md` - contents, scope, conventions, and terminology.
2. `toolchain-and-build.md` - required tools, asset pipeline, build commands, ROM output, and emulator or hardware testing.
3. `project-architecture.md` - startup sequence, game loop, modules, and dependencies.
4. `screens-and-game-flow.md` - title, start, ready, and play screen lifecycles and transitions.
5. `graphics-and-sprites.md` - tiles, palettes, VRAM, sprite loading, and BMP2Tile output.
6. `input-and-frame-timing.md` - controller polling, pause handling, frame synchronization, and timing constraints.
7. `audio.md` - PSG music and sound-effect initialization, playback, and data formats.
8. `gameplay-objects-and-paths.md` - player, enemy, route, path, and state ownership.
9. `debugging-and-testing.md` - emulator workflow, hardware differences, checks, and troubleshooting.
10. `new-game-checklist.md` - a repeatable sequence for beginning another SMS game.

Add repository-level Copilot guidance later, for example `.github/copilot-instructions.md`, to record C conventions, target constraints, module layout, and project rules that future prompts should respect.

## Recommended reverse-engineering sequence

Avoid asking Copilot to explain the complete repository in one request. Work through small, verifiable areas:

1. **Build and run:** explain the batch scripts and identify every important tool input and output.
2. **Control flow:** trace from `main` through initialization and the per-frame loop.
3. **Screens:** document each screen's load, update, and transition responsibilities.
4. **Graphics:** trace generated asset data through loading and VRAM transfer.
5. **Input and timing:** document when inputs are read and how movement and timing are managed.
6. **Audio:** trace music and sound-effect initialization and triggers.
7. **Gameplay entities:** explain player, enemy, path, and route data plus update/render ownership.
8. **Reusable practices:** turn proven patterns into a concise new-game checklist.

For each area, ask Copilot to cite the relevant files and functions supporting every claim. This makes the resulting documentation inspectable and teaches evidence-based prompting.

## Example prompts

### Build documentation

> Analyze `dev/build.bat` and the source files it compiles. Draft `toolchain-and-build.md`. State commands, inputs, outputs, prerequisites, and assumptions. Separate verified facts from uncertainties. Do not modify source code.

### Architecture documentation

> Trace execution from `dev/main.c` through initialization and the main loop. Draft a concise architecture document that lists each called subsystem, its responsibility, and evidence as file and function references.

### Screen-flow documentation

> Examine `dev/screen/`. Describe the screen lifecycle and transition rules. Include a Mermaid state diagram only where the code supports it. Mark unverified transition assumptions explicitly.

### Graphics documentation

> Review the graphics pipeline from `dev/gfx.bat` through `dev/gfx.c` and its consumers. Draft a guide for adding a tile or sprite asset to a future game.

For each prompt, add:

> Write for my future self building another Sega Master System game with devkitSMS. Prefer practical steps, code references, constraints, and failure modes over a generic API summary.

## How this supports learning Copilot

- **Prompts:** learn to define a narrow scope, expected output, evidence requirements, and whether code changes are allowed.
- **Instructions:** record repository rules so future requests consistently follow the project conventions.
- **Agents:** assign one bounded investigation, such as the audio system or graphics pipeline, to an agent.
- **Skills:** use specialist workflows when applicable; for this project, durable documentation and repository instructions are likely the most useful foundation.

## Suggested starting point

Start with the build pipeline and application flow. They provide the context needed to understand every later subsystem. Then document screen flow, graphics, input, audio, and gameplay entities.
