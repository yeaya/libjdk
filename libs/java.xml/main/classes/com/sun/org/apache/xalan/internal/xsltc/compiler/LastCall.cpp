#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LastCall.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FunctionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/CompareGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TestGenerator.h>
#include <jcpp.h>

#undef LAST_INDEX
#undef NODE_ITERATOR

using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $FunctionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FunctionCall;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $CompareGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::CompareGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $TestGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TestGenerator;
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

void LastCall::init$($QName* fname) {
	$FunctionCall::init$(fname);
}

bool LastCall::hasPositionCall() {
	return true;
}

bool LastCall::hasLastCall() {
	return true;
}

void LastCall::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if ($instanceOf($CompareGenerator, methodGen)) {
		$nc(il)->append($($cast($CompareGenerator, methodGen)->loadLastNode()));
	} else if ($instanceOf($TestGenerator, methodGen)) {
		$nc(il)->append($$new($ILOAD, $Constants::LAST_INDEX));
	} else {
		$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
		$init($Constants);
		int32_t getLast = $nc(cpg)->addInterfaceMethodref($Constants::NODE_ITERATOR, "getLast"_s, "()I"_s);
		$nc(il)->append($(methodGen->loadIterator()));
		il->append($$new($INVOKEINTERFACE, getLast, 1));
	}
}

LastCall::LastCall() {
}

$Class* LastCall::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/QName;)V", nullptr, $PUBLIC, $method(LastCall, init$, void, $QName*)},
		{"hasLastCall", "()Z", nullptr, $PUBLIC, $virtualMethod(LastCall, hasLastCall, bool)},
		{"hasPositionCall", "()Z", nullptr, $PUBLIC, $virtualMethod(LastCall, hasPositionCall, bool)},
		{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(LastCall, translate, void, $ClassGenerator*, $MethodGenerator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.LastCall",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.FunctionCall",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LastCall, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LastCall);
	});
	return class$;
}

$Class* LastCall::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com