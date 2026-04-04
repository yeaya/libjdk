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

void FieldGen$1::init$() {
}

bool FieldGen$1::equals(Object$* o1, Object$* o2) {
	$useLocalObjectStack();
	$var($FieldGen, THIS, $cast($FieldGen, o1));
	$var($FieldGen, THAT, $cast($FieldGen, o2));
	$var($Object, var$1, $nc(THIS)->getName());
	bool var$0 = $Objects::equals(var$1, $($nc(THAT)->getName()));
	if (var$0) {
		$var($Object, var$2, THIS->getSignature());
		var$0 = $Objects::equals(var$2, $(THAT->getSignature()));
	}
	return var$0;
}

int32_t FieldGen$1::hashCode(Object$* o) {
	$useLocalObjectStack();
	$var($FieldGen, THIS, $cast($FieldGen, o));
	int32_t var$0 = $$nc($nc(THIS)->getSignature())->hashCode();
	return var$0 ^ $$nc(THIS->getName())->hashCode();
}

FieldGen$1::FieldGen$1() {
}

$Class* FieldGen$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FieldGen$1, init$, void)},
		{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(FieldGen$1, equals, bool, Object$*, Object$*)},
		{"hashCode", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(FieldGen$1, hashCode, int32_t, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.bcel.internal.generic.FieldGen",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.generic.FieldGen$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.FieldGen$1",
		"java.lang.Object",
		"com.sun.org.apache.bcel.internal.util.BCELComparator",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.bcel.internal.generic.FieldGen"
	};
	$loadClass(FieldGen$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FieldGen$1);
	});
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