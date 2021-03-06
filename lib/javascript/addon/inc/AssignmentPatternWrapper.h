/*
 *  This file is part of OpenStaticAnalyzer.
 *
 *  Copyright (c) 2004-2018 Department of Software Engineering - University of Szeged
 *
 *  Licensed under Version 1.2 of the EUPL (the "Licence");
 *
 *  You may not use this work except in compliance with the Licence.
 *
 *  You may obtain a copy of the Licence in the LICENSE file or at:
 *
 *  https://joinup.ec.europa.eu/software/page/eupl
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the Licence is distributed on an "AS IS" basis,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the Licence for the specific language governing permissions and
 *  limitations under the Licence.
 */

#ifndef _JAVASCRIPT_AssignmentPatternWrapper_H_
#define _JAVASCRIPT_AssignmentPatternWrapper_H_

#include "javascript/inc/javascript.h"
#include <node.h>
#include <node_object_wrap.h>
#include "../Factory.h"

using namespace v8;

namespace columbus { namespace javascript { namespace asg { namespace addon {
  class Factory;

  class AssignmentPatternWrapper : public node::ObjectWrap {
    public:
      columbus::javascript::asg::statement::AssignmentPattern* AssignmentPattern;
      static void Init(v8::Handle<v8::Object> exports);
      AssignmentPatternWrapper(const AssignmentPatternWrapper&);
      AssignmentPatternWrapper(Factory* fact);
      virtual ~AssignmentPatternWrapper();
      static void NewInstance(const v8::FunctionCallbackInfo<v8::Value>& args);
      void wrap(const v8::FunctionCallbackInfo<v8::Value>& args){ this->Wrap(args.Holder()); }
      static v8::Persistent<v8::Function> constructor;
    private:
      static void New(const v8::FunctionCallbackInfo<v8::Value>& args);

      static void setLeftIdentifier(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setLeftMemberExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setLeftArrayPattern(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setLeftAssignmentPattern(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setLeftObjectPattern(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setLeftRestElement(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightArrayExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightArrowFunctionExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightAssignmentExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightAwaitExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightBinaryExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightCallExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightClassExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightConditionalExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightFunctionExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightIdentifier(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightBooleanLiteral(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightNullLiteral(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightNumberLiteral(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightRegExpLiteral(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightStringLiteral(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightLogicalExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightMemberExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightMetaProperty(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightNewExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightObjectExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightSequenceExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightTaggedTemplateExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightTemplateLiteral(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightThisExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightUnaryExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightUpdateExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setRightYieldExpression(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void addCommentsComment(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setPath(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setLine(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setCol(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setEndLine(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setEndCol(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setWideLine(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setWideCol(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setWideEndLine(const v8::FunctionCallbackInfo<v8::Value>& args);
      static void setWideEndCol(const v8::FunctionCallbackInfo<v8::Value>& args);
}; //end of AssignmentPatternWrapper

}}}}//end of namespaces
#endif