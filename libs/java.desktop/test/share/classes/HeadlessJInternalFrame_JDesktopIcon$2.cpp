#include <HeadlessJInternalFrame_JDesktopIcon$2.h>
#include <HeadlessJInternalFrame_JDesktopIcon.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessJInternalFrame_JDesktopIcon$2::init$() {
	$Component::init$();
}

HeadlessJInternalFrame_JDesktopIcon$2::HeadlessJInternalFrame_JDesktopIcon$2() {
}

$Class* HeadlessJInternalFrame_JDesktopIcon$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessJInternalFrame_JDesktopIcon$2, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJInternalFrame_JDesktopIcon",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJInternalFrame_JDesktopIcon$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJInternalFrame_JDesktopIcon$2",
		"java.awt.Component",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HeadlessJInternalFrame_JDesktopIcon"
	};
	$loadClass(HeadlessJInternalFrame_JDesktopIcon$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJInternalFrame_JDesktopIcon$2));
	});
	return class$;
}

$Class* HeadlessJInternalFrame_JDesktopIcon$2::class$ = nullptr;