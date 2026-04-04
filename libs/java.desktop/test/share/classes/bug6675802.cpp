#include <bug6675802.h>
#include <java/awt/Component.h>
#include <java/lang/SecurityManager.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;

void bug6675802::init$() {
}

void bug6675802::main($StringArray* args) {
	$useLocalObjectStack();
	$load(bug6675802);
	$beforeCallerSensitive();
	$System::setSecurityManager($$new($SecurityManager));
	$var($JPopupMenu, popupMenu, $new($JPopupMenu));
	popupMenu->add($$new($JMenuItem, "Click"_s));
	popupMenu->show(nullptr, 0, 0);
	$nc($System::out)->println("Test passed"_s);
}

bug6675802::bug6675802() {
}

$Class* bug6675802::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6675802, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6675802, main, void, $StringArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6675802",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(bug6675802, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6675802);
	});
	return class$;
}

$Class* bug6675802::class$ = nullptr;