#include <com/sun/org/apache/bcel/internal/generic/IMPDEP2.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef IMPDEP2

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

$MethodInfo _IMPDEP2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IMPDEP2, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(IMPDEP2, accept, void, $Visitor*)},
	{}
};

$ClassInfo _IMPDEP2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.IMPDEP2",
	"com.sun.org.apache.bcel.internal.generic.Instruction",
	nullptr,
	nullptr,
	_IMPDEP2_MethodInfo_
};

$Object* allocate$IMPDEP2($Class* clazz) {
	return $of($alloc(IMPDEP2));
}

void IMPDEP2::init$() {
	$Instruction::init$($Const::IMPDEP2, (int16_t)1);
}

void IMPDEP2::accept($Visitor* v) {
	$nc(v)->visitIMPDEP2(this);
}

IMPDEP2::IMPDEP2() {
}

$Class* IMPDEP2::load$($String* name, bool initialize) {
	$loadClass(IMPDEP2, name, initialize, &_IMPDEP2_ClassInfo_, allocate$IMPDEP2);
	return class$;
}

$Class* IMPDEP2::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com