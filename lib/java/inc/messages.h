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

#ifndef _JAVA_MSG_H_
#define _JAVA_MSG_H_

#define  CMSG_THE_NODE_LOADED                           common::WriteMsg::mlDDDebug,  "DDDebug: The %d node is loaded(%s)\n"
#define  CMSG_THE_NODE_HAVE_BEEN_DESTROYED              common::WriteMsg::mlDDDebug,  "DDDebug: The node %u has been destroyed\n"
#define  CMSG_SELECTOR_FUNCTION_IS_CHANGED              common::WriteMsg::mlDebug,    "Debug: Selector function is changed\n"
#define  CMSG_NODE_CREATED_THE_MIRROR_OF                common::WriteMsg::mlDDDDebug, "DDDDebug: The %d node created the mirror of %d node in the src\n"
#define  CMSG_NODE_PARENT_IS                            common::WriteMsg::mlDDDDebug, "DDDDebug: The parent of the %d node is %d node in the src\n"
#define  CMSG_THE_PRE_ORDER_HAS_TOUCHED_A_NODE_TWICE    common::WriteMsg::mlDebug,    "Debug: The pre order has touched a node twice (id: %d, type: %s)\n"
#define  CMSG_HAS_ALREADY_PARENT_THE_PARENT_WAS         common::WriteMsg::mlDDDebug,  "DDDebug: The %d (%s) already has a parent. The parent was %d (%s). The new parent is %d (%s)\n"
#define  CMSG_SHOW_HEX_VALUE                            common::WriteMsg::mlDDDebug,  " [%X] "
#define  CMSG_GET_THE_NODE_HASH_OF_NODE_BEGIN           common::WriteMsg::mlDDDebug,  "DDDebug: Get the node hash of %u node ["
#define  CMSG_GET_THE_NODE_HASH_OF_NODE_END             common::WriteMsg::mlDDDebug,  " =(%X) ] \n"
#define  CMSG_GET_THE_NODE_HASH_OF_NODE_SKIP            common::WriteMsg::mlDDDebug,  "The hash generator found a circle ] \n"
#define  CMSG_REMOVE_FORWARD_EDGE_FORM                  common::WriteMsg::mlDDDebug,  "DDDebug: Removing forward edge (form: %u, to: %u)\n"
#define  CMSG_SORT_DUPLICATED_EDGE_NAMES_AT_NODE        common::WriteMsg::mlWarning,  "Warning: Duplicated string representation is found while sorting the '%s' edges of node %u (%s): %s\n"
#define  CMSG_SORT_DUPLICATED_EDGE_DATA                 common::WriteMsg::mlWarning,  "Warning:   End point: %u (%s)\n"

#define CMSG_EX_YOU_MUST_GIVE_A_FACTORY_AT_FIRST        "A factory must be given first"
#define CMSG_EX_DON_T_HAVE_ANY_VISITOR                  "Do not have any visitor"
#define CMSG_EX_MISSING_FILE_TYPE_INFORMATION           "Missing file type information"
#define CMSG_EX_WRONG_FILE_TYPE_INFORMATION             "Wrong file type information"
#define CMSG_EX_MISSING_API_VERSION_INFORMATION         "Missing API version information"
#define CMSG_EX_WRONG_API_VERSION(APVER_REQ, APVER_FOUND) "Wrong API version (" + APVER_REQ + " required, " + APVER_FOUND + " found)"
#define CMSG_EX_MISSING_BINARY_VERSION_INFORMATION      "Missing binary version information"
#define CMSG_EX_WRONG_BINARY_VERSION(BINVER_REQ, BINVER_FOUND) "Wrong binary version (" + BINVER_REQ + " required, " + BINVER_FOUND + " found)"
#define CMSG_EX_INVALID_ASSOCIATION_CLASS_TYPE(TYPE)    "Invalid association class type (" + TYPE + ")"
#define CMSG_EX_INVALID_NODE_ID(ID)                     "Invalid NodeId (" + Common::toString(ID) + ")"
#define CMSG_EX_YOU_MUST_ENABLE_THE_REVERSE_EDGE_FIRST  "The reverse edge must be enabled first"
#define CMSG_EX_THE_NODE_DOES_NOT_EXISTS                "The node does not exist"
#define CMSG_EX_NEXT_ELEMENT_DOES_NOT_EXIST             "Next element does not exist"
#define CMSG_EX_THE_LOADED_FILTER_DOES_NOT_MATCH_TO_THE_CURRENT "The loaded filter does not match to the current ASG"
#define CMSG_EX_INVALID_NODE_KIND_VALUE(NODEKIND)       "Invalid node kind (" + Common::toString(NODEKIND) + ")"
#define CMSG_EX_INVALID_NODE_KIND                       "Invalid node kind"
#define CMSG_EX_INVALID_EDGE_KIND                       "Invalid edge kind"
#define CMSG_EX_THE_ITERATOR_IS_INVALID                 "The iterator is invalid"
#define CMSG_EX_CAN_T_SET_ASSOCIATION_EDGE(EDGEKIND)    "Cannot set the association edge by this method (edgeKind: " + Common::toString( EDGEKIND ) + ")"
#define CMSG_EX_THE_NODE_IS_NULL                        "The node is null"
#define CMSG_EX_THE_FACTORY_OF_NODES_DOES_NOT_MATCH     "The factory of the nodes does not match"
#define CMSG_EX_THE_END_POINT_OF_THE_EDGE_DOES_NOT_EXIST "The end point of the edge does not exist"
#define CMSG_EX_CAN_T_SET_EDGE_TO_NULL                  "Cannot set the edge to null (if it is necessary the remove function should be called)"
#define CMSG_EX_THE_EDGE_IS_NULL                        "The edge is null"
#define CMSG_EX_IN_CASE_THE_NODE_HAS_MORE_RANGES        "In case the node has more ranges you must not use this method"
#define CMSG_EX_THE_NODE_HAS_THE_SAME_ATTRIBUTES(ID, ATTRIBUTENAME) "The node id" + Common::toString(ID) + " has the same attributes (" + ATTRIBUTENAME + ")"
#define CMSG_EX_NO_REVERSE_EDGE_INFORMATION_FOR(ID)     "No reverse edge information for NodeId ("+ Common::toString(ID) + ")"
#define CMSG_EX_WRONG_NODE_KIND_FOR                     "Wrong node kind for '" #name "'"
#define CMSG_EX_NUMBER_IS_OUT_OF_RANGE(NUMBER)          "Number (" + Common::toString( NUMBER ) + ") is out of range [0x0, 0xFFFFFF]"
#define CMSG_EX_UNTIL_NO_STRTABLE_IS_SET_THE_SETPATH    "The setPath() can not be used until setting strTable"
#define CMSG_EX_NEITHER_NEXT_NOR_PREVIOUS_HAVE_BEEN_CALLED "Neither next() nor previous() have been called, or remove() or add() have been called after the last call to next() or previous()"
#define CMSG_EX_THE_ITERATION_HAS_NOT_NEXT_ELEMENT      "The iteration does not have next element"
#define CMSG_EX_THE_ITERATION_HAS_NOT_PREVIOUS_ELEMENT  "The iteration does not have previous element"
#define CMSG_EX_NODES_MUST_BELONG_TO_THE_SAME_FACTORY   "Nodes must belong to the same Factory while cloning"
#define CMSG_EX_FACTORY_REPLACE_WRONG_NODE(ID,KIND)         "Wrong node type (id:" + Common::toString(ID) + ", type:" + Common::toString(KIND) + ")"
#define CMSG_EX_FACTORY_WRONG_NODE_KIND(ID,FOUND,EXPECTED)  "Wrong node kind (id:" + Common::toString(ID) + ", found kind:" + Common::toString(FOUND) + ", expected kind:" + Common::toString(EXPECTED) + ")"


//AlgorithmCalls
#define CMSG_EX_ALG_CALLS_NEXT_ELEMENT_DOES_NOT_EXIST       "Next element does not exist"

//AlgorithmCFG.cpp
#define CMSG_CFG_ALG_STEP0                                  common::WriteMsg::mlDDDebug, "  step 0. handle the phantom entry and exit(s)\n"
#define CMSG_CFG_ALG_STEP1                                  common::WriteMsg::mlDDDebug, "  step 1. collect the leaders by checking the outgoing egdes\n"
#define CMSG_CFG_ALG_LEADER_ADDED                           common::WriteMsg::mlDDDebug, "    leader added: %d\n"
#define CMSG_CFG_ALG_STEP2                                  common::WriteMsg::mlDDDebug, "  step 2. collect the leaders by checking the ingoing egdes\n"
#define CMSG_CFG_ALG_STEP5                                  common::WriteMsg::mlDDDebug, "  step 5. insert the call edges between the blocks\n"
#define CMSG_CFG_ALG_LEADER                                 common::WriteMsg::mlDDDebug, "    leader: %d\n"
#define CMSG_CFG_ALG_CONTROL_FROM_BB_TO_BB                  common::WriteMsg::mlDDDebug, "    control edge from bb %d to bb %d\n"
#define CMSG_CFG_ALG_CALL_FROM_BB_TO_ENTRYFUNCT             common::WriteMsg::mlDDDebug, "    call edge from bb %d to the ENTRY of function %d\n"
#define CMSG_CFG_ALG_CALL_FROM_EXITFUNCT_TO_BB              common::WriteMsg::mlDDDebug, "    call edge from the EXIT of function %d to bb %d\n"
#define CMSG_CFG_ALG_BUILD_BASIC_BLOKS                      common::WriteMsg::mlDDDebug, "starting to build basic blocks\n"
#define CMSG_CFG_ALG_LEADERS                                common::WriteMsg::mlDDDebug, "    leaders: %d\n"
#define CMSG_CFG_ALG_STEP4                                  common::WriteMsg::mlDDDebug, "  step 4. create the basic blocks\n"
#define CMSG_CFG_ALG_ADDED_LEADER_TO_BB                     common::WriteMsg::mlDDDebug, "    node(leader) %d is added to bb %d\n"
#define CMSG_CFG_ALG_ADDED_NODE_TO_BB                       common::WriteMsg::mlDDDebug, "    node %d is added to bb %d\n"
#define CMSG_CFG_ALG_STEP6                                  common::WriteMsg::mlDDDebug, "  step 6. insert the control edges between the blocks\n"
#define CMSG_CFG_ALG_CONTROL_FROM_BBENTRY_TO_BBEXIT         common::WriteMsg::mlDDDebug, "    control edge from bb ENTRY to bb EXIT\n"
#define CMSG_CFG_ALG_CONTROL_FROM_BBENTRY_TO_BB             common::WriteMsg::mlDDDebug, "    control edge from bb ENTRY to bb %d\n"
#define CMSG_CFG_ALG_CONTROL_FROM_BB_TO_BBEXIT              common::WriteMsg::mlDDDebug, "    control edge from bb %d to bb EXIT\n"
#define CMSG_CFG_ALG_CONTROL_FROM_BB_IS_NOT_A_VALID_BB      common::WriteMsg::mlDDDebug, "    warning: control edge from (%d) bb is not a valid bb\n"
#define CMSG_CFG_ALG_VISIT_NORMALMETHOD                     common::WriteMsg::mlDDDebug, "Visit struc::NormalMethod: %s:%d\n"
#define CMSG_CFG_ALG_VISITEND_NORMALMETHOD                  common::WriteMsg::mlDDDebug, "VisitEnd struc::NormalMethod: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_TYPEPARAM                        common::WriteMsg::mlDDDebug, "Visit struc::TypeParameter: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_VAR                              common::WriteMsg::mlDDDebug, "Visit struc::Variable: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_INSTINITB                        common::WriteMsg::mlDDDebug, "Visit struc::InstanceInitializerBlock: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_STATICINITB                      common::WriteMsg::mlDDDebug, "Visit struc::StaticInitializerBlock: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_ENUMCONST                        common::WriteMsg::mlDDDebug, "Visit struc::EnumConstant: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_ASSERT                           common::WriteMsg::mlDDDebug, "Visit statm::Assert: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_BLOCK                            common::WriteMsg::mlDDDebug, "Visit statm::Block: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_BREAK                            common::WriteMsg::mlDDDebug, "Visit statm::Break: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_CONTINUE                         common::WriteMsg::mlDDDebug, "Visit statm::Continue: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_ITERATION                        common::WriteMsg::mlDDDebug, "VisitEnd statm::Iteration: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_DO                               common::WriteMsg::mlDDDebug, "Visit statm::Do: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_BFOR                             common::WriteMsg::mlDDDebug, "Visit statm::BasicFor: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_EFOR                             common::WriteMsg::mlDDDebug, "Visit statm::EnhancedFor: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_EXPRSTM                          common::WriteMsg::mlDDDebug, "Visit statm::ExpressionStatement: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_IF                               common::WriteMsg::mlDDDebug, "Visit statm::If: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_RETURN                           common::WriteMsg::mlDDDebug, "Visit statm::Return: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_SYNCHRONIZED                     common::WriteMsg::mlDDDebug, "Visit statm::Synchronized: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_SWITCH                           common::WriteMsg::mlDDDebug, "Visit statm::Switch: %s:%d\n"
#define CMSG_CFG_ALG_VISITEND_SWITCH                        common::WriteMsg::mlDDDebug, "VisitEnd statm::Switch: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_SWITCHLABEL                      common::WriteMsg::mlDDDebug, "Visit statm::SwitchLabel: %s:%d\n"
#define CMSG_CFG_ALG_VISITEND_SWITCHLABEL                   common::WriteMsg::mlDDDebug, "VisitEnd statm::SwitchLabel: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_HANDLER                          common::WriteMsg::mlDDDebug, "Visit statm::Handler: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_TRY                              common::WriteMsg::mlDDDebug, "Visit statm::Try: %s:%d\n"
#define CMSG_CFG_ALG_VISITEND_TRY                           common::WriteMsg::mlDDDebug, "VisitEnd statm::Try: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_THROW                            common::WriteMsg::mlDDDebug, "Visit statm::Throw: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_WHILE                            common::WriteMsg::mlDDDebug, "Visit statm::While: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_LABELEDSTM                       common::WriteMsg::mlDDDebug, "Visit statm::LabeledStatement: %s:%d\n"
#define CMSG_CFG_ALG_VISITEND_LABELEDSTM                    common::WriteMsg::mlDDDebug, "VisitEnd statm::LabeledStatement: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_METHODINV                        common::WriteMsg::mlDDDebug, "Visit expr::MethodInvocation: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_NEWCLASS                         common::WriteMsg::mlDDDebug, "Visit expr::NewClass: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_NEWARRAY                         common::WriteMsg::mlDDDebug, "Visit expr::NewArray: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_CONDITIONAL                      common::WriteMsg::mlDDDebug, "Visit expr::Conditional: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_PARENTHESIZEDEXPR                common::WriteMsg::mlDDDebug, "Visit expr::ParenthesizedExpression: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_BINARY                           common::WriteMsg::mlDDDebug, "Visit expr::Binary: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_UNARY                            common::WriteMsg::mlDDDebug, "Visit expr::Unary: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_ERRONEOUS                        common::WriteMsg::mlDDDebug, "Visit expr::Erroneous: %s:%d\n"
#define CMSG_CFG_ALG_SYNTAX_ERROR                           common::WriteMsg::mlWarning, "WARN: The source code contain one or more syntax error!"
#define CMSG_CFG_ALG_VISIT_INSTANCEOF                       common::WriteMsg::mlDDDebug, "Visit expr::InstanceOf: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_ID                               common::WriteMsg::mlDDDebug, "Visit expr::Identifier: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_FIELD_ACCES                      common::WriteMsg::mlDDDebug, "Visit expr::FieldAccess: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_NORMAL_ANNOTATION                common::WriteMsg::mlDDDebug, "Visit expr::NormalAnnotation: %s:%d\n"
#define CMSG_CFG_ALG_VISIT_SINGLE_ELEMENT_ANNOTATION        common::WriteMsg::mlDDDebug, "Visit expr::SingleElementAnnotation: %s:%d\n"


//AlgorithmCreates.cpp
#define CMSG_CFG_ALG_CREATE_NEWCLASS                        common::WriteMsg::mlDDebug, "DDebug: AlgorithmCreates: NewClass (%d) \n"

#define CMSG_EX_ALG_CREATES_NEXT_ELEMENT_DOES_NOT_EXIST    "Next element does not exist"

//AlgorithmDU.cpp
#define CMSG_CFG_COLLECT_DU_INFO                            common::WriteMsg::mlDDebug, "Starting collect the DU informations from nodeId: %d\n"

//Common.cpp
#define CMSG_COMMON_MISSING_EDGE                            common::WriteMsg::mlDebug, "Debug: %s (%d) has no %s edge\n"
#define CMSG_COMMON_PACKAGETYPE_HAS_NO_REFERSTO             common::WriteMsg::mlDebug, "Debug: PackageType (%d) has no refersTo edge\n"
#define CMSG_COMMON_CLASSTYPE_HAS_NO_REFERSTO               common::WriteMsg::mlDebug, "Debug: ClassType (%d) has no refersTo edge\n"
#define CMSG_COMMON_TYPEVAR_HAS_NO_BOUND                    common::WriteMsg::mlDebug, "Debug: TypeParameter (%d) referred by TypeVariable (%d) has no bound\n"
#define CMSG_COMMON_TYPEVAR_HAS_NO_REFERSTO                 common::WriteMsg::mlDebug, "Debug: TypeVariable (%d) has no refersTo edge\n"
#define CMSG_COMMON_TYPEEXPR_HAS_NO_TYPE                    common::WriteMsg::mlDebug, "Debug: TypeExpression (%d %s) has no type\n"

#define CMSG_COMMON_EX_INVALID_NODE(ID,NODEKIND)            "Invalid node (id: " + Common::toString(ID) + ", kind: " + Common::toString(NODEKIND) + ")"

//VisitorDU.cpp
#define CMSG_CFG_DU_VISIT_POSTFIX_EXPR                      common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::PostfixExpression)\n"
#define CMSG_CFG_DU_VISIT_POSTFIX_EXPR_NULL_OPERAND         common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL operand pointer (node %d) expr::PostfixExpression\n"
#define CMSG_CFG_DU_VISIT_POSTFIX_EXPR_CANNOT_ALLOCATE_MEM  common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::PostfixExpression)\n"
#define CMSG_CFG_DU_VISITEND_POSTFIX_EXPR                   common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::PostfixExpression)\n"
#define CMSG_CFG_DU_VISITEND                                common::WriteMsg::mlDDebug, "%s\n"
#define CMSG_CFG_DU_VISIT_PREFIX_EXPR                       common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::PrefixExpression)\n"
#define CMSG_CFG_DU_VISIT_PREFIX_EXPR_NULL_OPERAND          common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL operand pointer (node %d) expr::PrefixExpression\n"
#define CMSG_CFG_DU_VISIT_PREFIX_EXPR_CANNOT_ALLOCATE_MEM   common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::PrefixExpression)\n"
#define CMSG_CFG_DU_VISITEND_PREFIX_EXPR                    common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::PrefixExpression)\n"
#define CMSG_CFG_DU_VISIT_INTSTANCEOF                       common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::InstanceOf)\n"
#define CMSG_CFG_DU_VISIT_INTSTANCEOF_NULL_OPERAND          common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL operand pointer (node %d) expr::InstanceOf\n"
#define CMSG_CFG_DU_VISIT_INTSTANCEOF_CANNOT_ALLOCATE_MEM   common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::InstanceOf)\n"
#define CMSG_CFG_DU_VISITEND_INSTANCEOF                     common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::InstanceOf)\n"
#define CMSG_CFG_DU_VISIT_TYPE_CAST                         common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::TypeCast)\n"
#define CMSG_CFG_DU_VISIT_TYPE_CAST_NULL_OPERAND            common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL operand pointer (node %d) expr::TypeCast\n"
#define CMSG_CFG_DU_VISIT_TYPE_CAST_CANNOT_ALLOCATE_MEM     common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::TypeCast)\n"
#define CMSG_CFG_DU_VISITEND_TYPE_CAST                      common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::TypeCast)\n"
#define CMSG_CFG_DU_VISIT_METHOD_INV                        common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::MethodInvocation)\n"
#define CMSG_CFG_DU_VISIT_METHOD_INV_TOOL_GEN               common::WriteMsg::mlDDebug, "This node (%d) is generated by the tool. No DUInfo will be created (expr::MethodInvocation).\n"
#define CMSG_CFG_DU_VISIT_METHOD_INV_NULL_INVOKES           common::WriteMsg::mlDDebug, "EDGE CROSS 1: Null invokes pointer for node %d (expr::MethodInvocation)\n"
#define CMSG_CFG_DU_VISIT_METHOD_INV_NULL_OPERAND           common::WriteMsg::mlDDebug, "EDGE TREE 1: Null operand pointer for node %d (expr::MethodInvocation)\n"
#define CMSG_CFG_DU_VISIT_METHOD_INV_CANNOT_ALLOCATE_MEM    common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::MethodInvocation)\n"
#define CMSG_CFG_DU_VISITEND_METHOD_INV                     common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::MethodInvocation)\n"
#define CMSG_CFG_DU_VISIT_PARENTHESE                        common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::ParenthesizedExpression)\n"
#define CMSG_CFG_DU_VISIT_PARENTHESE_NULL_OPERAND           common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL operand pointer (node %d) expr::ParenthesizedExpression\n"
#define CMSG_CFG_DU_VISIT_PARENTHESE_CANNOT_ALLOCATE_MEM    common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::ParenthesizedExpression)\n"
#define CMSG_CFG_DU_VISITEND_PARENTHESE                     common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::ParenthesizedExpression)\n"
#define CMSG_CFG_DU_VISIT_INFIXE                            common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::InfixExpression)\n"
#define CMSG_CFG_DU_VISIT_INFIXE_NULL_LEFTP                 common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL left operand pointer (node %d) expr::InfixExpression\n"
#define CMSG_CFG_DU_VISIT_INFIXE_NULL_RIGHTP                common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL right operand pointer (node %d) expr::InfixExpression\n"
#define CMSG_CFG_DU_VISIT_INFIXE_CANNOT_ALLOCATE_MEM        common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::InfixExpression)\n"
#define CMSG_CFG_DU_VISITEND_INFIXE                         common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::InfixExpression)\n"
#define CMSG_CFG_DU_VISIT_ASSIGNMENT                        common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::Assignment)\n"
#define CMSG_CFG_DU_VISIT_ASSIGNMENT_NULL_LEFTP             common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL left operand pointer (node %d) expr::Assignment\n"
#define CMSG_CFG_DU_VISIT_ASSIGNMENT_NULL_RIGHTP            common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL right operand pointer (node %d) expr::Assignment\n"
#define CMSG_CFG_DU_VISIT_ASSIGNMENT_CANNOT_ALLOCATE_MEM    common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::Assignment)\n"
#define CMSG_CFG_DU_VISITEND_ASSIGNMENT                     common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::Assignment)\n"
#define CMSG_CFG_DU_VISIT_ARRAY_ACC                         common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::ArrayAccess)\n"
#define CMSG_CFG_DU_VISIT_ARRAY_ACC_NULL_LEFTP              common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL left operand pointer (node %d) expr::ArrayAccess\n"
#define CMSG_CFG_DU_VISIT_ARRAY_ACC_NULL_RIGHTP             common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL right operand pointer (node %d) expr::ArrayAccess\n"
#define CMSG_CFG_DU_VISIT_ARRAY_ACC_CANNOT_ALLOCATE_MEM     common::WriteMsg::mlDDebug, "Cannot allocate memory for AddressInfo (expr::ArrayAccess)\n"
#define CMSG_CFG_DU_VISITEND_ARRAY_ACC                      common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::ArrayAccess)\n", node.getId()
#define CMSG_CFG_DU_VISIT_FIELD_ACC                         common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::FieldAccess)\n"
#define CMSG_CFG_DU_VISIT_FIELD_ACC_NULL_LEFTP              common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL left operand pointer (node %d) expr::FieldAccess\n"
#define CMSG_CFG_DU_VISIT_FIELD_ACC_NULL_RIGHTP             common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL right operand pointer (node %d) expr::FieldAccess\n"
#define CMSG_CFG_DU_VISIT_FIELD_ACC_STATIC_RIGHT_OP         common::WriteMsg::mlDDDebug, "Right operand (descriptor: %d) of node %d is static, skip the AddressSelector (expr::FieldAccess)\n"
#define CMSG_CFG_DU_VISIT_FIELD_ACC_CANNOT_ALLOCATE_MEM     common::WriteMsg::mlDDebug, "Cannot allocate memory for AddressInfo (expr::FieldAccess)\n"
#define CMSG_CFG_DU_VISITEND_FIELD_ACC                      common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::FieldAccess)\n"
#define CMSG_CFG_DU_VISIT_ID                                common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::Identifier)\n"
#define CMSG_CFG_DU_VISIT_ID_NULL_REFERSTO                  common::WriteMsg::mlDDebug, "EDGE CROSS 1: NULL refersTo pointer (node %d) expr::Identifier\n"
#define CMSG_CFG_DU_VISIT_ID_CANNOT_ALLOCATE_MEM            common::WriteMsg::mlDDebug, "Cannot allocate memory for AddressInfo (expr::Identifier)\n"
#define CMSG_CFG_DU_VISITEND_ID                             common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::Identifier)\n"
#define CMSG_CFG_DU_VISIT_LITERAL                           common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::Literal)\n"
#define CMSG_CFG_DU_VISIT_LITERAL_CANNOT_ALLOCATE_MEM       common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::Literal)\n"
#define CMSG_CFG_DU_VISITEND_LITERAL                        common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::Literal)\n"
#define CMSG_CFG_DU_VISIT_CONDITIONAL                       common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::Conditional)\n"
#define CMSG_CFG_DU_VISIT_CONDITIONAL_NULL_CONDITION        common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL condition operand pointer (node %d) expr::Conditional\n"
#define CMSG_CFG_DU_VISIT_CONDITIONAL_NULL_FALSE_OP         common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL false operand pointer (node %d) expr::Conditional\n"
#define CMSG_CFG_DU_VISIT_CONDITIONAL_NULL_TRUE_OP          common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL true operand pointer (node %d) expr::Conditional\n"
#define CMSG_CFG_DU_VISIT_CONDITIONAL_CANNOT_ALLOCATE_MEM   common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::Conditional)\n"
#define CMSG_CFG_DU_VISITEND_CONDITIONAL                    common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::Conditional)\n"
#define CMSG_CFG_DU_VISIT_MARKER_ANNOT                      common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::MarkerAnnotation)\n"
#define CMSG_CFG_DU_VISIT_MARKER_ANNOT_CANNOT_ALLOCATE_MEM  common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::MarkerAnnotation)\n"
#define CMSG_CFG_DU_VISITEND_MARKER_ANNOT                   common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::MarkerAnnotation)\n"
#define CMSG_CFG_DU_VISIT_SINGLE_ANNOT                      common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::SingleElementAnnotation)\n"
#define CMSG_CFG_DU_VISIT_SINGLE_ANNOT_NULL_ARG             common::WriteMsg::mlError, "EDGE TREE 1: NULL argument pointer (node %d) expr::SingleElementAnnotation\n"
#define CMSG_CFG_DU_VISIT_SINGLE_ANNOT_CANNOT_ALLOCATE_MEM  common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::SingleElementAnnotation)\n"
#define CMSG_CFG_DU_VISITEND_SINGLE_ANNOT                   common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::SingleElementAnnotation)\n"
#define CMSG_CFG_DU_VISIT_NORMAL_ANNOT                      common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::NormalAnnotation)\n"
#define CMSG_CFG_DU_VISIT_NORMAL_ANNOT_CANNOT_ALLOCATE_MEM  common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::NormalAnnotation)\n"
#define CMSG_CFG_DU_VISITEND_NORMAL_ANNOT                   common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::NormalAnnotation)\n"
#define CMSG_CFG_DU_VISIT_NEW_CLASS                         common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::NewClass)\n"
#define CMSG_CFG_DU_VISIT_NEW_CLASS_TOOL_GEN                common::WriteMsg::mlDDebug, "This node (%d) is generated by the tool. No DUInfo will be created (expr::NewClass).\n"
#define CMSG_CFG_DU_VISIT_NEW_CLASS_NULL_CONSTR             common::WriteMsg::mlDDebug, "EDGE CROSS 1: NULL constructor pointer (node %d) expr::NewClass\n"
#define CMSG_CFG_DU_VISIT_NEW_CLASS_CANNOT_ALLOCATE_MEM     common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::NewClass)\n"
#define CMSG_CFG_DU_VISITEND_NEW_CLASS                      common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::NewClass)\n"
#define CMSG_CFG_DU_VISIT_NEW_ARR                           common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::NewArray)\n"
#define CMSG_CFG_DU_VISIT_NEW_ARR_CANNOT_ALLOCATE_MEM       common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (expr::NewArray)\n"
#define CMSG_CFG_DU_VISITEND_NEW_ARR                        common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::NewArray)\n"
#define CMSG_CFG_DU_VISIT_SUPER                             common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::Super)\n"
#define CMSG_CFG_DU_VISIT_SUPER_TOOL_GEN                    common::WriteMsg::mlDDebug, "This node (%d) is generated by the tool. No DUInfo will be created (expr::Super).\n"
#define CMSG_CFG_DU_VISIT_SUPER_CANNOT_ALLOCATE_MEM         common::WriteMsg::mlDDebug, "Cannot allocate memory for AddressInfo (expr::Super)\n"
#define CMSG_CFG_DU_VISITEND_SUPER                          common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::Super)\n"
#define CMSG_CFG_DU_VISIT_THIS                              common::WriteMsg::mlDDebug, "Visiting started for node %d (expr::This)\n"
#define CMSG_CFG_DU_VISIT_THIS_TOOL_GEN                     common::WriteMsg::mlDDebug, "This node (%d) is generated by the tool. No DUInfo will be created (expr::This).\n"
#define CMSG_CFG_DU_VISIT_THIS_CANNOT_ALLOCATE_MEM          common::WriteMsg::mlDDebug, "Cannot allocate memory for AddressInfo (expr::This)\n"
#define CMSG_CFG_DU_VISITEND_THIS                           common::WriteMsg::mlDDebug, "Visiting finished for node %d (expr::This)\n"
#define CMSG_CFG_DU_VISIT_CLASS                             common::WriteMsg::mlDDebug, "Visiting started for node %d (struc::Class)\n"
#define CMSG_CFG_DU_VISIT_CLASS_TOOL_GEN                    common::WriteMsg::mlDDebug, "This node (%d) is generated by the tool. No DUInfo will be created (struc::Class).\n"
#define CMSG_CFG_DU_VISIT_CLASS_CANNOT_ALLOCATE_MEM         common::WriteMsg::mlDDebug, "Cannot allocate memory for AddressInfo (struc::Class)\n"
#define CMSG_CFG_DU_VISITEND_CLASS                          common::WriteMsg::mlDDebug, "Visiting finished for node %d (struc::Class)\n"
#define CMSG_CFG_DU_VISIT_ANNON_CLASS                       common::WriteMsg::mlDDebug, "Visiting started for node %d (struc::AnonymousClass)\n"
#define CMSG_CFG_DU_VISIT_ANNON_CLASS_TOOL_GEN              common::WriteMsg::mlDDebug, "This node (%d) is generated by the tool. No DUInfo will be created (struc::AnonymousClass).\n"
#define CMSG_CFG_DU_VISIT_ANNON_CLASS_CANNOT_ALLOCATE_MEM   common::WriteMsg::mlDDebug, "Cannot allocate memory for AddressInfo (struc::AnonymousClass)\n"
#define CMSG_CFG_DU_VISITEND_ANNON_CLASS                    common::WriteMsg::mlDDebug, "Visiting finished for node %d (struc::AnonymousClass)\n"
#define CMSG_CFG_DU_VISIT_METHOD                            common::WriteMsg::mlDDebug, "Visiting started for node %d (struc::Method)\n"
#define CMSG_CFG_DU_VISIT_METHOD_TOOL_GEN                   common::WriteMsg::mlDDebug, "This node (%d) is generated by the tool. No DUInfo will be created (struc::Method).\n"
#define CMSG_CFG_DU_VISIT_METHOD_CANNOT_ALLOCATE_MEM        common::WriteMsg::mlDDebug, "Cannot allocate memory for AddressInfo (struc::Method)\n"
#define CMSG_CFG_DU_VISITEND_METHOD                         common::WriteMsg::mlDDebug, "Visiting finished for node %d (struc::Method)\n"
#define CMSG_CFG_DU_VISIT_VAR                               common::WriteMsg::mlDDebug, "Visiting started for node %d (struc::Variable)\n"
#define CMSG_CFG_DU_VISIT_VAR_CANNOT_ALLOCATE_MEM           common::WriteMsg::mlDDebug, "Cannot allocate memory for AddressInfo (struc::Variable)\n"
#define CMSG_CFG_DU_VISITEND_VAR                            common::WriteMsg::mlDDebug, "Visiting finished for node %d (struc::Variable)\n"
#define CMSG_CFG_DU_VISIT_PARAM                             common::WriteMsg::mlDDebug, "Visiting started for node %d (struc::Parameter)\n"
#define CMSG_CFG_DU_VISIT_PARAM_CANNOT_ALLOCATE_MEM         common::WriteMsg::mlDDebug, "Cannot allocate memory for AddressInfo (struc::Parameter)\n"
#define CMSG_CFG_DU_VISITEND_PARAM                          common::WriteMsg::mlDDebug, "Visiting finished for node %d (struc::Parameter)\n"
#define CMSG_CFG_DU_VISIT_ENUM_CONST                        common::WriteMsg::mlDDebug, "Visiting started for node %d (struc::EnumConstant)\n"
#define CMSG_CFG_DU_VISIT_ENUM_CONST_CANNOT_ALLOCATE_MEM    common::WriteMsg::mlDDebug, "Cannot allocate memory for AddressInfo (struc::EnumConstant)\n"
#define CMSG_CFG_DU_VISITEND_ENUM_CONST                     common::WriteMsg::mlDDebug, "Visiting finished for node %d (struc::EnumConstant)\n"
#define CMSG_CFG_DU_VISIT_RETURN                            common::WriteMsg::mlDDebug, "Visiting started for node %d (struc::Return)\n"
#define CMSG_CFG_DU_VISIT_RETURN_NULL_EXPR                  common::WriteMsg::mlDDebug, "EDGE TREE 1: NULL expression pointer (node %d) tatm::Return\n"
#define CMSG_CFG_DU_VISIT_RETURN_CANNOT_ALLOCATE_MEM        common::WriteMsg::mlDDebug, "Cannot allocate memory for OperationInfo (statm::Return)\n"
#define CMSG_CFG_DU_VISITEND_RETURN                         common::WriteMsg::mlDDebug, "Visiting finished for node %d (statm::Return)\n"
#define CMSG_CFG_DU_CHECK_INIT_VAL                          common::WriteMsg::mlDDebug, "Checking initial value for node %d...\n"
#define CMSG_CFG_DU_CHECK_INIT_VAL_END                      common::WriteMsg::mlDDebug, "Checking initial value for node %d finished\n"
#define CMSG_CFG_DU_CHECK_CONDITION_INFO                    common::WriteMsg::mlDDebug, "Checking conditional information for node %d...\n"
#define CMSG_CFG_DU_CHECK_CONDITION_INFO_NULL_FALSE_OP      common::WriteMsg::mlDDebug, "NULL false operand pointer (isConditionalValue(%d))\n"
#define CMSG_CFG_DU_CHECK_CONDITION_INFO_NULL_TRUE_OP       common::WriteMsg::mlDDebug, "NULL true operand pointer (isConditionalValue(%d))\n"
#define CMSG_CFG_DU_CHECK_CONDITION_INFO_END                common::WriteMsg::mlDDebug, "Checking conditional information for node %d finished\n"
#define CMSG_CFG_DU_DU_INFO_ALREADY_EXIST                   common::WriteMsg::mlDDebug, "DUInfo %d is already exist\n"
#define CMSG_CFG_DU_NUMBER_OF_DUINFOS                       common::WriteMsg::mlDDebug, "Number of DUInfos: %d (AddressInfo: %d, OperationInfo: %d)\n"
#define CMSG_CFG_DU_SIZE_OF_DUINFOS                         common::WriteMsg::mlDDebug, "Size of DUInfos:   %d KB (AddressInfo: %d KB, OperationInfo: %d KB)\n"

#define CMSG_CFG_DU_EX_CANNOT_ALLOCATE_MEM_FOR_OPINFO       "Cannot allocate memory for OperationInfo"
#define CMSG_CFG_DU_EX_NULL_OPERAND                         "EDGE TREE 1: NULL operand pointer"
#define CMSG_CFG_DU_EX_NULL_LEFT_OPERAND                    "EDGE TREE 1: NULL left operand pointer"
#define CMSG_CFG_DU_EX_NULL_RIGHT_OPERAND                   "EDGE TREE 1: NULL right operand pointer"
#define CMSG_CFG_DU_EX_CANNOT_ALLOCATE_MEM_FOR_ADDRINFO     "Cannot allocate memory for AddressInfo"
#define CMSG_CFG_DU_EX_NULL_CONDITION_OPERAND               "EDGE TREE 1: NULL condition operand pointer"
#define CMSG_CFG_DU_EX_NULL_FALSE_OPERAND                   "EDGE TREE 1: NULL false operand pointer"
#define CMSG_CFG_DU_EX_NULL_TRUE_OPERAND                    "EDGE TREE 1: NULL true operand pointer"
#define CMSG_CFG_DU_EX_NULL_ARGUMENT                        "EDGE TREE 1: NULL argument pointer"

#endif