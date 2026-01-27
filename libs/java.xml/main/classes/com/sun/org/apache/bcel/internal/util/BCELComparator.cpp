#include <com/sun/org/apache/bcel/internal/util/BCELComparator.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$MethodInfo _BCELComparator_MethodInfo_[] = {
	{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BCELComparator, equals, bool, Object$*, Object$*)},
	{"hashCode", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BCELComparator, hashCode, int32_t, Object$*)},
	{}
};

$ClassInfo _BCELComparator_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.util.BCELComparator",
	nullptr,
	nullptr,
	nullptr,
	_BCELComparator_MethodInfo_
};

$Object* allocate$BCELComparator($Class* clazz) {
	return $of($alloc(BCELComparator));
}

$Class* BCELComparator::load$($String* name, bool initialize) {
	$loadClass(BCELComparator, name, initialize, &_BCELComparator_ClassInfo_, allocate$BCELComparator);
	return class$;
}

$Class* BCELComparator::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com