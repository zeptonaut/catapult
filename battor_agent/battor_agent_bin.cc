// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include <iomanip>
#include <iostream>

#include "battor_agent.h"

using namespace std;

namespace {

void PrintUsage() {
  cout << "Usage: battor_agent <command> <arguments>" << endl << endl;
  cout << "Commands:" << endl << endl;
  cout << "  StartTracing <path>" << endl;
  cout << "  RecordClockSyncMarker <path> <marker>" << endl;
  cout << "  StopTracing <path>" << endl;
  cout << "  Help" << endl;
}

} // namespace

int main(int argc, char* argv[]) {
  cout << argc << endl;

  if (argc < 3) {
    PrintUsage();
    return 1;
  }

  string cmd(argv[1]);
  string path(argv[2]);

  cout << "Command: " << cmd << endl;
  cout << "Path: " << path << endl;

  if (cmd == "StartTracing") {
    cout << "Calling StartTracing()" << endl;

    battor::BattOrAgent(path).StartTracing();
  } else if (cmd == "RecordClockSyncMarker") {
    if (argc < 4) {
      PrintUsage();
      return 1;
    }

    string marker(argv[3]);
    cout << "Marker: " << marker << endl;
    cout << "Calling RecordClockSyncMarker()" << endl;

    battor::BattOrAgent(path).RecordClockSyncMarker(marker);
  } else if (cmd == "StopTracing") {
    cout << "Calling StopTracing()" << endl;

    battor::BattOrAgent(path).StopTracing();
  }

  return 0;
}
