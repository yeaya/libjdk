#include <com/sun/org/apache/bcel/internal/classfile/Method$1.h>

#include <com/sun/org/apache/bcel/internal/classfile/Method.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef THAT
#undef THIS

using $Method = ::com::sun::org::apache::bcel::internal::classfile::Method;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Objects = ::java::util::Objects;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _Method$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Method$1, init$, void)},
	{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(Method$1, equals, bool, Object$*, Object$*)},
	{"hashCode", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(Method$1, hashCode, int32_t, Object$*)},
	{}
};

$EnclosingMethodInfo _Method$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.bcel.internal.classfile.Method",
	nullptr,
	nullptr
};

$InnerClassInfo _Method$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.Method$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Method$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Method$1",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.util.BCELComparator",
	nullptr,
	_Method$1_MethodInfo_,
	nullptr,
	&_Method$1_EnclosingMethodInfo_,
	_Method$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.Method"
};

$Object* allocate$Method$1($Class* clazz) {
	return $of($alloc(Method$1));
}

void Method$1::init$() {
}

bool Method$1::equals(Object$* o1, Object$* o2) {
	$useLocalCurrentObjectStackCache();
	$var($Method, THIS, $cast($Method, o1));
	$var($Method, THAT, $cast($Method, o2));
	$var($Object, var$1, $of($nc(THIS)->getName()));
	bool var$0 = $Objects::equals(var$1, $($nc(THAT)->getName()));
	if (var$0) {
		$var($Object, var$2, $of($nc(THIS)->getSignature()));
		var$0 = $Objects::equals(var$2, $($nc(THAT)->getSignature()));
	}
	return var$0;
}

int32_t Method$1::hashCode(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($Method, THIS, $cast($Method, o));
	int32_t var$0 = $nc($($nc(THIS)->getSignature()))->hashCode();
	return var$0 ^ $nc($(THIS->getName()))->hashCode();
}

Method$1::Method$1() {
}

$Class* Method$1::load$($String* name, bool initialize) {
	$loadClass(Method$1, name, initialize, &_Method$1_ClassInfo_, allocate$Method$1);
	return class$;
}

$Class* Method$1::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com