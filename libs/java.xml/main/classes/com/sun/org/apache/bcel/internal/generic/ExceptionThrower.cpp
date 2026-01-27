#include <com/sun/org/apache/bcel/internal/generic/ExceptionThrower.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _ExceptionThrower_MethodInfo_[] = {
	{"getExceptions", "()[Ljava/lang/Class;", "()[Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(ExceptionThrower, getExceptions, $ClassArray*)},
	{}
};

$ClassInfo _ExceptionThrower_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.ExceptionThrower",
	nullptr,
	nullptr,
	nullptr,
	_ExceptionThrower_MethodInfo_
};

$Object* allocate$ExceptionThrower($Class* clazz) {
	return $of($alloc(ExceptionThrower));
}

$Class* ExceptionThrower::load$($String* name, bool initialize) {
	$loadClass(ExceptionThrower, name, initialize, &_ExceptionThrower_ClassInfo_, allocate$ExceptionThrower);
	return class$;
}

$Class* ExceptionThrower::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com