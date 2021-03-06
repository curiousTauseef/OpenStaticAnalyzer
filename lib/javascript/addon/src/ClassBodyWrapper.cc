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

#include "../inc/ClassBodyWrapper.h"
#include <sstream>  
#include <string>   
#include <iomanip>  
#include <algorithm>
#include <cctype>   

#include <nan.h>   

using namespace v8;

namespace columbus { namespace javascript { namespace asg { namespace addon {

Persistent<Function> ClassBodyWrapper::constructor;

void ClassBodyWrapper::Init(Handle<v8::Object> exports) {
  Isolate* isolate = Isolate::GetCurrent();                                
                                                                           
  // Prepare constructor template                                          
  Local<FunctionTemplate> tpl = FunctionTemplate::New(isolate, New);       
  tpl->SetClassName(v8::String::NewFromUtf8(isolate, "ClassBodyWrapper"));             
  tpl->InstanceTemplate()->SetInternalFieldCount(1);                       
  NODE_SET_PROTOTYPE_METHOD(tpl, "addBodyMethodDefinition", addBodyMethodDefinition);
  NODE_SET_PROTOTYPE_METHOD(tpl, "addCommentsComment", addCommentsComment);
  NODE_SET_PROTOTYPE_METHOD(tpl, "setPath", setPath);
  NODE_SET_PROTOTYPE_METHOD(tpl, "setLine", setLine);
  NODE_SET_PROTOTYPE_METHOD(tpl, "setCol", setCol);
  NODE_SET_PROTOTYPE_METHOD(tpl, "setEndLine", setEndLine);
  NODE_SET_PROTOTYPE_METHOD(tpl, "setEndCol", setEndCol);
  NODE_SET_PROTOTYPE_METHOD(tpl, "setWideLine", setWideLine);
  NODE_SET_PROTOTYPE_METHOD(tpl, "setWideCol", setWideCol);
  NODE_SET_PROTOTYPE_METHOD(tpl, "setWideEndLine", setWideEndLine);
  NODE_SET_PROTOTYPE_METHOD(tpl, "setWideEndCol", setWideEndCol);
                                                                           
  constructor.Reset(isolate, tpl->GetFunction());                          
  exports->Set(v8::String::NewFromUtf8(isolate, "ClassBodyWrapper"),                   
               tpl->GetFunction());                                        
}                                                                          


void ClassBodyWrapper::New(const FunctionCallbackInfo<Value>& args) {                             
  Isolate* isolate = Isolate::GetCurrent();                                         
  HandleScope scope(isolate);                                                       
                                                                                    
  if (args.IsConstructCall()) {                                                     
    // Invoked as constructor: `new ClassBodyWrapper(...)`                                        
    Factory* fact = Nan::ObjectWrap::Unwrap<Factory>(args[0]->ToObject()); 
    ClassBodyWrapper* obj = new ClassBodyWrapper(fact);                                                         
    obj->Wrap(args.This());                                                         
    args.GetReturnValue().Set(args.This());                                         
  } else {                                                                          
    // Invoked as plain function `ClassBodyWrapper(...)`, turn into construct call.               
    const int argc = 1;                                                             
    Handle<v8::Value> argv[argc] = { args[0] };                                         
    Local<v8::Function> cons = Local<v8::Function>::New(isolate, constructor);              
    args.GetReturnValue().Set(Nan::NewInstance(cons, argc, argv).ToLocalChecked()); 
  }                                                                                 
}                                                                                   


ClassBodyWrapper::ClassBodyWrapper(Factory* fact)                        
{                                                   
  ClassBody = fact->getFactory()->createClassBodyNode();          
}                                                   

ClassBodyWrapper::~ClassBodyWrapper()
{        
}        

void ClassBodyWrapper::NewInstance(const FunctionCallbackInfo<Value>& args) {              
  Isolate* isolate = Isolate::GetCurrent();                                  
  HandleScope scope(isolate);                                                
                                                                             
  const unsigned argc = 1;                                                   
  Handle<Value> argv[argc] = { args[0] };                                    
  Local<v8::Function> cons = Local<v8::Function>::New(isolate, constructor);         
  Local<v8::Object> instance = Nan::NewInstance(cons, argc, argv).ToLocalChecked();  
  args.GetReturnValue().Set(instance);                                       
}                                                                            

void ClassBodyWrapper::addBodyMethodDefinition(const v8::FunctionCallbackInfo<v8::Value>& args){
  Isolate* isolate = Isolate::GetCurrent();
  HandleScope scope(isolate);              
  MethodDefinitionWrapper* _MethodDefinition1 = ObjectWrap::Unwrap<MethodDefinitionWrapper>(args[0]->ToObject());
  ClassBodyWrapper* _ClassBody2 = ObjectWrap::Unwrap<ClassBodyWrapper>(args.This());

  _ClassBody2->ClassBody->addBody(_MethodDefinition1->MethodDefinition);
}
void ClassBodyWrapper::addCommentsComment(const v8::FunctionCallbackInfo<v8::Value>& args){
  Isolate* isolate = Isolate::GetCurrent();
  HandleScope scope(isolate);              
  CommentWrapper* _Comment1 = ObjectWrap::Unwrap<CommentWrapper>(args[0]->ToObject());
  ClassBodyWrapper* _ClassBody2 = ObjectWrap::Unwrap<ClassBodyWrapper>(args.This());

  _ClassBody2->ClassBody->addComments(_Comment1->Comment);
}
void ClassBodyWrapper::setPath(const FunctionCallbackInfo<Value>& args){ 
  Isolate* isolate = Isolate::GetCurrent();
  HandleScope scope(isolate);

  ClassBodyWrapper* _ClassBody = ObjectWrap::Unwrap<ClassBodyWrapper>(args.This());
  v8::String::Utf8Value utfStr( args[0]->ToString() );
  std::string param(*utfStr);
  Range range = _ClassBody->ClassBody->getPosition();
  range.setPath( param );
  _ClassBody->ClassBody->setPosition( range );
}

void ClassBodyWrapper::setLine(const FunctionCallbackInfo<Value>& args){ 
  Isolate* isolate = Isolate::GetCurrent();                                  
  HandleScope scope(isolate);                                                
                                                                             
  ClassBodyWrapper* _ClassBody = ObjectWrap::Unwrap<ClassBodyWrapper>(args.This());
  v8::String::Utf8Value utfStr( args[0]->ToString() );                       
  std::string param(*utfStr);                                                
  std::istringstream is(param);
  unsigned int ui;
  is >> ui;
  Range range = _ClassBody->ClassBody->getPosition();
  range.setLine( ui );
  _ClassBody->ClassBody->setPosition( range );
}

void ClassBodyWrapper::setCol(const FunctionCallbackInfo<Value>& args){ 
  Isolate* isolate = Isolate::GetCurrent();                                  
  HandleScope scope(isolate);                                                
                                                                             
  ClassBodyWrapper* _ClassBody = ObjectWrap::Unwrap<ClassBodyWrapper>(args.This());
  v8::String::Utf8Value utfStr( args[0]->ToString() );                       
  std::string param(*utfStr);                                                
  std::istringstream is(param);
  unsigned int ui;
  is >> ui;
  Range range = _ClassBody->ClassBody->getPosition();
  range.setCol( ui );
  _ClassBody->ClassBody->setPosition( range );
}

void ClassBodyWrapper::setEndLine(const FunctionCallbackInfo<Value>& args){ 
  Isolate* isolate = Isolate::GetCurrent();                                  
  HandleScope scope(isolate);                                                
                                                                             
  ClassBodyWrapper* _ClassBody = ObjectWrap::Unwrap<ClassBodyWrapper>(args.This());
  v8::String::Utf8Value utfStr( args[0]->ToString() );                       
  std::string param(*utfStr);                                                
  std::istringstream is(param);
  unsigned int ui;
  is >> ui;
  Range range = _ClassBody->ClassBody->getPosition();
  range.setEndLine( ui );
  _ClassBody->ClassBody->setPosition( range );
}

void ClassBodyWrapper::setEndCol(const FunctionCallbackInfo<Value>& args){ 
  Isolate* isolate = Isolate::GetCurrent();                                  
  HandleScope scope(isolate);                                                
                                                                             
  ClassBodyWrapper* _ClassBody = ObjectWrap::Unwrap<ClassBodyWrapper>(args.This());
  v8::String::Utf8Value utfStr( args[0]->ToString() );                       
  std::string param(*utfStr);                                                
  std::istringstream is(param);
  unsigned int ui;
  is >> ui;
  Range range = _ClassBody->ClassBody->getPosition();
  range.setEndCol( ui );
  _ClassBody->ClassBody->setPosition( range );
}

void ClassBodyWrapper::setWideLine(const FunctionCallbackInfo<Value>& args){ 
  Isolate* isolate = Isolate::GetCurrent();                                  
  HandleScope scope(isolate);                                                
                                                                             
  ClassBodyWrapper* _ClassBody = ObjectWrap::Unwrap<ClassBodyWrapper>(args.This());
  v8::String::Utf8Value utfStr( args[0]->ToString() );                       
  std::string param(*utfStr);                                                
  std::istringstream is(param);
  unsigned int ui;
  is >> ui;
  Range range = _ClassBody->ClassBody->getPosition();
  range.setWideLine( ui );
  _ClassBody->ClassBody->setPosition( range );
}

void ClassBodyWrapper::setWideCol(const FunctionCallbackInfo<Value>& args){ 
  Isolate* isolate = Isolate::GetCurrent();                                  
  HandleScope scope(isolate);                                                
                                                                             
  ClassBodyWrapper* _ClassBody = ObjectWrap::Unwrap<ClassBodyWrapper>(args.This());
  v8::String::Utf8Value utfStr( args[0]->ToString() );                       
  std::string param(*utfStr);                                                
  std::istringstream is(param);
  unsigned int ui;
  is >> ui;
  Range range = _ClassBody->ClassBody->getPosition();
  range.setWideCol( ui );
  _ClassBody->ClassBody->setPosition( range );
}

void ClassBodyWrapper::setWideEndLine(const FunctionCallbackInfo<Value>& args){ 
  Isolate* isolate = Isolate::GetCurrent();                                  
  HandleScope scope(isolate);                                                
                                                                             
  ClassBodyWrapper* _ClassBody = ObjectWrap::Unwrap<ClassBodyWrapper>(args.This());
  v8::String::Utf8Value utfStr( args[0]->ToString() );                       
  std::string param(*utfStr);                                                
  std::istringstream is(param);
  unsigned int ui;
  is >> ui;
  Range range = _ClassBody->ClassBody->getPosition();
  range.setWideEndLine( ui );
  _ClassBody->ClassBody->setPosition( range );
}

void ClassBodyWrapper::setWideEndCol(const FunctionCallbackInfo<Value>& args){ 
  Isolate* isolate = Isolate::GetCurrent();                                  
  HandleScope scope(isolate);                                                
                                                                             
  ClassBodyWrapper* _ClassBody = ObjectWrap::Unwrap<ClassBodyWrapper>(args.This());
  v8::String::Utf8Value utfStr( args[0]->ToString() );                       
  std::string param(*utfStr);                                                
  std::istringstream is(param);
  unsigned int ui;
  is >> ui;
  Range range = _ClassBody->ClassBody->getPosition();
  range.setWideEndCol( ui );
  _ClassBody->ClassBody->setPosition( range );
}

}}}} //end of namespaces