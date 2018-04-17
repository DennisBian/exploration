/*
 * Copyright 2016 The Cartographer Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CARTOGRAPHER_MAPPING_INTERNAL_POSE_GRAPH_OPTIMIZATION_PROBLEM_OPTIONS_H_
#define CARTOGRAPHER_MAPPING_INTERNAL_POSE_GRAPH_OPTIMIZATION_PROBLEM_OPTIONS_H_

#include "cartographer/common/lua_parameter_dictionary.h"
#include "cartographer/mapping/pose_graph/proto/optimization_problem_options.pb.h"

namespace cartographer {
namespace mapping {
namespace pose_graph {

proto::OptimizationProblemOptions CreateOptimizationProblemOptions(
    common::LuaParameterDictionary* parameter_dictionary);

}  // namespace pose_graph
}  // namespace mapping
}  // namespace cartographer

#endif  // CARTOGRAPHER_MAPPING_INTERNAL_POSE_GRAPH_OPTIMIZATION_PROBLEM_OPTIONS_H_
