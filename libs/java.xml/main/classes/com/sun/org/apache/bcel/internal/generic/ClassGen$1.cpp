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

$MethodInfo _ClassGen$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(ClassGen$1, init$, void)},
	{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ClassGen$1, equals, bool, Object$*, Object$*)},
	{"hashCode", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(ClassGen$1, hashCode, int32_t, Object$*)},
	{}
};

$EnclosingMethodInfo _ClassGen$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.bcel.internal.generic.ClassGen",
	nullptr,
	nullptr
};

$InnerClassInfo _ClassGen$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.generic.ClassGen$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ClassGen$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.bcel.internal.generic.ClassGen$1",
	"java.lang.Object",
	"com.sun.org.apache.bcel.internal.util.BCELComparator",
	nullptr,
	_ClassGen$1_MethodInfo_,
	nullptr,
	&_ClassGen$1_EnclosingMethodInfo_,
	_ClassGen$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.generic.ClassGen"
};

$Object* allocate$ClassGen$1($Class* clazz) {
	return $of($alloc(ClassGen$1));
}

void ClassGen$1::init$() {
}

bool ClassGen$1::equals(Object$* o1, Object$* o2) {
	$useLocalCurrentObjectStackCache();
	$var($ClassGen, THIS, $cast($ClassGen, o1));
	$var($ClassGen, THAT, $cast($ClassGen, o2));
	$var($Object, var$0, $of($nc(THIS)->getClassName()));
	return $Objects::equals(var$0, $($nc(THAT)->getClassName()));
}

int32_t ClassGen$1::hashCode(Object$* o) {
	$useLocalCurrentObjectStackCache();
	$var($ClassGen, THIS, $cast($ClassGen, o));
	return $nc($($nc(THIS)->getClassName()))->hashCode();
}

ClassGen$1::ClassGen$1() {
}

$Class* ClassGen$1::load$($String* name, bool initialize) {
	$loadClass(ClassGen$1, name, initialize, &_ClassGen$1_ClassInfo_, allocate$ClassGen$1);
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