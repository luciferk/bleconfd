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
#ifndef __BLECONFD_DEFS_H__
#define __BLECONFD_DEFS_H__

#include <functional>
#include <cJSON.h>

#define UNUSED_PARAM(X) UNUSED_ ## X __attribute__((__unused__))
#define BLECONFD_VERSION "1.0"
#define JSON_RPC_VERSION "2.0"

using ResponseSender = std::function< void (cJSON* res) >;

#endif
