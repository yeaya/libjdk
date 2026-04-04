#include <bug6559589.h>
#include <bug6559589$1.h>
#include <java/awt/Component.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $bug6559589$1 = ::bug6559589$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JScrollPane = ::javax::swing::JScrollPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

void bug6559589::init$() {
}

void bug6559589::createGui() {
	$useLocalObjectStack();
	$var($JScrollPane, sp, $new($JScrollPane));
	int32_t listenerCount = $nc($(sp->getPropertyChangeListeners()))->length;
	sp->updateUI();
	if (listenerCount != $nc($(sp->getPropertyChangeListeners()))->length) {
		$throwNew($RuntimeException, "Listeners\' leak"_s);
	}
}

void bug6559589::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
	$SwingUtilities::invokeAndWait($$new($bug6559589$1));
}

bug6559589::bug6559589() {
}

$Class* bug6559589::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6559589, init$, void)},
		{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6559589, createGui, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6559589, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6559589$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6559589",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6559589$1"
	};
	$loadClass(bug6559589, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6559589);
	});
	return class$;
}

$Class* bug6559589::class$ = nullptr;