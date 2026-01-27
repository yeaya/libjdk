#include <com/sun/org/apache/bcel/internal/generic/Type$2.h>

#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <jcpp.h>

using $Type = ::com::sun::org::apache::bcel::internal::generic::Type;
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

$MethodInfo _Type$2_MethodInfo_[] = {
	{"<init>", "(BLjava/lang/String;)V", nullptr, 0, $method(Type$2, init$, void, int8_t, $String*)},
	{}
};

$EnclosingMethodInfo _Type$2_EnclosingMethodInfo_ = {
	"com.sun.org.apache.bcel.internal.generic.Type",
	nullptr,
	nullptr
};

$InnerClassInfo _Type$2_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.Type$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.Type$2",
	"com.sun.org.apache.bcel.internal.generic.Type",
	nullptr,
	nullptr,
	_Type$2_MethodInfo_,
	nullptr,
	&_Type$2_EnclosingMethodInfo_,
	_Type$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.Type"
};

$Object* allocate$Type$2($Class* clazz) {
	return $of($alloc(Type$2));
}

void Type$2::init$(int8_t t, $String* s) {
	$Type::init$(t, s);
}

Type$2::Type$2() {
}

$Class* Type$2::load$($String* name, bool initialize) {
	$loadClass(Type$2, name, initialize, &_Type$2_ClassInfo_, allocate$Type$2);
	return class$;
}

$Class* Type$2::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com