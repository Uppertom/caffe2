#include "caffe2/core/context_gpu.h"
#include "caffe2/operators/recurrent_network_op.h"

namespace caffe2 {
namespace {
REGISTER_CUDA_OPERATOR(
    RecurrentNetwork,
    RecurrentNetworkOp<float, CUDAContext>);
REGISTER_CUDA_OPERATOR(
    RecurrentNetworkGradient,
    RecurrentNetworkGradientOp<float, CUDAContext>);
}
}
