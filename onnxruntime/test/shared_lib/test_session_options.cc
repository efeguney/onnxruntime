// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#include "core/session/onnxruntime_cxx_api.h"
#include "core/optimizer/graph_transformer_level.h"

#include "test_fixture.h"
using namespace onnxruntime;

TEST_F(CApiTest, session_options_graph_optimization_level) {
  // Test set optimization level succeeds when valid level is provided.
  Ort::SessionOptions options;
  options.SetGraphOptimizationLevel(ORT_ENABLE_ALL);

  // // Test set optimization level fails when invalid level is provided.
  // try {
  //   options.SetGraphOptimizationLevel(10000);
  // } catch (const Ort::Exception& e) {
  //   ASSERT_EQ(e.GetOrtErrorCode(), ORT_INVALID_ARGUMENT);
  // }
}
