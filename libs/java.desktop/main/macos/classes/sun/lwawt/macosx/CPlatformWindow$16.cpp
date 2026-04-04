#include <sun/lwawt/macosx/CPlatformWindow$16.h>
#include <sun/lwawt/macosx/CPlatformWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPlatformWindow = ::sun::lwawt::macosx::CPlatformWindow;

namespace sun {
	namespace lwawt {
		namespace macosx {

void CPlatformWindow$16::init$($CPlatformWindow* this$0) {
	$set(this, this$0, this$0);
}

void CPlatformWindow$16::run() {
}

CPlatformWindow$16::CPlatformWindow$16() {
}

$Class* CPlatformWindow$16::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/lwawt/macosx/CPlatformWindow;", nullptr, $FINAL | $SYNTHETIC, $field(CPlatformWindow$16, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/macosx/CPlatformWindow;)V", nullptr, 0, $method(CPlatformWindow$16, init$, void, $CPlatformWindow*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(CPlatformWindow$16, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CPlatformWindow",
		"flushBuffers",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CPlatformWindow$16", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.lwawt.macosx.CPlatformWindow$16",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.macosx.CPlatformWindow"
	};
	$loadClass(CPlatformWindow$16, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CPlatformWindow$16);
	});
	return class$;
}

$Class* CPlatformWindow$16::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun