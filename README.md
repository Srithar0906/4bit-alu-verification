# 4-bit ALU with Functional Verification

A fully verified 4-bit Arithmetic Logic Unit (ALU) designed in Verilog, with a SystemVerilog testbench featuring directed tests, constrained random stimulus, and functional coverage.

---

## Features

- Supports 6 operations: ADD, SUB, AND, OR, NOT, XOR
- Output flags: Carry Out, Zero Flag, Overflow
- Self-checking testbench with pass/fail reporting
- Constrained random verification with covergroup
- Gate-level synthesis using Yosys
- Waveform analysis in GTKWave

---

## Project Structure

```
4bit-alu-verification/
├── rtl/
│   └── alu.v              # ALU RTL design
├── tb/
│   └── alu_tb.sv          # SystemVerilog testbench
├── sim/
│   └── waveform.vcd       # GTKWave dump
├── synth/
│   └── synth.ys           # Yosys synthesis script
├── docs/
│   └── waveforms/         # GTKWave screenshots
└── README.md
```

---

## Operation Encoding

| Opcode | Operation | Description         |
|--------|-----------|---------------------|
| 3'b000 | ADD       | A + B               |
| 3'b001 | SUB       | A - B               |
| 3'b010 | AND       | A & B               |
| 3'b011 | OR        | A \| B              |
| 3'b100 | NOT       | ~A                  |
| 3'b101 | XOR       | A ^ B               |

---

## Tools Used

| Tool          | Purpose                        |
|---------------|-------------------------------|
| Verilog       | RTL Design                    |
| SystemVerilog | Testbench & Coverage          |
| Verilator     | Simulation                    |
| GTKWave       | Waveform Viewer               |
| Yosys         | Logic Synthesis               |
| Vivado / Quartus | FPGA Implementation        |

---

## How to Run

### Simulate with Verilator

```bash
verilator --cc rtl/alu.v --exe tb/alu_tb.sv --build
./obj_dir/Valu
```

### View Waveforms

```bash
gtkwave sim/waveform.vcd
```

### Synthesize with Yosys

```bash
yosys synth/synth.ys
```

---

## Verification Plan

- **Directed tests** — all 6 opcodes with known input/output pairs
- **Edge cases** — A=0, B=0, A=15, B=15, overflow conditions
- **Random tests** — 1000 random vectors with auto-checking
- **Coverage goal** — 100% opcode coverage, all flags toggled

---

## Sample Waveform

> GTKWave screenshots will be added here after simulation.

---

## Results

| Metric              | Result     |
|---------------------|------------|
| Directed tests      | ✅ Passing |
| Random tests (1000) | ✅ Passing |
| Opcode coverage     | 100%       |
| Flag coverage       | 100%       |

> Results will be updated as the project progresses.

---

## What I Learned

- RTL design using Verilog `case` statements
- Writing self-checking testbenches in SystemVerilog
- Constrained random verification and functional coverage
- Gate-level synthesis flow using Yosys
- Waveform debugging with GTKWave

---

## Academic Context

**Course:** BE.EE(VLSI DESIGN AND TECHNOLOGY).
**Institution:** Anna University Regional Campus Coimbatore.
**Tools:** Open-source EDA (Yosys, Verilator, GTKWave)

---

## License

MIT License — feel free to fork and build on this!
