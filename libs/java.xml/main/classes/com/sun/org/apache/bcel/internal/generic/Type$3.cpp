#include <com/sun/org/apache/bcel/internal/generic/Type$3.h>

#include <java/lang/ThreadLocal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadLocal = ::java::lang::ThreadLocal;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

$MethodInfo _Type$3_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Type$3, init$, void)},
	{"initialValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED, $virtualMethod(Type$3, initialValue, $Object*)},
	{}
};

$EnclosingMethodInfo _Type$3_EnclosingMethodInfo_ = {
	"com.sun.org.apache.bcel.internal.generic.Type",
	nullptr,
	nullptr
};

$InnerClassInfo _Type$3_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.Type$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Type$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.Type$3",
	"java.lang.ThreadLocal",
	nullptr,
	nullptr,
	_Type$3_MethodInfo_,
	"Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;",
	&_Type$3_EnclosingMethodInfo_,
	_Type$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.Type"
};

$Object* allocate$Type$3($Class* clazz) {
	return $of($alloc(Type$3));
}

void Type$3::init$() {
	$ThreadLocal::init$();
}

$Object* Type$3::initialValue() {
	return $of($Integer::valueOf(0));
}

Type$3::Type$3() {
}

$Class* Type$3::load$($String* name, bool initialize) {
	$loadClass(Type$3, name, initialize, &_Type$3_ClassInfo_, allocate$Type$3);
	return class$;
}

$Class* Type$3::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com