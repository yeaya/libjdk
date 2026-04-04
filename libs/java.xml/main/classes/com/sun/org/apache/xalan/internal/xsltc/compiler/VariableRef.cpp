#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRef.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Closure.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Variable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSetType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <jcpp.h>

#undef ALOAD_0
#undef NODE_ITERATOR
#undef NODE_ITERATOR_SIG

using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $Closure = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Variable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Variable;
using $VariableRefBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeSetType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSetType;
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

void VariableRef::init$($Variable* variable) {
	$VariableRefBase::init$(variable);
}

void VariableRef::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if ($nc(this->_type)->implementedAsMethod()) {
		return;
	}
	$var($String, name, $nc(this->_variable)->getEscapedName());
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
				$nc(il)->append($Constants::ALOAD_0);
				il->append($$new($GETFIELD, $nc(cpg)->addFieldref($(variableClosure->getInnerClassName()), name, signature)));
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
			il->append($$new($CHECKCAST, $nc(cpg)->addClass(className)));
		}
		il->append($$new($GETFIELD, $nc(cpg)->addFieldref(className, name, signature)));
	}
	if ($instanceOf($NodeSetType, $($nc(this->_variable)->getType()))) {
		$init($Constants);
		int32_t clone = $nc(cpg)->addInterfaceMethodref($Constants::NODE_ITERATOR, "cloneIterator"_s, $$str({"()"_s, $Constants::NODE_ITERATOR_SIG}));
		$nc(il)->append($$new($INVOKEINTERFACE, clone, 1));
	}
}

VariableRef::VariableRef() {
}

$Class* VariableRef::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Variable;)V", nullptr, $PUBLIC, $method(VariableRef, init$, void, $Variable*)},
		{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(VariableRef, translate, void, $ClassGenerator*, $MethodGenerator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.VariableRef",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.VariableRefBase",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(VariableRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VariableRef);
	});
	return class$;
}

$Class* VariableRef::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com