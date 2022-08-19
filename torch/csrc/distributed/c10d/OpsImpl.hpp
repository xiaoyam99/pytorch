#pragma once

#include <c10/util/intrusive_ptr.h>
#include <c10d/ProcessGroup.hpp>
#include <torch/library.h>

namespace c10d {
namespace ops {

c10::intrusive_ptr<Work> broadcast_cpu_(
    at::TensorList tensors,
    const c10::intrusive_ptr<ProcessGroup>& process_group,
    int64_t root_rank,
    int64_t root_tensor,
    int64_t timeout);

c10::intrusive_ptr<Work> broadcast_cuda_(
    at::TensorList tensors,
    const c10::intrusive_ptr<ProcessGroup>& process_group,
    int64_t root_rank,
    int64_t root_tensor,
    int64_t timeout);

} // namespace ops
} // namespace c10d
