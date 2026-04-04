#include <ShowPopupAfterHidePopupTest$3.h>
#include <ShowPopupAfterHidePopupTest.h>
#include <java/awt/Window.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $ShowPopupAfterHidePopupTest = ::ShowPopupAfterHidePopupTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ShowPopupAfterHidePopupTest$3::init$() {
}

void ShowPopupAfterHidePopupTest$3::run() {
	$init($ShowPopupAfterHidePopupTest);
	$ShowPopupAfterHidePopupTest::popupIsVisible = $nc($ShowPopupAfterHidePopupTest::comboBox)->isPopupVisible();
	$nc($ShowPopupAfterHidePopupTest::frame)->dispose();
}

ShowPopupAfterHidePopupTest$3::ShowPopupAfterHidePopupTest$3() {
}

$Class* ShowPopupAfterHidePopupTest$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ShowPopupAfterHidePopupTest$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ShowPopupAfterHidePopupTest$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ShowPopupAfterHidePopupTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ShowPopupAfterHidePopupTest$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ShowPopupAfterHidePopupTest$3",
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
	$loadClass(ShowPopupAfterHidePopupTest$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShowPopupAfterHidePopupTest$3);
	});
	return class$;
}

$Class* ShowPopupAfterHidePopupTest$3::class$ = nullptr;