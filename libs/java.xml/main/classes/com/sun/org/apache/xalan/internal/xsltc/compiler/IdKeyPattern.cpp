#include <com/sun/org/apache/xalan/internal/xsltc/compiler/IdKeyPattern.h>

#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/IdPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <jcpp.h>

#undef DOM_INTF
#undef KEY_INDEX_CLASS
#undef KEY_INDEX_SIG
#undef NODE_SIG
#undef SWAP
#undef TRANSLET_CLASS

using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFNE = ::com::sun::org::apache::bcel::internal::generic::IFNE;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $IdPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::IdPattern;
using $LocationPathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern;
using $RelativePathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern;
using $StepPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
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

$FieldInfo _IdKeyPattern_FieldInfo_[] = {
	{"_left", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern;", nullptr, $PROTECTED, $field(IdKeyPattern, _left)},
	{"_index", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IdKeyPattern, _index)},
	{"_value", "Ljava/lang/String;", nullptr, $PRIVATE, $field(IdKeyPattern, _value)},
	{}
};

$MethodInfo _IdKeyPattern_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IdKeyPattern, init$, void, $String*, $String*)},
	{"getIndexName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IdKeyPattern, getIndexName, $String*)},
	{"getKernelPattern", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern;", nullptr, $PUBLIC, $virtualMethod(IdKeyPattern, getKernelPattern, $StepPattern*)},
	{"isWildcard", "()Z", nullptr, $PUBLIC, $virtualMethod(IdKeyPattern, isWildcard, bool)},
	{"reduceKernelPattern", "()V", nullptr, $PUBLIC, $virtualMethod(IdKeyPattern, reduceKernelPattern, void)},
	{"setLeft", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern;)V", nullptr, $PUBLIC, $virtualMethod(IdKeyPattern, setLeft, void, $RelativePathPattern*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(IdKeyPattern, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(IdKeyPattern, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(IdKeyPattern, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _IdKeyPattern_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.IdKeyPattern",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.LocationPathPattern",
	nullptr,
	_IdKeyPattern_FieldInfo_,
	_IdKeyPattern_MethodInfo_
};

$Object* allocate$IdKeyPattern($Class* clazz) {
	return $of($alloc(IdKeyPattern));
}

void IdKeyPattern::init$($String* index, $String* value) {
	$LocationPathPattern::init$();
	$set(this, _left, nullptr);
	$set(this, _index, nullptr);
	$set(this, _value, nullptr);
	$set(this, _index, index);
	$set(this, _value, value);
}

$String* IdKeyPattern::getIndexName() {
	return (this->_index);
}

$Type* IdKeyPattern::typeCheck($SymbolTable* stable) {
	$init($Type);
	return $Type::NodeSet;
}

bool IdKeyPattern::isWildcard() {
	return false;
}

void IdKeyPattern::setLeft($RelativePathPattern* left) {
	$set(this, _left, left);
}

$StepPattern* IdKeyPattern::getKernelPattern() {
	return (nullptr);
}

void IdKeyPattern::reduceKernelPattern() {
}

$String* IdKeyPattern::toString() {
	return $str({"id/keyPattern("_s, this->_index, ", "_s, this->_value, $$str(u')')});
}

void IdKeyPattern::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t getKeyIndex = $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, "getKeyIndex"_s, $$str({"(Ljava/lang/String;)"_s, $Constants::KEY_INDEX_SIG}));
	int32_t lookupId = cpg->addMethodref($Constants::KEY_INDEX_CLASS, "containsID"_s, "(ILjava/lang/Object;)I"_s);
	int32_t lookupKey = cpg->addMethodref($Constants::KEY_INDEX_CLASS, "containsKey"_s, "(ILjava/lang/Object;)I"_s);
	int32_t getNodeIdent = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getNodeIdent"_s, $$str({"(I)"_s, $Constants::NODE_SIG}));
	$nc(il)->append($(classGen->loadTranslet()));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_index)));
	il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, getKeyIndex)));
	il->append(static_cast<$Instruction*>($Constants::SWAP));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_value)));
	if ($instanceOf($IdPattern, this)) {
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, lookupId)));
	} else {
		il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, lookupKey)));
	}
	$nc(this->_trueList)->add($(il->append(static_cast<$BranchInstruction*>($$new($IFNE, nullptr)))));
	$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr)))));
}

IdKeyPattern::IdKeyPattern() {
}

$Class* IdKeyPattern::load$($String* name, bool initialize) {
	$loadClass(IdKeyPattern, name, initialize, &_IdKeyPattern_ClassInfo_, allocate$IdKeyPattern);
	return class$;
}

$Class* IdKeyPattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com