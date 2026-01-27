#include <com/sun/org/apache/bcel/internal/generic/UnconditionalBranch.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$ClassInfo _UnconditionalBranch_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.generic.UnconditionalBranch"
};

$Object* allocate$UnconditionalBranch($Class* clazz) {
	return $of($alloc(UnconditionalBranch));
}

$Class* UnconditionalBranch::load$($String* name, bool initialize) {
	$loadClass(UnconditionalBranch, name, initialize, &_UnconditionalBranch_ClassInfo_, allocate$UnconditionalBranch);
	return class$;
}

$Class* UnconditionalBranch::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com