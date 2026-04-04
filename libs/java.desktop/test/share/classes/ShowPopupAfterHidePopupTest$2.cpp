#include <ShowPopupAfterHidePopupTest$2.h>
#include <ShowPopupAfterHidePopupTest.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

using $ShowPopupAfterHidePopupTest = ::ShowPopupAfterHidePopupTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ShowPopupAfterHidePopupTest$2::init$() {
}

void ShowPopupAfterHidePopupTest$2::run() {
	$init($ShowPopupAfterHidePopupTest);
	$nc($ShowPopupAfterHidePopupTest::comboBox)->showPopup();
	$nc($ShowPopupAfterHidePopupTest::comboBox)->hidePopup();
	$nc($ShowPopupAfterHidePopupTest::comboBox)->showPopup();
}

ShowPopupAfterHidePopupTest$2::ShowPopupAfterHidePopupTest$2() {
}

$Class* ShowPopupAfterHidePopupTest$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ShowPopupAfterHidePopupTest$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ShowPopupAfterHidePopupTest$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ShowPopupAfterHidePopupTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ShowPopupAfterHidePopupTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ShowPopupAfterHidePopupTest$2",
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
	$loadClass(ShowPopupAfterHidePopupTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ShowPopupAfterHidePopupTest$2);
	});
	return class$;
}

$Class* ShowPopupAfterHidePopupTest$2::class$ = nullptr;