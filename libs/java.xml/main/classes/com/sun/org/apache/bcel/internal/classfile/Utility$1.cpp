#include <com/sun/org/apache/bcel/internal/classfile/Utility$1.h>
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
						namespace classfile {

void Utility$1::init$() {
	$ThreadLocal::init$();
}

$Object* Utility$1::initialValue() {
	return $of($Integer::valueOf(0));
}

Utility$1::Utility$1() {
}

$Class* Utility$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Utility$1, init$, void)},
		{"initialValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED, $virtualMethod(Utility$1, initialValue, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.bcel.internal.classfile.Utility",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.classfile.Utility$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.bcel.internal.classfile.Utility$1",
		"java.lang.ThreadLocal",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/lang/ThreadLocal<Ljava/lang/Integer;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.bcel.internal.classfile.Utility"
	};
	$loadClass(Utility$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Utility$1);
	});
	return class$;
}

$Class* Utility$1::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com