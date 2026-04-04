#include <bug6348946$3.h>
#include <bug6348946.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $bug6348946 = ::bug6348946;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6348946$3::init$($RectangleArray* val$result) {
	$set(this, val$result, val$result);
}

void bug6348946$3::run() {
	$useLocalObjectStack();
	$init($bug6348946);
	$var($Point, var$0, $nc($bug6348946::panel)->getLocationOnScreen());
	$nc(this->val$result)->set(0, $$new($Rectangle, var$0, $($bug6348946::panel->getSize())));
}

bug6348946$3::bug6348946$3() {
}

$Class* bug6348946$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "[Ljava/awt/Rectangle;", nullptr, $FINAL | $SYNTHETIC, $field(bug6348946$3, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/awt/Rectangle;)V", "()V", 0, $method(bug6348946$3, init$, void, $RectangleArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6348946$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6348946",
		"getPanelRectangle",
		"()Ljava/awt/Rectangle;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6348946$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6348946$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6348946"
	};
	$loadClass(bug6348946$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6348946$3);
	});
	return class$;
}

$Class* bug6348946$3::class$ = nullptr;