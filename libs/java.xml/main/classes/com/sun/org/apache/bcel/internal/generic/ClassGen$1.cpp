#include <com/sun/org/apache/bcel/internal/generic/ClassGen$1.h>
#include <com/sun/org/apache/bcel/internal/generic/ClassGen.h>
#include <java/util/Objects.h>
#include <jcpp.h>

#undef THAT
#undef THIS

using $ClassGen = ::com::sun::org::apache::bcel::internal::generic::ClassGen;
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

void ClassGen$1::init$() {
}

bool ClassGen$1::equals(Object$* o1, Object$* o2) {
	$useLocalObjectStack();
	$var($ClassGen, THIS, $cast($ClassGen, o1));
	$var($ClassGen, THAT, $cast($ClassGen, o2));
	$var($Object, var$0, $nc(THIS)->getClassName());
	return $Objects::equals(var$0, $($nc(THAT)->getClassName()));
}

int32_t ClassGen$1::hashCode(Object$* o) {
	$useLocalObjectStack();
	$var($ClassGen, THIS, $cast($ClassGen, o));
	return $$nc($nc(THIS)->getClassName())->hashCode();
}

ClassGen$1::ClassGen$1() {
}

$Class* ClassGen$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ClassGen$1, init$, void)},
		{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ClassGen$1, equals, bool, Object$*, Object$*)},
		{"hashCode", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(ClassGen$1, hashCode, int32_t, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.bcel.internal.generic.ClassGen",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.generic.ClassGen$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.ClassGen$1",
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
		"com.sun.org.apache.bcel.internal.generic.ClassGen"
	};
	$loadClass(ClassGen$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ClassGen$1);
	});
	return class$;
}

$Class* ClassGen$1::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com