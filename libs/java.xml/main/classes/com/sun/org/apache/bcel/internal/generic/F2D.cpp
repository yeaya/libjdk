#include <com/sun/org/apache/bcel/internal/generic/F2D.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef F2D

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

$MethodInfo _F2D_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(F2D, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(F2D, accept, void, $Visitor*)},
	{}
};

$ClassInfo _F2D_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.F2D",
	"com.sun.org.apache.bcel.internal.generic.ConversionInstruction",
	nullptr,
	nullptr,
	_F2D_MethodInfo_
};

$Object* allocate$F2D($Class* clazz) {
	return $of($alloc(F2D));
}

void F2D::init$() {
	$ConversionInstruction::init$($Const::F2D);
}

void F2D::accept($Visitor* v) {
	$nc(v)->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitConversionInstruction(this);
	v->visitF2D(this);
}

F2D::F2D() {
}

$Class* F2D::load$($String* name, bool initialize) {
	$loadClass(F2D, name, initialize, &_F2D_ClassInfo_, allocate$F2D);
	return class$;
}

$Class* F2D::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com