#include <com/sun/tools/javac/util/Iterators$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

void Iterators$1::init$() {
}

bool Iterators$1::hasNext() {
	return false;
}

$Object* Iterators$1::next() {
	return nullptr;
}

Iterators$1::Iterators$1() {
}

$Class* Iterators$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Iterators$1, init$, void)},
		{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(Iterators$1, hasNext, bool)},
		{"next", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Iterators$1, next, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.tools.javac.util.Iterators",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.util.Iterators$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.tools.javac.util.Iterators$1",
		"java.lang.Object",
		"java.util.Iterator",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.util.Iterators"
	};
	$loadClass(Iterators$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Iterators$1);
	});
	return class$;
}

$Class* Iterators$1::class$ = nullptr;

				} // util
			} // javac
		} // tools
	} // sun
} // com