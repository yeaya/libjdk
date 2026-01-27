#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ResultTreeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <jcpp.h>

#undef BASIS_LIBRARY_CLASS
#undef D2F
#undef DATA_CONVERSION_ERR
#undef DOM_INTF_SIG
#undef FATAL
#undef I2B
#undef I2C
#undef I2S
#undef INTERNAL_ERR
#undef L2I
#undef LOAD
#undef NODE_ITERATOR
#undef NODE_ITERATOR_SIG
#undef NODE_SIG
#undef NOP
#undef OBJECT
#undef OBJECT_SIG
#undef RESET
#undef RESET_SIG
#undef ROOT_NODE
#undef STORE
#undef STRING_SIG
#undef TYPE

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
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
using $NodeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeType;
using $ObjectType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ObjectType;
using $RealType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType;
using $ResultTreeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ResultTreeType;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $Boolean = ::java::lang::Boolean;
using $Byte = ::java::lang::Byte;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Float = ::java::lang::Float;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {
								namespace util {

$MethodInfo _ReferenceType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(ReferenceType, init$, void)},
	{"LOAD", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(ReferenceType, LOAD, $Instruction*, int32_t)},
	{"STORE", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(ReferenceType, STORE, $Instruction*, int32_t)},
	{"identicalTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)Z", nullptr, $PUBLIC, $virtualMethod(ReferenceType, identicalTo, bool, $Type*)},
	{"toJCType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(ReferenceType, toJCType, $1Type*)},
	{"toSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ReferenceType, toSignature, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ReferenceType, toString, $String*)},
	{"translateBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ReferenceType, translateBox, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateFrom", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(ReferenceType, translateFrom, void, $ClassGenerator*, $MethodGenerator*, $Class*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC, $virtualMethod(ReferenceType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $Type*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType;)V", nullptr, $PUBLIC, $method(ReferenceType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $StringType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType;)V", nullptr, $PUBLIC, $method(ReferenceType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $RealType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)V", nullptr, $PUBLIC, $method(ReferenceType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $BooleanType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType;)V", nullptr, $PUBLIC, $method(ReferenceType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $NodeSetType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeType;)V", nullptr, $PUBLIC, $method(ReferenceType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $NodeType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ResultTreeType;)V", nullptr, $PUBLIC, $method(ReferenceType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $ResultTreeType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ObjectType;)V", nullptr, $PUBLIC, $method(ReferenceType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $ObjectType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(ReferenceType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $Class*)},
	{"translateToDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC, $virtualMethod(ReferenceType, translateToDesynthesized, $FlowList*, $ClassGenerator*, $MethodGenerator*, $BooleanType*)},
	{"translateUnBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ReferenceType, translateUnBox, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _ReferenceType_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ReferenceType",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type",
	nullptr,
	nullptr,
	_ReferenceType_MethodInfo_
};

$Object* allocate$ReferenceType($Class* clazz) {
	return $of($alloc(ReferenceType));
}

void ReferenceType::init$() {
	$Type::init$();
}

$String* ReferenceType::toString() {
	return "reference"_s;
}

bool ReferenceType::identicalTo($Type* other) {
	return $equals(this, other);
}

$String* ReferenceType::toSignature() {
	return "Ljava/lang/Object;"_s;
}

$1Type* ReferenceType::toJCType() {
	$init($1Type);
	return $1Type::OBJECT;
}

void ReferenceType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Type* type) {
	$useLocalCurrentObjectStackCache();
	$init($Type);
	if (type == $Type::String) {
		translateTo(classGen, methodGen, $cast($StringType, type));
	} else {
		if (type == $Type::Real) {
			translateTo(classGen, methodGen, $cast($RealType, type));
		} else {
			if (type == $Type::Boolean) {
				translateTo(classGen, methodGen, $cast($BooleanType, type));
			} else {
				if (type == $Type::NodeSet) {
					translateTo(classGen, methodGen, $cast($NodeSetType, type));
				} else {
					if (type == $Type::Node) {
						translateTo(classGen, methodGen, $cast($NodeType, type));
					} else {
						if (type == $Type::ResultTree) {
							translateTo(classGen, methodGen, $cast($ResultTreeType, type));
						} else {
							if (type == $Type::Object) {
								translateTo(classGen, methodGen, $cast($ObjectType, type));
							} else {
								if (type == $Type::Reference) {
								} else {
									$init($ErrorMsg);
									$var($ErrorMsg, err, $new($ErrorMsg, $ErrorMsg::INTERNAL_ERR, $($of($nc(type)->toString()))));
									$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
								}
							}
						}
					}
				}
			}
		}
	}
}

void ReferenceType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $StringType* type) {
	$useLocalCurrentObjectStackCache();
	int32_t current = $nc(methodGen)->getLocalIndex("current"_s);
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, methodGen->getInstructionList());
	if (current < 0) {
		$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, (int32_t)$DTM::ROOT_NODE)));
	} else {
		$nc(il)->append(static_cast<$Instruction*>($$new($ILOAD, current)));
	}
	$nc(il)->append($(methodGen->loadDOM()));
	$init($Constants);
	int32_t stringF = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "stringF"_s, $$str({"("_s, $Constants::OBJECT_SIG, $Constants::NODE_SIG, $Constants::DOM_INTF_SIG, ")"_s, $Constants::STRING_SIG}));
	il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, stringF)));
}

void ReferenceType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $RealType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append($(methodGen->loadDOM()));
	$init($Constants);
	int32_t index = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "numberF"_s, $$str({"("_s, $Constants::OBJECT_SIG, $Constants::DOM_INTF_SIG, ")D"_s}));
	il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, index)));
}

void ReferenceType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t index = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "booleanF"_s, $$str({"("_s, $Constants::OBJECT_SIG, ")Z"_s}));
	$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, index)));
}

void ReferenceType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $NodeSetType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t index = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "referenceToNodeSet"_s, $$str({"("_s, $Constants::OBJECT_SIG, ")"_s, $Constants::NODE_ITERATOR_SIG}));
	$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, index)));
	index = cpg->addInterfaceMethodref($Constants::NODE_ITERATOR, $Constants::RESET, $Constants::RESET_SIG);
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 1)));
}

void ReferenceType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $NodeType* type) {
	$init($Type);
	translateTo(classGen, methodGen, $Type::NodeSet);
	$nc($Type::NodeSet)->translateTo(classGen, methodGen, static_cast<$Type*>(type));
}

void ReferenceType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $ResultTreeType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t index = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "referenceToResultTree"_s, $$str({"("_s, $Constants::OBJECT_SIG, ")"_s, $Constants::DOM_INTF_SIG}));
	$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, index)));
}

void ReferenceType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $ObjectType* type) {
	$init($Constants);
	$nc($($nc(methodGen)->getInstructionList()))->append($Constants::NOP);
}

void ReferenceType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t referenceToLong = $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, "referenceToLong"_s, $$str({"("_s, $Constants::OBJECT_SIG, ")J"_s}));
	int32_t referenceToDouble = cpg->addMethodref($Constants::BASIS_LIBRARY_CLASS, "referenceToDouble"_s, $$str({"("_s, $Constants::OBJECT_SIG, ")D"_s}));
	int32_t referenceToBoolean = cpg->addMethodref($Constants::BASIS_LIBRARY_CLASS, "referenceToBoolean"_s, $$str({"("_s, $Constants::OBJECT_SIG, ")Z"_s}));
	if ($nc($($nc(clazz)->getName()))->equals("java.lang.Object"_s)) {
		$nc(il)->append($Constants::NOP);
	} else {
		$init($Double);
		if (clazz == $Double::TYPE) {
			$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, referenceToDouble)));
		} else if ($nc($(clazz->getName()))->equals("java.lang.Double"_s)) {
			$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, referenceToDouble)));
			$init($Type);
			$nc($Type::Real)->translateTo(classGen, methodGen, $Type::Reference);
		} else {
			$init($Float);
			if (clazz == $Float::TYPE) {
				$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, referenceToDouble)));
				il->append(static_cast<$Instruction*>($Constants::D2F));
			} else if ($nc($(clazz->getName()))->equals("java.lang.String"_s)) {
				int32_t index = cpg->addMethodref($Constants::BASIS_LIBRARY_CLASS, "referenceToString"_s, $$str({"("_s, $Constants::OBJECT_SIG, $Constants::DOM_INTF_SIG, ")Ljava/lang/String;"_s}));
				$nc(il)->append($(methodGen->loadDOM()));
				il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, index)));
			} else if ($nc($(clazz->getName()))->equals("org.w3c.dom.Node"_s)) {
				int32_t index = cpg->addMethodref($Constants::BASIS_LIBRARY_CLASS, "referenceToNode"_s, $$str({"("_s, $Constants::OBJECT_SIG, $Constants::DOM_INTF_SIG, ")Lorg/w3c/dom/Node;"_s}));
				$nc(il)->append($(methodGen->loadDOM()));
				il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, index)));
			} else if ($nc($(clazz->getName()))->equals("org.w3c.dom.NodeList"_s)) {
				int32_t index = cpg->addMethodref($Constants::BASIS_LIBRARY_CLASS, "referenceToNodeList"_s, $$str({"("_s, $Constants::OBJECT_SIG, $Constants::DOM_INTF_SIG, ")Lorg/w3c/dom/NodeList;"_s}));
				$nc(il)->append($(methodGen->loadDOM()));
				il->append(static_cast<$Instruction*>($$new($INVOKESTATIC, index)));
			} else if ($nc($(clazz->getName()))->equals("com.sun.org.apache.xalan.internal.xsltc.DOM"_s)) {
				$init($Type);
				translateTo(classGen, methodGen, $Type::ResultTree);
			} else {
				$init($Long);
				if (clazz == $Long::TYPE) {
					$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, referenceToLong)));
				} else {
					$init($Integer);
					if (clazz == $Integer::TYPE) {
						$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, referenceToLong)));
						il->append(static_cast<$Instruction*>($Constants::L2I));
					} else {
						$init($Short);
						if (clazz == $Short::TYPE) {
							$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, referenceToLong)));
							il->append(static_cast<$Instruction*>($Constants::L2I));
							il->append(static_cast<$Instruction*>($Constants::I2S));
						} else {
							$init($Byte);
							if (clazz == $Byte::TYPE) {
								$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, referenceToLong)));
								il->append(static_cast<$Instruction*>($Constants::L2I));
								il->append(static_cast<$Instruction*>($Constants::I2B));
							} else {
								$init($Character);
								if (clazz == $Character::TYPE) {
									$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, referenceToLong)));
									il->append(static_cast<$Instruction*>($Constants::L2I));
									il->append(static_cast<$Instruction*>($Constants::I2C));
								} else {
									$init($Boolean);
									if (clazz == $Boolean::TYPE) {
										$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, referenceToBoolean)));
									} else if ($nc($(clazz->getName()))->equals("java.lang.Boolean"_s)) {
										$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, referenceToBoolean)));
										$init($Type);
										$nc($Type::Boolean)->translateTo(classGen, methodGen, $Type::Reference);
									} else {
										$init($ErrorMsg);
										$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
										$var($Object, var$1, $of(toString()));
										$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of(clazz->getName()))));
										$nc($(classGen->getParser()))->reportError($Constants::FATAL, err);
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void ReferenceType::translateFrom($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	if ($nc($($nc(clazz)->getName()))->equals("java.lang.Object"_s)) {
		$init($Constants);
		$nc($($nc(methodGen)->getInstructionList()))->append($Constants::NOP);
	} else {
		$init($ErrorMsg);
		$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
		$var($Object, var$1, $of(toString()));
		$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of(clazz->getName()))));
		$nc($($nc(classGen)->getParser()))->reportError($Constants::FATAL, err);
	}
}

$FlowList* ReferenceType::translateToDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	translateTo(classGen, methodGen, type);
	return $new($FlowList, $(static_cast<$InstructionHandle*>($nc(il)->append(static_cast<$BranchInstruction*>($$new($IFEQ, nullptr))))));
}

void ReferenceType::translateBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
}

void ReferenceType::translateUnBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
}

$Instruction* ReferenceType::LOAD(int32_t slot) {
	return $new($ALOAD, slot);
}

$Instruction* ReferenceType::STORE(int32_t slot) {
	return $new($ASTORE, slot);
}

ReferenceType::ReferenceType() {
}

$Class* ReferenceType::load$($String* name, bool initialize) {
	$loadClass(ReferenceType, name, initialize, &_ReferenceType_ClassInfo_, allocate$ReferenceType);
	return class$;
}

$Class* ReferenceType::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com