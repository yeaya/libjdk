#include <com/sun/org/apache/bcel/internal/generic/DUP2_X1.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef DUP2_X1

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

$MethodInfo _DUP2_X1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DUP2_X1, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(DUP2_X1, accept, void, $Visitor*)},
	{}
};

$ClassInfo _DUP2_X1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.DUP2_X1",
	"com.sun.org.apache.bcel.internal.generic.StackInstruction",
	nullptr,
	nullptr,
	_DUP2_X1_MethodInfo_
};

$Object* allocate$DUP2_X1($Class* clazz) {
	return $of($alloc(DUP2_X1));
}

void DUP2_X1::init$() {
	$StackInstruction::init$($Const::DUP2_X1);
}

void DUP2_X1::accept($Visitor* v) {
	$nc(v)->visitStackInstruction(this);
	v->visitDUP2_X1(this);
}

DUP2_X1::DUP2_X1() {
}

$Class* DUP2_X1::load$($String* name, bool initialize) {
	$loadClass(DUP2_X1, name, initialize, &_DUP2_X1_ClassInfo_, allocate$DUP2_X1);
	return class$;
}

$Class* DUP2_X1::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com