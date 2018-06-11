/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
#ifndef WEEX_PROJECT_ADDELEMENTACTION_H
#define WEEX_PROJECT_ADDELEMENTACTION_H

#include <string>
#include <map>
#include <set>

#include "core/render/action/render_action_interface.h"
#include "core/layout/style.h"

namespace WeexCore {

  class RenderObject;

  class RenderActionAddElement : public RenderAction {

  public:
    explicit RenderActionAddElement(const std::string &page_id, const RenderObject *render,
                                    const RenderObject *parent,
                                    int index, bool will_layout = true);

    void ExecuteAction();

  public:
    std::map<std::string, std::string> *styles;
    std::map<std::string, std::string> *attributes;
    std::set<std::string> *events;
    WXCoreMargin margins;
    WXCorePadding paddings;
    WXCoreBorderWidth borders;
    std::string page_id;
    std::string component_type;
    std::string parent_ref;
    std::string ref;
    int index;
    bool will_layout;
  };
}

#endif //WEEX_PROJECT_ADDELEMENTACTION_H
