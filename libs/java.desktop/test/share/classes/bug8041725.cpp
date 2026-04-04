#include <bug8041725.h>
#include <bug8041725$1.h>
#include <java/awt/Color.h>
#include <javax/swing/JList.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $bug8041725$1 = ::bug8041725$1;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JList = ::javax::swing::JList;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

void bug8041725::init$() {
}

void bug8041725::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($NimbusLookAndFeel));
	$SwingUtilities::invokeAndWait($$new($bug8041725$1));
}

void bug8041725::testSelectionColors($JList* list) {
	$useLocalObjectStack();
	$var($Color, selBackColor, $nc(list)->getSelectionBackground());
	if (!($instanceOf($UIResource, selBackColor))) {
		$throwNew($RuntimeException, $($String::format("JList.getSelectionBackground() returned instance of \'%s\' instead of UIResource."_s, $$new($ObjectArray, {$nc($of(selBackColor))->getClass()}))));
	}
	$var($Color, selForeColor, list->getSelectionForeground());
	if (!($instanceOf($UIResource, selForeColor))) {
		$throwNew($RuntimeException, $($String::format("JList.getSelectionForeground() returned instance of \'%s\' instead of UIResource."_s, $$new($ObjectArray, {$nc($of(selForeColor))->getClass()}))));
	}
}

bug8041725::bug8041725() {
}

$Class* bug8041725::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8041725, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8041725, main, void, $StringArray*), "java.lang.Exception"},
		{"testSelectionColors", "(Ljavax/swing/JList;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8041725, testSelectionColors, void, $JList*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8041725$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8041725",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8041725$1"
	};
	$loadClass(bug8041725, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8041725);
	});
	return class$;
}

$Class* bug8041725::class$ = nullptr;