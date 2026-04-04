#include <ShowPopupAfterHidePopupTest$1.h>
#include <ShowPopupAfterHidePopupTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ShowPopupAfterHidePopupTest = ::ShowPopupAfterHidePopupTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;

void ShowPopupAfterHidePopupTest$1::init$() {
}

void ShowPopupAfterHidePopupTest$1::run() {
	$useLocalObjectStack();
	$init($ShowPopupAfterHidePopupTest);
	$assignStatic($ShowPopupAfterHidePopupTest::frame, $new($JFrame, "Popup Menu of JComboBox"_s));
	$assignStatic($ShowPopupAfterHidePopupTest::comboBox, $new($JComboBox, $$new($StringArray, {
		"Item1"_s,
		"Item2"_s,
		"Item3"_s
	})));
	$$nc($ShowPopupAfterHidePopupTest::frame->getContentPane())->add($ShowPopupAfterHidePopupTest::comboBox);
	$nc($ShowPopupAfterHidePopupTest::frame)->pack();
	$nc($ShowPopupAfterHidePopupTest::frame)->setVisible(true);
}

ShowPopupAfterHidePopupTest$1::ShowPopupAfterHidePopupTest$1() {
}

$Class* ShowPopupAfterHidePopupTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ShowPopupAfterHidePopupTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ShowPopupAfterHidePopupTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ShowPopupAfterHidePopupTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ShowPopupAfterHidePopupTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ShowPopupAfterHidePopupTest$1",
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
		"ShowPopupAfterHidePopupTest"
	};
	$loadClass(ShowPopupAfterHidePopupTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShowPopupAfterHidePopupTest$1);
	});
	return class$;
}

$Class* ShowPopupAfterHidePopupTest$1::class$ = nullptr;