// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "battor_agent.h"

namespace battor {

BattOrAgent::BattOrAgent(const std::string& path) : path(path) {}

void BattOrAgent::StartTracing() {}

void BattOrAgent::RecordClockSyncMarker(const std::string& marker) {}

std::string BattOrAgent::StopTracing() { return ""; }

}  // namespace battor
