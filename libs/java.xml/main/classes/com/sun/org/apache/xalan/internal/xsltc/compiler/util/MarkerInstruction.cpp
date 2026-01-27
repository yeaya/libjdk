#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MarkerInstruction.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <java/io/DataOutputStream.h>
#include <jcpp.h>

#undef UNDEFINED

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $DataOutputStream = ::java::io::DataOutputStream;
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

$MethodInfo _MarkerInstruction_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MarkerInstruction, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(MarkerInstruction, accept, void, $Visitor*)},
	{"consumeStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(MarkerInstruction, consumeStack, int32_t, $ConstantPoolGen*)},
	{"copy", "()Lcom/sun/org/apache/bcel/internal/generic/Instruction;", nullptr, $PUBLIC, $virtualMethod(MarkerInstruction, copy, $Instruction*)},
	{"dump", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(MarkerInstruction, dump, void, $DataOutputStream*), "java.io.IOException"},
	{"produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC | $FINAL, $virtualMethod(MarkerInstruction, produceStack, int32_t, $ConstantPoolGen*)},
	{}
};

$ClassInfo _MarkerInstruction_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.MarkerInstruction",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	nullptr,
	nullptr,
	_MarkerInstruction_MethodInfo_
};

$Object* allocate$MarkerInstruction($Class* clazz) {
	return $of($alloc(MarkerInstruction));
}

void MarkerInstruction::init$() {
	$Instruction::init$($Const::UNDEFINED, (int16_t)0);
}

void MarkerInstruction::accept($Visitor* v) {
}

int32_t MarkerInstruction::consumeStack($ConstantPoolGen* cpg) {
	return 0;
}

int32_t MarkerInstruction::produceStack($ConstantPoolGen* cpg) {
	return 0;
}

$Instruction* MarkerInstruction::copy() {
	return this;
}

void MarkerInstruction::dump($DataOutputStream* out) {
}

MarkerInstruction::MarkerInstruction() {
}

$Class* MarkerInstruction::load$($String* name, bool initialize) {
	$loadClass(MarkerInstruction, name, initialize, &_MarkerInstruction_ClassInfo_, allocate$MarkerInstruction);
	return class$;
}

$Class* MarkerInstruction::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com