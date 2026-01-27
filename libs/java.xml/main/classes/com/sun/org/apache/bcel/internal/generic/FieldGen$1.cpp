#include <com/sun/org/apache/bcel/internal/generic/FieldGen$1.h>

#include <com/sun/org/apache/bcel/internal/generic/FieldGen.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef THAT
#undef THIS

using $FieldGen = ::com::sun::org::apache::bcel::internal::generic::FieldGen;
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

$MethodInfo _FieldGen$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(FieldGen$1, init$, void)},
	{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FieldGen$1, equals, bool, Object$*, Object$*)},
	{"hashCode", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(FieldGen$1, hashCode, int32_t, Object$*)},
	{}
};

$EnclosingMethodInfo _FieldGen$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.bcel.internal.generic.FieldGen",
	nullptr,
	nullptr
};

$InnerClassInfo _FieldGen$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.FieldGen$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _FieldGen$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.FieldGen$1",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.util.BCELComparator",
	nullptr,
	_FieldGen$1_MethodInfo_,
	nullptr,
	&_FieldGen$1_EnclosingMethodInfo_,
	_FieldGen$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.FieldGen"
};

$Object* allocate$FieldGen$1($Class* clazz) {
	return $of($alloc(FieldGen$1));
}

void FieldGen$1::init$() {
}

bool FieldGen$1::equals(Object$* o1, Object$* o2) {
	$useLocalCurrentObjectStackCache();
	$var($FieldGen, THIS, $cast($FieldGen, o1));
	$var($FieldGen, THAT, $cast($FieldGen, o2));
	$var($Object, var$1, $of($nc(THIS)->getName()));
	bool var$0 = $Objects::equals(var$1, $($nc(THAT)->getName()));
	if (var$0) {
		$var($Object, var$2, $of($nc(THIS)->getSignature()));
		var$0 = $Objects::equals(var$2, $($nc(THAT)->getSignature()));
	}
	return var$0;
}

int32_t FieldGen$1::hashCode(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($FieldGen, THIS, $cast($FieldGen, o));
	int32_t var$0 = $nc($($nc(THIS)->getSignature()))->hashCode();
	return var$0 ^ $nc($(THIS->getName()))->hashCode();
}

FieldGen$1::FieldGen$1() {
}

$Class* FieldGen$1::load$($String* name, bool initialize) {
	$loadClass(FieldGen$1, name, initialize, &_FieldGen$1_ClassInfo_, allocate$FieldGen$1);
	return class$;
}

$Class* FieldGen$1::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com