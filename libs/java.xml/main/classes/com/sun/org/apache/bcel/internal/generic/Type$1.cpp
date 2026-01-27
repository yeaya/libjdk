#include <com/sun/org/apache/bcel/internal/generic/Type$1.h>

#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <jcpp.h>

using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _Type$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Type$1, init$, void)},
	{}
};

$EnclosingMethodInfo _Type$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.bcel.internal.generic.Type",
	nullptr,
	nullptr
};

$InnerClassInfo _Type$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.Type$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.Type$1",
	"com.sun.org.apache.bcel.internal.generic.ReferenceType",
	nullptr,
	nullptr,
	_Type$1_MethodInfo_,
	nullptr,
	&_Type$1_EnclosingMethodInfo_,
	_Type$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.Type"
};

$Object* allocate$Type$1($Class* clazz) {
	return $of($alloc(Type$1));
}

void Type$1::init$() {
	$ReferenceType::init$();
}

Type$1::Type$1() {
}

$Class* Type$1::load$($String* name, bool initialize) {
	$loadClass(Type$1, name, initialize, &_Type$1_ClassInfo_, allocate$Type$1);
	return class$;
}

$Class* Type$1::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com