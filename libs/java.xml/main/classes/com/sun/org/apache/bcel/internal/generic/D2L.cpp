#include <com/sun/org/apache/bcel/internal/generic/D2L.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef D2L

using $Const = ::com::sun::org::apache::bcel::internal::Const;
using $ConversionInstruction = ::com::sun::org::apache::bcel::internal::generic::ConversionInstruction;
using $StackConsumer = ::com::sun::org::apache::bcel::internal::generic::StackConsumer;
using $StackProducer = ::com::sun::org::apache::bcel::internal::generic::StackProducer;
using $TypedInstruction = ::com::sun::org::apache::bcel::internal::generic::TypedInstruction;
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

$MethodInfo _D2L_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(D2L, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(D2L, accept, void, $Visitor*)},
	{}
};

$ClassInfo _D2L_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.D2L",
	"com.sun.org.apache.bcel.internal.generic.ConversionInstruction",
	nullptr,
	nullptr,
	_D2L_MethodInfo_
};

$Object* allocate$D2L($Class* clazz) {
	return $of($alloc(D2L));
}

void D2L::init$() {
	$ConversionInstruction::init$($Const::D2L);
}

void D2L::accept($Visitor* v) {
	$nc(v)->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitConversionInstruction(this);
	v->visitD2L(this);
}

D2L::D2L() {
}

$Class* D2L::load$($String* name, bool initialize) {
	$loadClass(D2L, name, initialize, &_D2L_ClassInfo_, allocate$D2L);
	return class$;
}

$Class* D2L::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com