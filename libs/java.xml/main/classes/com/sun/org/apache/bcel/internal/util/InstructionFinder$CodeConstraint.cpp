#include <com/sun/org/apache/bcel/internal/util/InstructionFinder$CodeConstraint.h>

#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/util/InstructionFinder.h>
#include <jcpp.h>

using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$MethodInfo _InstructionFinder$CodeConstraint_MethodInfo_[] = {
	{"checkCode", "([Lcom/sun/org/apache/bcel/internal/generic/InstructionHandle;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(InstructionFinder$CodeConstraint, checkCode, bool, $InstructionHandleArray*)},
	{}
};

$InnerClassInfo _InstructionFinder$CodeConstraint_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.util.InstructionFinder$CodeConstraint", "com.sun.org.apache.bcel.internal.util.InstructionFinder", "CodeConstraint", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _InstructionFinder$CodeConstraint_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.bcel.internal.util.InstructionFinder$CodeConstraint",
	nullptr,
	nullptr,
	nullptr,
	_InstructionFinder$CodeConstraint_MethodInfo_,
	nullptr,
	nullptr,
	_InstructionFinder$CodeConstraint_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.util.InstructionFinder"
};

$Object* allocate$InstructionFinder$CodeConstraint($Class* clazz) {
	return $of($alloc(InstructionFinder$CodeConstraint));
}

$Class* InstructionFinder$CodeConstraint::load$($String* name, bool initialize) {
	$loadClass(InstructionFinder$CodeConstraint, name, initialize, &_InstructionFinder$CodeConstraint_ClassInfo_, allocate$InstructionFinder$CodeConstraint);
	return class$;
}

$Class* InstructionFinder$CodeConstraint::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com