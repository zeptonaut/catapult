// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <string>

namespace battor {

class BattOrAgent {
 public:
  BattOrAgent(const std::string& path);

  void StartTracing();
  void RecordClockSyncMarker(const std::string& marker);
  std::string StopTracing();

 private:
  std::string path;
};

}  // namespace battor
