#include <IconifyTest$1$1.h>
#include <IconifyTest$1.h>
#include <IconifyTest.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $IconifyTest = ::IconifyTest;
using $IconifyTest$1 = ::IconifyTest$1;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $RepaintManager = ::javax::swing::RepaintManager;

void IconifyTest$1$1::init$($IconifyTest$1* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void IconifyTest$1$1::windowIconified($WindowEvent* e) {
	$useLocalObjectStack();
	$init($IconifyTest);
	$IconifyTest::windowIconifiedIsCalled = true;
	$var($RepaintManager, rm, $RepaintManager::currentManager(($JComponent*)nullptr));
	$nc(rm)->paintDirtyRegions();
	$nc($IconifyTest::button)->repaint();
	if (!$$nc(rm->getDirtyRegion($IconifyTest::button))->isEmpty()) {
		$IconifyTest::frameIsRepainted = true;
	}
}

IconifyTest$1$1::IconifyTest$1$1() {
}

$Class* IconifyTest$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LIconifyTest$1;", nullptr, $FINAL | $SYNTHETIC, $field(IconifyTest$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LIconifyTest$1;)V", nullptr, 0, $method(IconifyTest$1$1, init$, void, $IconifyTest$1*)},
		{"windowIconified", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(IconifyTest$1$1, windowIconified, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"IconifyTest$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"IconifyTest$1", nullptr, nullptr, 0},
		{"IconifyTest$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"IconifyTest$1$1",
		"java.awt.event.WindowAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"IconifyTest"
	};
	$loadClass(IconifyTest$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(IconifyTest$1$1));
	});
	return class$;
}

$Class* IconifyTest$1$1::class$ = nullptr;