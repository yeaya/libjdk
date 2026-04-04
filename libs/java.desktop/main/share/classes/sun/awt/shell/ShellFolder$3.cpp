#include <sun/awt/shell/ShellFolder$3.h>
#include <java/lang/Comparable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {
		namespace shell {

void ShellFolder$3::init$() {
}

int32_t ShellFolder$3::compare(Object$* o1, Object$* o2) {
	int32_t gt = 0;
	if (o1 == nullptr && o2 == nullptr) {
		gt = 0;
	} else if (o1 != nullptr && o2 == nullptr) {
		gt = 1;
	} else if (o1 == nullptr && o2 != nullptr) {
		gt = -1;
	} else if ($instanceOf($Comparable, o1)) {
		$var($Comparable, o, $cast($Comparable, o1));
		gt = o->compareTo(o2);
	} else {
		gt = 0;
	}
	return gt;
}

ShellFolder$3::ShellFolder$3() {
}

$Class* ShellFolder$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ShellFolder$3, init$, void)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(ShellFolder$3, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.shell.ShellFolder",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.ShellFolder$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.ShellFolder$3",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.ShellFolder"
	};
	$loadClass(ShellFolder$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShellFolder$3);
	});
	return class$;
}

$Class* ShellFolder$3::class$ = nullptr;

		} // shell
	} // awt
} // sun