#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ParameterRef.h>

#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Closure.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Param.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <jcpp.h>

#undef ALOAD_0
#undef NODE_ITERATOR
#undef NODE_ITERATOR_SIG

using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $Closure = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Param = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Param;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $VariableRefBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
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

$FieldInfo _ParameterRef_FieldInfo_[] = {
	{"_name", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;", nullptr, 0, $field(ParameterRef, _name)},
	{}
};

$MethodInfo _ParameterRef_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Param;)V", nullptr, $PUBLIC, $method(ParameterRef, init$, void, $Param*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParameterRef, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ParameterRef, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{}
};

$ClassInfo _ParameterRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.ParameterRef",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.VariableRefBase",
	nullptr,
	_ParameterRef_FieldInfo_,
	_ParameterRef_MethodInfo_
};

$Object* allocate$ParameterRef($Class* clazz) {
	return $of($alloc(ParameterRef));
}

void ParameterRef::init$($Param* param) {
	$VariableRefBase::init$(param);
	$set(this, _name, nullptr);
	$set(this, _name, $nc(param)->_name);
}

$String* ParameterRef::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$1, $$str({"parameter-ref("_s, $($nc(this->_variable)->getName()), $$str(u'/')}));
	$var($String, var$0, $$concat(var$1, $($nc(this->_variable)->getType())));
	return $concat(var$0, $$str(u')'));
}

void ParameterRef::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($String, name, $BasisLibrary::mapQNameToJavaName($($nc(this->_name)->toString())));
	$var($String, signature, $nc(this->_type)->toSignature());
	if ($nc(this->_variable)->isLocal()) {
		if (classGen->isExternal()) {
			$var($Closure, variableClosure, this->_closure);
			while (variableClosure != nullptr) {
				if (variableClosure->inInnerClass()) {
					break;
				}
				$assign(variableClosure, variableClosure->getParentClosure());
			}
			if (variableClosure != nullptr) {
				$init($Constants);
				$nc(il)->append(static_cast<$Instruction*>($Constants::ALOAD_0));
				il->append(static_cast<$Instruction*>($$new($GETFIELD, $nc(cpg)->addFieldref($(variableClosure->getInnerClassName()), name, signature))));
			} else {
				$nc(il)->append($($nc(this->_variable)->loadInstruction()));
			}
		} else {
			$nc(il)->append($($nc(this->_variable)->loadInstruction()));
		}
	} else {
		$var($String, className, classGen->getClassName());
		$nc(il)->append($(classGen->loadTranslet()));
		if (classGen->isExternal()) {
			il->append(static_cast<$Instruction*>($$new($CHECKCAST, $nc(cpg)->addClass(className))));
		}
		il->append(static_cast<$Instruction*>($$new($GETFIELD, $nc(cpg)->addFieldref(className, name, signature))));
	}
	if ($instanceOf($NodeSetType, $($nc(this->_variable)->getType()))) {
		$init($Constants);
		int32_t clone = $nc(cpg)->addInterfaceMethodref($Constants::NODE_ITERATOR, "cloneIterator"_s, $$str({"()"_s, $Constants::NODE_ITERATOR_SIG}));
		$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, clone, 1)));
	}
}

ParameterRef::ParameterRef() {
}

$Class* ParameterRef::load$($String* name, bool initialize) {
	$loadClass(ParameterRef, name, initialize, &_ParameterRef_ClassInfo_, allocate$ParameterRef);
	return class$;
}

$Class* ParameterRef::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com