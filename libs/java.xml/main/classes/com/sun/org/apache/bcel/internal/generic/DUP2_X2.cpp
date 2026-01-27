#include <com/sun/org/apache/bcel/internal/generic/DUP2_X2.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef DUP2_X2

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $StackInstruction = ::com::sun::org::apache::bcel::internal::generic::StackInstruction;
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

$MethodInfo _DUP2_X2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DUP2_X2, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(DUP2_X2, accept, void, $Visitor*)},
	{}
};

$ClassInfo _DUP2_X2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.DUP2_X2",
	"com.sun.org.apache.bcel.internal.generic.StackInstruction",
	nullptr,
	nullptr,
	_DUP2_X2_MethodInfo_
};

$Object* allocate$DUP2_X2($Class* clazz) {
	return $of($alloc(DUP2_X2));
}

void DUP2_X2::init$() {
	$StackInstruction::init$($Const::DUP2_X2);
}

void DUP2_X2::accept($Visitor* v) {
	$nc(v)->visitStackInstruction(this);
	v->visitDUP2_X2(this);
}

DUP2_X2::DUP2_X2() {
}

$Class* DUP2_X2::load$($String* name, bool initialize) {
	$loadClass(DUP2_X2, name, initialize, &_DUP2_X2_ClassInfo_, allocate$DUP2_X2);
	return class$;
}

$Class* DUP2_X2::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com