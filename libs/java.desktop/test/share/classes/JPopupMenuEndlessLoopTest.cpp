#include <JPopupMenuEndlessLoopTest.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JMenu = ::javax::swing::JMenu;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class JPopupMenuEndlessLoopTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(JPopupMenuEndlessLoopTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JPopupMenuEndlessLoopTest::lambda$main$0();
	}
};
$Class* JPopupMenuEndlessLoopTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JPopupMenuEndlessLoopTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JPopupMenuEndlessLoopTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JPopupMenuEndlessLoopTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JPopupMenuEndlessLoopTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JPopupMenuEndlessLoopTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* JPopupMenuEndlessLoopTest$$Lambda$lambda$main$0::class$ = nullptr;

void JPopupMenuEndlessLoopTest::init$() {
}

void JPopupMenuEndlessLoopTest::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new(JPopupMenuEndlessLoopTest$$Lambda$lambda$main$0));
}

void JPopupMenuEndlessLoopTest::lambda$main$0() {
	$useLocalObjectStack();
	$var($JPopupMenu, popup, $new($JPopupMenu, "Popup Menu"_s));
	$var($JMenu, menu, $new($JMenu, "Menu"_s));
	menu->add($$new($JMenuItem, "Menu Item"_s));
	popup->add(menu);
	menu->doClick();
	$var($MenuElementArray, elems, $$nc($MenuSelectionManager::defaultManager())->getSelectedPath());
	if (elems == nullptr || elems->length == 0) {
		$throwNew($RuntimeException, "Empty Selection"_s);
	}
	if (!$equals($nc(elems)->get(0), popup) || !$equals(elems->get(1), menu)) {
		$throwNew($RuntimeException, "Necessary menus are not selected!"_s);
	}
}

JPopupMenuEndlessLoopTest::JPopupMenuEndlessLoopTest() {
}

$Class* JPopupMenuEndlessLoopTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JPopupMenuEndlessLoopTest$$Lambda$lambda$main$0")) {
			return JPopupMenuEndlessLoopTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JPopupMenuEndlessLoopTest, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JPopupMenuEndlessLoopTest, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JPopupMenuEndlessLoopTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JPopupMenuEndlessLoopTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JPopupMenuEndlessLoopTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JPopupMenuEndlessLoopTest);
	});
	return class$;
}

$Class* JPopupMenuEndlessLoopTest::class$ = nullptr;