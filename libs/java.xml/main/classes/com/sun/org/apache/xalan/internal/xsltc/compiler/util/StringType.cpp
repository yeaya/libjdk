#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>

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
#include <com/sun/org/apache/bcel/internal/generic/IFEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNONNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <jcpp.h>

#undef BASIS_LIBRARY_CLASS
#undef DATA_CONVERSION_ERR
#undef DUP
#undef FATAL
#undef ICONST_0
#undef ICONST_1
#undef LOAD
#undef NOP
#undef POP
#undef STORE
#undef STRING
#undef STRING_CLASS
#undef STRING_TO_REAL
#undef STRING_TO_REAL_SIG

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
using $IFEQ = ::com::sun::org::apache::bcel::internal::generic::IFEQ;
using $IFNONNULL = ::com::sun::org::apache::bcel::internal::generic::IFNONNULL;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
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
using $RealType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
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

$MethodInfo _StringType_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(StringType, init$, void)},
	{"LOAD", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(StringType, LOAD, $Instruction*, int32_t)},
	{"STORE", "(I)Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(StringType, STORE, $Instruction*, int32_t)},
	{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringType, getClassName, $String*)},
	{"identicalTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)Z", nullptr, $PUBLIC, $virtualMethod(StringType, identicalTo, bool, $Type*)},
	{"isSimple", "()Z", nullptr, $PUBLIC, $virtualMethod(StringType, isSimple, bool)},
	{"toJCType", "()Lcom/sun/org/apache/bcel/internal/generic/Type;", nullptr, $PUBLIC, $virtualMethod(StringType, toJCType, $1Type*)},
	{"toSignature", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringType, toSignature, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StringType, toString, $String*)},
	{"translateBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(StringType, translateBox, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateFrom", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(StringType, translateFrom, void, $ClassGenerator*, $MethodGenerator*, $Class*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;)V", nullptr, $PUBLIC, $virtualMethod(StringType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $Type*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)V", nullptr, $PUBLIC, $virtualMethod(StringType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $BooleanType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType;)V", nullptr, $PUBLIC, $virtualMethod(StringType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $RealType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType;)V", nullptr, $PUBLIC, $virtualMethod(StringType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $ReferenceType*)},
	{"translateTo", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/Class<*>;)V", $PUBLIC, $virtualMethod(StringType, translateTo, void, $ClassGenerator*, $MethodGenerator*, $Class*)},
	{"translateToDesynthesized", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/FlowList;", nullptr, $PUBLIC, $virtualMethod(StringType, translateToDesynthesized, $FlowList*, $ClassGenerator*, $MethodGenerator*, $BooleanType*)},
	{"translateUnBox", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(StringType, translateUnBox, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _StringType_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.StringType",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.Type",
	nullptr,
	nullptr,
	_StringType_MethodInfo_
};

$Object* allocate$StringType($Class* clazz) {
	return $of($alloc(StringType));
}

void StringType::init$() {
	$Type::init$();
}

$String* StringType::toString() {
	return "string"_s;
}

bool StringType::identicalTo($Type* other) {
	return $equals(this, other);
}

$String* StringType::toSignature() {
	return "Ljava/lang/String;"_s;
}

bool StringType::isSimple() {
	return true;
}

$1Type* StringType::toJCType() {
	$init($1Type);
	return $1Type::STRING;
}

void StringType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Type* type) {
	$useLocalCurrentObjectStackCache();
	$init($Type);
	if (type == $Type::Boolean) {
		translateTo(classGen, methodGen, $cast($BooleanType, type));
	} else {
		if (type == $Type::Real) {
			translateTo(classGen, methodGen, $cast($RealType, type));
		} else {
			if (type == $Type::Reference) {
				translateTo(classGen, methodGen, $cast($ReferenceType, type));
			} else {
				if (type == $Type::ObjectString) {
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

void StringType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($FlowList, falsel, translateToDesynthesized(classGen, methodGen, type));
	$init($Constants);
	$nc(il)->append($Constants::ICONST_1);
	$var($BranchHandle, truec, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$nc(falsel)->backPatch($(il->append($Constants::ICONST_0)));
	$nc(truec)->setTarget($(il->append($Constants::NOP)));
}

void StringType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $RealType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($INVOKESTATIC, $nc(cpg)->addMethodref($Constants::BASIS_LIBRARY_CLASS, $Constants::STRING_TO_REAL, $Constants::STRING_TO_REAL_SIG))));
}

$FlowList* StringType::translateToDesynthesized($ClassGenerator* classGen, $MethodGenerator* methodGen, $BooleanType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, $nc(cpg)->addMethodref($Constants::STRING_CLASS, "length"_s, "()I"_s))));
	return $new($FlowList, $(static_cast<$InstructionHandle*>(il->append(static_cast<$BranchInstruction*>($$new($IFEQ, nullptr))))));
}

void StringType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $ReferenceType* type) {
	$init($Constants);
	$nc($($nc(methodGen)->getInstructionList()))->append($Constants::NOP);
}

void StringType::translateTo($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	if ($nc(clazz)->isAssignableFrom($String::class$)) {
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

void StringType::translateFrom($ClassGenerator* classGen, $MethodGenerator* methodGen, $Class* clazz) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if ($nc($($nc(clazz)->getName()))->equals("java.lang.String"_s)) {
		$init($Constants);
		$nc(il)->append(static_cast<$Instruction*>($Constants::DUP));
		$var($BranchHandle, ifNonNull, il->append(static_cast<$BranchInstruction*>($$new($IFNONNULL, nullptr))));
		il->append(static_cast<$Instruction*>($Constants::POP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, ""_s)));
		$nc(ifNonNull)->setTarget($(il->append($Constants::NOP)));
	} else {
		$init($ErrorMsg);
		$var($String, var$0, $ErrorMsg::DATA_CONVERSION_ERR);
		$var($Object, var$1, $of(toString()));
		$var($ErrorMsg, err, $new($ErrorMsg, var$0, var$1, $($of(clazz->getName()))));
		$nc($(classGen->getParser()))->reportError($Constants::FATAL, err);
	}
}

void StringType::translateBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$init($Type);
	translateTo(classGen, methodGen, $Type::Reference);
}

void StringType::translateUnBox($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$init($Constants);
	$nc($($nc(methodGen)->getInstructionList()))->append($Constants::NOP);
}

$String* StringType::getClassName() {
	$init($Constants);
	return ($Constants::STRING_CLASS);
}

$Instruction* StringType::LOAD(int32_t slot) {
	return $new($ALOAD, slot);
}

$Instruction* StringType::STORE(int32_t slot) {
	return $new($ASTORE, slot);
}

StringType::StringType() {
}

$Class* StringType::load$($String* name, bool initialize) {
	$loadClass(StringType, name, initialize, &_StringType_ClassInfo_, allocate$StringType);
	return class$;
}

$Class* StringType::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com