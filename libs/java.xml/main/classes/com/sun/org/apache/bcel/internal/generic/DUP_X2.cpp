#include <com/sun/org/apache/bcel/internal/generic/DUP_X2.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef DUP_X2

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

$MethodInfo _DUP_X2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DUP_X2, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(DUP_X2, accept, void, $Visitor*)},
	{}
};

$ClassInfo _DUP_X2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.DUP_X2",
	"com.sun.org.apache.bcel.internal.generic.StackInstruction",
	nullptr,
	nullptr,
	_DUP_X2_MethodInfo_
};

$Object* allocate$DUP_X2($Class* clazz) {
	return $of($alloc(DUP_X2));
}

void DUP_X2::init$() {
	$StackInstruction::init$($Const::DUP_X2);
}

void DUP_X2::accept($Visitor* v) {
	$nc(v)->visitStackInstruction(this);
	v->visitDUP_X2(this);
}

DUP_X2::DUP_X2() {
}

$Class* DUP_X2::load$($String* name, bool initialize) {
	$loadClass(DUP_X2, name, initialize, &_DUP_X2_ClassInfo_, allocate$DUP_X2);
	return class$;
}

$Class* DUP_X2::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com