# NIEMO: Neural Network Inference Engine for Mobile
A lightweight C++ inference runtime for deploying neural networks on Android devices

Current plan (Under Development): 
`Model Weights -> C++ Inference Engine -> On-device runtime (Android/..other)`

### Chronicles of NIEMO
#### Ch1 Setup (CPU)
- Setup initial directories and project structure
- Write basic operation interfaces → MatMul, ReLU
- Extend ops/kernels → add Add, Softmax, LayerNorm → then Attention → later Conv :point_left: (We are here)

#### Ch2 Supporting Backends (NPU, GPU)
- Write GPU & NPU kernals and accelerators
- Improve core → memory reuse, better matmul, SIMD later
- Memory Safety, error handling, I/O Buffer optimizations
- Benchmark on-device metrics (battery, heating, etc.)

#### Ch3 Import Models API
- Build ONNX → NIEMO converter → parse subset → map nodes → create graph + tensors
- Define NIEMO model format → simple JSON (graph) + binary (weights)
- Create clean C++ API → load(), run(), basic tensor I/O
- Add platform layer → Android (JNI/Kotlin), later iOS (Swift/ObjC++)
- Add decision layer → estimate memory + latency → canRun(model, device)