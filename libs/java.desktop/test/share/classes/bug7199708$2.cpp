#include <bug7199708$2.h>
#include <bug7199708$2$1.h>
#include <bug7199708$2$2.h>
#include <bug7199708.h>
#include <java/awt/Component.h>
#include <java/util/Locale.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug7199708 = ::bug7199708;
using $bug7199708$2$1 = ::bug7199708$2$1;
using $bug7199708$2$2 = ::bug7199708$2$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;

void bug7199708$2::init$() {
}

void bug7199708$2::run() {
	$useLocalObjectStack();
	$init($bug7199708);
	$var($String, detailsTooltip, $UIManager::getString("FileChooser.detailsViewButtonToolTipText"_s, $($nc($bug7199708::fileChooser)->getLocale())));
	$bug7199708::doAction($bug7199708::fileChooser, $$new($bug7199708$2$1, this, detailsTooltip));
	$bug7199708::doAction($bug7199708::fileChooser, $$new($bug7199708$2$2, this));
}

bug7199708$2::bug7199708$2() {
}

$Class* bug7199708$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7199708$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7199708$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7199708",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7199708$2", nullptr, nullptr, 0},
		{"bug7199708$2$2", nullptr, nullptr, 0},
		{"bug7199708$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7199708$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7199708"
	};
	$loadClass(bug7199708$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7199708$2);
	});
	return class$;
}

$Class* bug7199708$2::class$ = nullptr;