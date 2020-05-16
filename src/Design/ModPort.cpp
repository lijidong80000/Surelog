/*
 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   ModPort.cpp
 * Author: alain
 *
 * Created on January 31, 2020, 9:46 PM
 */
#include "SourceCompile/SymbolTable.h"
#include "Signal.h"
#include "ModPort.h"

using namespace SURELOG;

ModPort::~ModPort()
{
}

Signal* ModPort::getPort(std::string& name) {
  for (Signal& sig : m_ports) {
    if (sig.getName() == name) {
      return &sig;
    }
  }
  return NULL;
}
