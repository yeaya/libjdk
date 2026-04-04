#include <HeadlessJPopupMenu_Separator$1.h>
#include <HeadlessJPopupMenu_Separator.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void HeadlessJPopupMenu_Separator$1::init$() {
	$Component::init$();
}

HeadlessJPopupMenu_Separator$1::HeadlessJPopupMenu_Separator$1() {
}

$Class* HeadlessJPopupMenu_Separator$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessJPopupMenu_Separator$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJPopupMenu_Separator",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJPopupMenu_Separator$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJPopupMenu_Separator$1",
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
		"HeadlessJPopupMenu_Separator"
	};
	$loadClass(HeadlessJPopupMenu_Separator$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJPopupMenu_Separator$1));
	});
	return class$;
}

$Class* HeadlessJPopupMenu_Separator$1::class$ = nullptr;