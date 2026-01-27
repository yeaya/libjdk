#include <com/sun/org/apache/bcel/internal/generic/FieldObserver.h>

#include <com/sun/org/apache/bcel/internal/generic/FieldGen.h>
#include <jcpp.h>

using $FieldGen = ::com::sun::org::apache::bcel::internal::generic::FieldGen;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _FieldObserver_MethodInfo_[] = {
	{"notify", "(Lcom/sun/org/apache/bcel/internal/generic/FieldGen;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(FieldObserver, notify, void, $FieldGen*)},
	{}
};

$ClassInfo _FieldObserver_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.FieldObserver",
	nullptr,
	nullptr,
	nullptr,
	_FieldObserver_MethodInfo_
};

$Object* allocate$FieldObserver($Class* clazz) {
	return $of($alloc(FieldObserver));
}

$Class* FieldObserver::load$($String* name, bool initialize) {
	$loadClass(FieldObserver, name, initialize, &_FieldObserver_ClassInfo_, allocate$FieldObserver);
	return class$;
}

$Class* FieldObserver::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com