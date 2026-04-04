#include <bug6542335$MyScrollBarUI.h>
#include <bug6542335.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;

void bug6542335$MyScrollBarUI::init$() {
	$BasicScrollBarUI::init$();
}

$Rectangle* bug6542335$MyScrollBarUI::getThumbBounds() {
	return $BasicScrollBarUI::getThumbBounds();
}

bug6542335$MyScrollBarUI::bug6542335$MyScrollBarUI() {
}

$Class* bug6542335$MyScrollBarUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6542335$MyScrollBarUI, init$, void)},
		{"getThumbBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(bug6542335$MyScrollBarUI, getThumbBounds, $Rectangle*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6542335$MyScrollBarUI", "bug6542335", "MyScrollBarUI", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6542335$MyScrollBarUI",
		"javax.swing.plaf.basic.BasicScrollBarUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6542335"
	};
	$loadClass(bug6542335$MyScrollBarUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6542335$MyScrollBarUI));
	});
	return class$;
}

$Class* bug6542335$MyScrollBarUI::class$ = nullptr;