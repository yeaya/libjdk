#include <com/sun/org/apache/bcel/internal/generic/I2C.h>

#include <com/sun/org/apache/bcel/internal/Const.h>
#include <com/sun/org/apache/bcel/internal/generic/ConversionInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackConsumer.h>
#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>
#include <com/sun/org/apache/bcel/internal/generic/TypedInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Visitor.h>
#include <jcpp.h>

#undef I2C

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

$MethodInfo _I2C_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(I2C, init$, void)},
	{"accept", "(Lcom/sun/org/apache/bcel/internal/generic/Visitor;)V", nullptr, $PUBLIC, $virtualMethod(I2C, accept, void, $Visitor*)},
	{}
};

$ClassInfo _I2C_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.I2C",
	"com.sun.org.apache.bcel.internal.generic.ConversionInstruction",
	nullptr,
	nullptr,
	_I2C_MethodInfo_
};

$Object* allocate$I2C($Class* clazz) {
	return $of($alloc(I2C));
}

void I2C::init$() {
	$ConversionInstruction::init$($Const::I2C);
}

void I2C::accept($Visitor* v) {
	$nc(v)->visitTypedInstruction(this);
	v->visitStackProducer(this);
	v->visitStackConsumer(this);
	v->visitConversionInstruction(this);
	v->visitI2C(this);
}

I2C::I2C() {
}

$Class* I2C::load$($String* name, bool initialize) {
	$loadClass(I2C, name, initialize, &_I2C_ClassInfo_, allocate$I2C);
	return class$;
}

$Class* I2C::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com