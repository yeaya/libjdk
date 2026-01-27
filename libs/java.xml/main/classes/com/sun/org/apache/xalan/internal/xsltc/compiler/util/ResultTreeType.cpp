#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ResultTreeType.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <jcpp.h>

#undef DATA_CONVERSION_ERR
#undef DOM_INTF
#undef DOM_INTF_SIG
#undef DUP
#undef FATAL
#undef ICONST_1
#undef LOAD
#undef MAKE_NODE
#undef MAKE_NODE_LIST
#undef MAKE_NODE_LIST_SIG2
#undef MAKE_NODE_SIG2
#undef NAMESPACE_INDEX
#undef NAMESPACE_INDEX_SIG
#undef NAMES_INDEX
#undef NAMES_INDEX_SIG
#undef NODE_ITERATOR_SIG
#undef NOP
#undef POP
#undef RTF_INITIAL_SIZE
#undef STORE
#undef STRING_SIG
#undef STRING_VALUE_HANDLER
#undef STRING_VALUE_HANDLER_SIG
#undef TRANSLET_CLASS
#undef TRANSLET_OUTPUT_INTERFACE
#undef TRANSLET_OUTPUT_SIG
#undef TYPES_INDEX
#undef TYPES_INDEX_SIG
#undef URIS_INDEX
#undef URIS_INDEX_SIG

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
using $ObjectType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ObjectType;
using $RealType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _ResultTreeType_FieldInfo_[] = {
	{"_methodName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ResultTreeType, _methodName)},
	{}
};

$MethodInfo _ResultTreeType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(ResultTreeType, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ResultTreeType, init$, void, $String*)},
	{"LOAD", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(ResultTreeType, LOAD, $Instruction*, int32_t)},
	{"STORE", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(ResultTreeType, STORE, $Instruction*, int32_t)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ResultTreeType, getClassName, $String*)},
	{"getMethodName", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(ResultTreeType, getMethodName, $String*)},
	{"identicalTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)Z", nullptr, $PUBLIC, $virtualMethod(ResultTreeType, identicalTo, bool, $Type*)},
	{"implementedAsMethod", "()Z", nullptr, $PUBLIC, $virtualMethod(ResultTreeType, implementedAsMethod, bool)},
	{"toJCType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(ResultTreeType, toJCType, $1Type*)},
	{"toSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ResultTreeType, toSignature, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ResultTreeType, toString, $String*)},
	{"translateBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ResultTreeType, translateBox, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC, $virtualMethod(ResultTreeType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $Type*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)V", nullptr, $PUBLIC, $method(ResultTreeType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $BooleanType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType;)V", nullptr, $PUBLIC, $method(ResultTreeType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $StringType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType;)V", nullptr, $PUBLIC, $method(ResultTreeType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $RealType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType;)V", nullptr, $PUBLIC, $method(ResultTreeType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $ReferenceType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType;)V", nullptr, $PUBLIC, $method(ResultTreeType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $NodeSetType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType;)V", nullptr, $PUBLIC, $method(ResultTreeType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $ObjectType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(ResultTreeType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $Class*)},
	{"translateToDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC, $virtualMethod(ResultTreeType, translateToDesynthesized, $FlowList*, $ClassGenerator*, $MethodGenerator*, $BooleanType*)},
	{"translateUnBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ResultTreeType, translateUnBox, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _ResultTreeType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ResultTreeType",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type",
	nullptr,
	_ResultTreeType_FieldInfo_,
	_ResultTreeType_MethodInfo_
};

$Object* allocate$ResultTreeType($Class* clazz) {
	return $of($alloc(ResultTreeType));
}

void ResultTreeType::init$() {
	$Type::init$();
	$set(this, _methodName, nullptr);
}

void ResultTreeType::init$($String* methodName) {
	$Type::init$();
	$set(this, _methodName, methodName);
}

$String* ResultTreeType::toString() {
	return "result-tree"_s;
}

bool ResultTreeType::identicalTo($Type* other) {
	return ($instanceOf(ResultTreeType, other));
}

$String* ResultTreeType::toSignature() {
	$init($Constants);
	return $Constants::DOM_INTF_SIG;
}

$1Type* ResultTreeType::toJCType() {
	return $Util::getJCRefType($(toSignature()));
}

$String* ResultTreeType::getMethodName() {
	return this->_methodName;
}

bool ResultTreeType::implementedAsMethod() {
	return this->_methodName != nullptr;
}

void ResultTreeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Type* type) {
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
				if (type == $Type::NodeSet) {
					translateTo(classGen, methodGen, $cast($NodeSetType, type));
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

void ResultTreeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($Constants::POP));
	il->append($Constants::ICONST_1);
}

void ResultTreeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $StringType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (this->_methodName == nullptr) {
		$init($Constants);
		int32_t index = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getStringValue"_s, $$str({"()"_s, $Constants::STRING_SIG}));
		$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 1)));
	} else {
		$var($String, className, classGen->getClassName());
		int32_t current = methodGen->getLocalIndex("current"_s);
		$nc(il)->append($(classGen->loadTranslet()));
		if (classGen->isExternal()) {
			il->append(static_cast<$Instruction*>($$new($CHECKCAST, $nc(cpg)->addClass(className))));
		}
		$init($Constants);
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$Instruction*>($$new($GETFIELD, $nc(cpg)->addFieldref(className, "_dom"_s, $Constants::DOM_INTF_SIG))));
		int32_t index = $nc(cpg)->addMethodref($Constants::STRING_VALUE_HANDLER, "<init>"_s, "()V"_s);
		il->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::STRING_VALUE_HANDLER))));
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, index)));
		$var($LocalVariableGen, handler, methodGen->addLocalVariable("rt_to_string_handler"_s, $($Util::getJCRefType($Constants::STRING_VALUE_HANDLER_SIG)), nullptr, nullptr));
		$nc(handler)->setStart($(il->append(static_cast<$Instruction*>($$new($ASTORE, handler->getIndex())))));
		index = cpg->addMethodref(className, this->_methodName, $$str({"("_s, $Constants::DOM_INTF_SIG, $Constants::TRANSLET_OUTPUT_SIG, ")V"_s}));
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, index)));
		handler->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, handler->getIndex())))));
		index = cpg->addMethodref($Constants::STRING_VALUE_HANDLER, "getValue"_s, $$str({"()"_s, $Constants::STRING_SIG}));
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, index)));
	}
}

void ResultTreeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $RealType* type) {
	$init($Type);
	translateTo(classGen, methodGen, $Type::String);
	$nc($Type::String)->translateTo(classGen, methodGen, $Type::Real);
}

void ResultTreeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $ReferenceType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (this->_methodName == nullptr) {
		$init($Constants);
		$nc(il)->append($Constants::NOP);
	} else {
		$var($LocalVariableGen, domBuilder, nullptr);
		$var($LocalVariableGen, newDom, nullptr);
		$var($String, className, classGen->getClassName());
		int32_t current = methodGen->getLocalIndex("current"_s);
		$nc(il)->append($(classGen->loadTranslet()));
		if (classGen->isExternal()) {
			il->append(static_cast<$Instruction*>($$new($CHECKCAST, $nc(cpg)->addClass(className))));
		}
		il->append($(methodGen->loadDOM()));
		il->append($(methodGen->loadDOM()));
		$init($Constants);
		int32_t index = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getResultTreeFrag"_s, $$str({"(IZ)"_s, $Constants::DOM_INTF_SIG}));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Constants::RTF_INITIAL_SIZE)));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, false)));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 3)));
		il->append(static_cast<$Instruction*>($Constants::DUP));
		$assign(newDom, methodGen->addLocalVariable("rt_to_reference_dom"_s, $($Util::getJCRefType($Constants::DOM_INTF_SIG)), nullptr, nullptr));
		il->append(static_cast<$Instruction*>($$new($CHECKCAST, cpg->addClass($Constants::DOM_INTF_SIG))));
		$nc(newDom)->setStart($(il->append(static_cast<$Instruction*>($$new($ASTORE, newDom->getIndex())))));
		index = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getOutputDomBuilder"_s, $$str({"()"_s, $Constants::TRANSLET_OUTPUT_SIG}));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 1)));
		il->append(static_cast<$Instruction*>($Constants::DUP));
		il->append(static_cast<$Instruction*>($Constants::DUP));
		$assign(domBuilder, methodGen->addLocalVariable("rt_to_reference_handler"_s, $($Util::getJCRefType($Constants::TRANSLET_OUTPUT_SIG)), nullptr, nullptr));
		$nc(domBuilder)->setStart($(il->append(static_cast<$Instruction*>($$new($ASTORE, domBuilder->getIndex())))));
		index = cpg->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "startDocument"_s, "()V"_s);
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 1)));
		index = cpg->addMethodref(className, this->_methodName, $$str({"("_s, $Constants::DOM_INTF_SIG, $Constants::TRANSLET_OUTPUT_SIG, ")V"_s}));
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, index)));
		domBuilder->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, domBuilder->getIndex())))));
		index = cpg->addInterfaceMethodref($Constants::TRANSLET_OUTPUT_INTERFACE, "endDocument"_s, "()V"_s);
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 1)));
		newDom->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, newDom->getIndex())))));
	}
}

void ResultTreeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $NodeSetType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($Constants::DUP));
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$Instruction*>($$new($GETFIELD, $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, $Constants::NAMES_INDEX, $Constants::NAMES_INDEX_SIG))));
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$Instruction*>($$new($GETFIELD, $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, $Constants::URIS_INDEX, $Constants::URIS_INDEX_SIG))));
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$Instruction*>($$new($GETFIELD, $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, $Constants::TYPES_INDEX, $Constants::TYPES_INDEX_SIG))));
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$Instruction*>($$new($GETFIELD, $nc(cpg)->addFieldref($Constants::TRANSLET_CLASS, $Constants::NAMESPACE_INDEX, $Constants::NAMESPACE_INDEX_SIG))));
	int32_t mapping = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "setupMapping"_s, $$str({"(["_s, $Constants::STRING_SIG, "["_s, $Constants::STRING_SIG, "[I["_s, $Constants::STRING_SIG, ")V"_s}));
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, mapping, 5)));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	int32_t iter = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getIterator"_s, $$str({"()"_s, $Constants::NODE_ITERATOR_SIG}));
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, iter, 1)));
}

void ResultTreeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $ObjectType* type) {
	$init($Constants);
	$nc($($nc(methodGen)->getInstructionList()))->append($Constants::NOP);
}

$FlowList* ResultTreeType::translateToDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Type);
	translateTo(classGen, methodGen, $Type::Boolean);
	return $new($FlowList, $(static_cast<$InstructionHandle*>($nc(il)->append(static_cast<$BranchInstruction*>($$new($IFEQ, nullptr))))));
}

void ResultTreeType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$var($String, className, $nc(clazz)->getName());
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if ($nc(className)->equals("org.w3c.dom.Node"_s)) {
		$init($Type);
		translateTo(classGen, methodGen, $Type::NodeSet);
		$init($Constants);
		int32_t index = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::MAKE_NODE, $Constants::MAKE_NODE_SIG2);
		$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 2)));
	} else if (className->equals("org.w3c.dom.NodeList"_s)) {
		$init($Type);
		translateTo(classGen, methodGen, $Type::NodeSet);
		$init($Constants);
		int32_t index = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::MAKE_NODE_LIST, $Constants::MAKE_NODE_LIST_SIG2);
		$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 2)));
	} else if (className->equals("java.lang.Object"_s)) {
		$init($Constants);
		$nc(il)->append($Constants::NOP);
	} else if (className->equals("java.lang.String"_s)) {
		$init($Type);
		translateTo(classGen, methodGen, $Type::String);
	} else {
		$init($ErrorMsg);
		$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::DATA_CONVERSION_ERR, $($of(toString())), $of(className)));
		$nc($(classGen->getParser()))->reportError($Constants::FATAL, err);
	}
}

void ResultTreeType::translateBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$init($Type);
	translateTo(classGen, methodGen, $Type::Reference);
}

void ResultTreeType::translateUnBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$init($Constants);
	$nc($($nc(methodGen)->getInstructionList()))->append($Constants::NOP);
}

$String* ResultTreeType::getClassName() {
	$init($Constants);
	return ($Constants::DOM_INTF);
}

$Instruction* ResultTreeType::LOAD(int32_t slot) {
	return $new($ALOAD, slot);
}

$Instruction* ResultTreeType::STORE(int32_t slot) {
	return $new($ASTORE, slot);
}

ResultTreeType::ResultTreeType() {
}

$Class* ResultTreeType::load$($String* name, bool initialize) {
	$loadClass(ResultTreeType, name, initialize, &_ResultTreeType_ClassInfo_, allocate$ResultTreeType);
	return class$;
}

$Class* ResultTreeType::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com