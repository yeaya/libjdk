#include <com/sun/org/apache/bcel/internal/generic/F2I.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef F2I

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

$MethodInfo _F2I_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(F2I, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(F2I, accept, void, $Visitor*)},
	{}
};

$ClassInfo _F2I_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.F2I",
	"com.sun.org.apache.bcel.internal.generic.ConversionInstruction",
	nullptr,
	nullptr,
	_F2I_MethodInfo_
};

$Object* allocate$F2I($Class* clazz) {
	return $of($alloc(F2I));
}

void F2I::init$() {
	$ConversionInstruction::init$($Const::F2I);
}

void F2I::accept($Visitor* v) {
	$nc(v)->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitConversionInstruction(this);
	v->visitF2I(this);
}

F2I::F2I() {
}

$Class* F2I::load$($String* name, bool initialize) {
	$loadClass(F2I, name, initialize, &_F2I_ClassInfo_, allocate$F2I);
	return class$;
}

$Class* F2I::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com