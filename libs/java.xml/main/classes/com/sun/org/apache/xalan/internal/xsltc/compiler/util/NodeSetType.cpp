#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLT.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <jcpp.h>

#undef BASIS_LIBRARY_CLASS
#undef DATA_CONVERSION_ERR
#undef DOM_INTF
#undef DOM_INTF_SIG
#undef DUP
#undef FATAL
#undef GET_NODE_VALUE
#undef ICONST_0
#undef ICONST_1
#undef LOAD
#undef MAKE_NODE
#undef MAKE_NODE_LIST
#undef MAKE_NODE_LIST_SIG2
#undef MAKE_NODE_SIG2
#undef NEXT
#undef NEXT_SIG
#undef NODE_ITERATOR
#undef NODE_ITERATOR_SIG
#undef NOP
#undef POP
#undef STORE
#undef STRING_SIG
#undef SWAP
#undef TRANSLET_INTF_SIG

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFLT = ::com::sun::org::apache::bcel::internal::generic::IFLT;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $1ObjectType = ::com::sun::org::apache::bcel::internal::generic::ObjectType;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $1ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeType;
using $ObjectType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ObjectType;
using $RealType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$MethodInfo _NodeSetType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(NodeSetType, init$, void)},
	{"LOAD", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(NodeSetType, LOAD, $Instruction*, int32_t)},
	{"STORE", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(NodeSetType, STORE, $Instruction*, int32_t)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeSetType, getClassName, $String*)},
	{"getFirstNode", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PRIVATE, $method(NodeSetType, getFirstNode, void, $ClassGenerator*, $MethodGenerator*)},
	{"identicalTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)Z", nullptr, $PUBLIC, $virtualMethod(NodeSetType, identicalTo, bool, $Type*)},
	{"toJCType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(NodeSetType, toJCType, $1Type*)},
	{"toSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeSetType, toSignature, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NodeSetType, toString, $String*)},
	{"translateBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(NodeSetType, translateBox, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateFrom", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(NodeSetType, translateFrom, void, $ClassGenerator*, $MethodGenerator*, $Class*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC, $virtualMethod(NodeSetType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $Type*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)V", nullptr, $PUBLIC, $method(NodeSetType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $BooleanType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType;)V", nullptr, $PUBLIC, $method(NodeSetType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $StringType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType;)V", nullptr, $PUBLIC, $method(NodeSetType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $RealType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType;)V", nullptr, $PUBLIC, $method(NodeSetType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $NodeType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType;)V", nullptr, $PUBLIC, $method(NodeSetType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $ObjectType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType;)V", nullptr, $PUBLIC, $method(NodeSetType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $ReferenceType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(NodeSetType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $Class*)},
	{"translateToDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC, $virtualMethod(NodeSetType, translateToDesynthesized, $FlowList*, $ClassGenerator*, $MethodGenerator*, $BooleanType*)},
	{"translateUnBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(NodeSetType, translateUnBox, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _NodeSetType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.NodeSetType",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type",
	nullptr,
	nullptr,
	_NodeSetType_MethodInfo_
};

$Object* allocate$NodeSetType($Class* clazz) {
	return $of($alloc(NodeSetType));
}

void NodeSetType::init$() {
	$Type::init$();
}

$String* NodeSetType::toString() {
	return "node-set"_s;
}

bool NodeSetType::identicalTo($Type* other) {
	return $equals(this, other);
}

$String* NodeSetType::toSignature() {
	$init($Constants);
	return $Constants::NODE_ITERATOR_SIG;
}

$1Type* NodeSetType::toJCType() {
	$init($Constants);
	return $new($1ObjectType, $Constants::NODE_ITERATOR);
}

void NodeSetType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Type* type) {
	$useLocalCurrentObjectStackCache();
	$init($Type);
	if (type == $Type::String) {
		translateTo(classGen, methodGen, $cast($StringType, type));
	} else {
		if (type == $Type::Boolean) {
			translateTo(classGen, methodGen, $cast($BooleanType, type));
		} else {
			if (type == $Type::Real) {
				translateTo(classGen, methodGen, $cast($RealType, type));
			} else {
				if (type == $Type::Node) {
					translateTo(classGen, methodGen, $cast($NodeType, type));
				} else {
					if (type == $Type::Reference) {
						translateTo(classGen, methodGen, $cast($ReferenceType, type));
					} else {
						if (type == $Type::Object) {
							translateTo(classGen, methodGen, $cast($ObjectType, type));
						} else {
							$init($ErrorMsg);
							$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
							$var($Object, var$1, $of(toString()));
							$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of($nc(type)->toString()))));
							$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
						}
					}
				}
			}
		}
	}
}

void NodeSetType::translateFrom($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	if ($nc($($nc(clazz)->getName()))->equals("org.w3c.dom.NodeList"_s)) {
		$nc(il)->append($(classGen->loadTranslet()));
		il->append($(methodGen->loadDOM()));
		$init($Constants);
		int32_t convert = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "nodeList2Iterator"_s, $$str({"(Lorg/w3c/dom/NodeList;"_s, $Constants::TRANSLET_INTF_SIG, $Constants::DOM_INTF_SIG, ")"_s, $Constants::NODE_ITERATOR_SIG}));
		il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, convert)));
	} else if ($nc($(clazz->getName()))->equals("org.w3c.dom.Node"_s)) {
		$nc(il)->append($(classGen->loadTranslet()));
		il->append($(methodGen->loadDOM()));
		$init($Constants);
		int32_t convert = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "node2Iterator"_s, $$str({"(Lorg/w3c/dom/Node;"_s, $Constants::TRANSLET_INTF_SIG, $Constants::DOM_INTF_SIG, ")"_s, $Constants::NODE_ITERATOR_SIG}));
		il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, convert)));
	} else {
		$init($ErrorMsg);
		$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
		$var($Object, var$1, $of(toString()));
		$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of(clazz->getName()))));
		$nc($(classGen->getParser()))->reportError($Constants::FATAL, err);
	}
}

void NodeSetType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($FlowList, falsel, translateToDesynthesized(classGen, methodGen, type));
	$init($Constants);
	$nc(il)->append($Constants::ICONST_1);
	$var($BranchHandle, truec, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$nc(falsel)->backPatch($(il->append($Constants::ICONST_0)));
	$nc(truec)->setTarget($(il->append($Constants::NOP)));
}

void NodeSetType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $StringType* type) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	getFirstNode(classGen, methodGen);
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($Constants::DUP));
	$var($BranchHandle, falsec, il->append(static_cast<$BranchInstruction*>($$new($IFLT, nullptr))));
	$init($Type);
	$nc($Type::Node)->translateTo(classGen, methodGen, static_cast<$Type*>(type));
	$var($BranchHandle, truec, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$nc(falsec)->setTarget($(il->append(static_cast<$Instruction*>($Constants::POP))));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, $($nc(classGen)->getConstantPool()), ""_s)));
	$nc(truec)->setTarget($(il->append($Constants::NOP)));
}

void NodeSetType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $RealType* type) {
	$init($Type);
	translateTo(classGen, methodGen, $Type::String);
	$nc($Type::String)->translateTo(classGen, methodGen, $Type::Real);
}

void NodeSetType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $NodeType* type) {
	getFirstNode(classGen, methodGen);
}

void NodeSetType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $ObjectType* type) {
	$init($Constants);
	$nc($($nc(methodGen)->getInstructionList()))->append($Constants::NOP);
}

$FlowList* NodeSetType::translateToDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	getFirstNode(classGen, methodGen);
	return $new($FlowList, $(static_cast<$InstructionHandle*>($nc(il)->append(static_cast<$BranchInstruction*>($$new($IFLT, nullptr))))));
}

void NodeSetType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $ReferenceType* type) {
	$init($Constants);
	$nc($($nc(methodGen)->getInstructionList()))->append($Constants::NOP);
}

void NodeSetType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($String, className, $nc(clazz)->getName());
	$nc(il)->append($(methodGen->loadDOM()));
	$init($Constants);
	il->append(static_cast<$Instruction*>($Constants::SWAP));
	if ($nc(className)->equals("org.w3c.dom.Node"_s)) {
		int32_t index = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::MAKE_NODE, $Constants::MAKE_NODE_SIG2);
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 2)));
	} else {
		bool var$1 = className->equals("org.w3c.dom.NodeList"_s);
		if (var$1 || className->equals("java.lang.Object"_s)) {
			int32_t index = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::MAKE_NODE_LIST, $Constants::MAKE_NODE_LIST_SIG2);
			il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 2)));
		} else if (className->equals("java.lang.String"_s)) {
			int32_t next = $nc(cpg)->addInterfaceMethodref($Constants::NODE_ITERATOR, "next"_s, "()I"_s);
			int32_t index = cpg->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_NODE_VALUE, $$str({"(I)"_s, $Constants::STRING_SIG}));
			il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, next, 1)));
			il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 2)));
		} else {
			$init($ErrorMsg);
			$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::DATA_CONVERSION_ERR, $($of(toString())), $of(className)));
			$nc($(classGen->getParser()))->reportError($Constants::FATAL, err);
		}
	}
}

void NodeSetType::getFirstNode($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, $nc(cpg)->addInterfaceMethodref($Constants::NODE_ITERATOR, $Constants::NEXT, $Constants::NEXT_SIG), 1)));
}

void NodeSetType::translateBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$init($Type);
	translateTo(classGen, methodGen, $Type::Reference);
}

void NodeSetType::translateUnBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$init($Constants);
	$nc($($nc(methodGen)->getInstructionList()))->append($Constants::NOP);
}

$String* NodeSetType::getClassName() {
	$init($Constants);
	return ($Constants::NODE_ITERATOR);
}

$Instruction* NodeSetType::LOAD(int32_t slot) {
	return $new($ALOAD, slot);
}

$Instruction* NodeSetType::STORE(int32_t slot) {
	return $new($ASTORE, slot);
}

NodeSetType::NodeSetType() {
}

$Class* NodeSetType::load$($String* name, bool initialize) {
	$loadClass(NodeSetType, name, initialize, &_NodeSetType_ClassInfo_, allocate$NodeSetType);
	return class$;
}

$Class* NodeSetType::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com