#include <com/sun/org/apache/bcel/internal/generic/NOP.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef NOP

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $Visitor = ::com::sun::org::apache::bcel::internal::generic::Visitor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _NOP_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NOP, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(NOP, accept, void, $Visitor*)},
	{}
};

$ClassInfo _NOP_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.NOP",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	nullptr,
	nullptr,
	_NOP_MethodInfo_
};

$Object* allocate$NOP($Class* clazz) {
	return $of($alloc(NOP));
}

void NOP::init$() {
	$Instruction::init$($Const::NOP, (int16_t)1);
}

void NOP::accept($Visitor* v) {
	$nc(v)->visitNOP(this);
}

NOP::NOP() {
}

$Class* NOP::load$($String* name, bool initialize) {
	$loadClass(NOP, name, initialize, &_NOP_ClassInfo_, allocate$NOP);
	return class$;
}

$Class* NOP::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com