#include <com/sun/org/apache/bcel/internal/generic/MethodGen$1.h>

#include <com/sun/org/apache/bcel/internal/generic/MethodGen.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef THAT
#undef THIS

using $MethodGen = ::com::sun::org::apache::bcel::internal::generic::MethodGen;
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
						namespace generic {

$MethodInfo _MethodGen$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(MethodGen$1, init$, void)},
	{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MethodGen$1, equals, bool, Object$*, Object$*)},
	{"hashCode", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(MethodGen$1, hashCode, int32_t, Object$*)},
	{}
};

$EnclosingMethodInfo _MethodGen$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.bcel.internal.generic.MethodGen",
	nullptr,
	nullptr
};

$InnerClassInfo _MethodGen$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.MethodGen$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MethodGen$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.MethodGen$1",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.util.BCELComparator",
	nullptr,
	_MethodGen$1_MethodInfo_,
	nullptr,
	&_MethodGen$1_EnclosingMethodInfo_,
	_MethodGen$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.MethodGen"
};

$Object* allocate$MethodGen$1($Class* clazz) {
	return $of($alloc(MethodGen$1));
}

void MethodGen$1::init$() {
}

bool MethodGen$1::equals(Object$* o1, Object$* o2) {
	$useLocalCurrentObjectStackCache();
	$var($MethodGen, THIS, $cast($MethodGen, o1));
	$var($MethodGen, THAT, $cast($MethodGen, o2));
	$var($Object, var$1, $of($nc(THIS)->getName()));
	bool var$0 = $Objects::equals(var$1, $($nc(THAT)->getName()));
	if (var$0) {
		$var($Object, var$2, $of($nc(THIS)->getSignature()));
		var$0 = $Objects::equals(var$2, $($nc(THAT)->getSignature()));
	}
	return var$0;
}

int32_t MethodGen$1::hashCode(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($MethodGen, THIS, $cast($MethodGen, o));
	int32_t var$0 = $nc($($nc(THIS)->getSignature()))->hashCode();
	return var$0 ^ $nc($(THIS->getName()))->hashCode();
}

MethodGen$1::MethodGen$1() {
}

$Class* MethodGen$1::load$($String* name, bool initialize) {
	$loadClass(MethodGen$1, name, initialize, &_MethodGen$1_ClassInfo_, allocate$MethodGen$1);
	return class$;
}

$Class* MethodGen$1::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com