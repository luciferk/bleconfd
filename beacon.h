//
// Copyright [2018] [jacobgladish@yahoo.com]
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef __BEACON_H__
#define __BEACON_H__

#include <string>

/**
 * start up beacon
 * @param s the expected device name
 * @param isNeedUpdateName is need update the device name? it need restart BLE service, will drop all connection
 */
void startBeacon(std::string const& s);

/**
 * we need clean all BLE connection and staus when ready to accept new client
 */
void reinitializeBLE();

#endif
