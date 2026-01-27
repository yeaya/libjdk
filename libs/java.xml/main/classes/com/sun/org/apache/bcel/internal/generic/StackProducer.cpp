#include <com/sun/org/apache/bcel/internal/generic/StackProducer.h>

#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <jcpp.h>

using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _StackProducer_MethodInfo_[] = {
	{"produceStack", "(Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StackProducer, produceStack, int32_t, $ConstantPoolGen*)},
	{}
};

$ClassInfo _StackProducer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.StackProducer",
	nullptr,
	nullptr,
	nullptr,
	_StackProducer_MethodInfo_
};

$Object* allocate$StackProducer($Class* clazz) {
	return $of($alloc(StackProducer));
}

$Class* StackProducer::load$($String* name, bool initialize) {
	$loadClass(StackProducer, name, initialize, &_StackProducer_ClassInfo_, allocate$StackProducer);
	return class$;
}

$Class* StackProducer::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com