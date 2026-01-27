#include <com/sun/org/apache/bcel/internal/generic/L2I.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef L2I

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

$MethodInfo _L2I_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(L2I, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(L2I, accept, void, $Visitor*)},
	{}
};

$ClassInfo _L2I_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.L2I",
	"com.sun.org.apache.bcel.internal.generic.ConversionInstruction",
	nullptr,
	nullptr,
	_L2I_MethodInfo_
};

$Object* allocate$L2I($Class* clazz) {
	return $of($alloc(L2I));
}

void L2I::init$() {
	$ConversionInstruction::init$($Const::L2I);
}

void L2I::accept($Visitor* v) {
	$nc(v)->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitConversionInstruction(this);
	v->visitL2I(this);
}

L2I::L2I() {
}

$Class* L2I::load$($String* name, bool initialize) {
	$loadClass(L2I, name, initialize, &_L2I_ClassInfo_, allocate$L2I);
	return class$;
}

$Class* L2I::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com