#include <bug6694823$4.h>
#include <bug6694823.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6694823 = ::bug6694823;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6694823$4::init$($Point* val$point) {
	$set(this, val$point, val$point);
}

void bug6694823$4::run() {
	$nc(this->val$point)->x = 0;
	$init($bug6694823);
	int32_t var$0 = $nc($bug6694823::frame)->getHeight();
	this->val$point->y = var$0 - $nc($($nc($bug6694823::popup)->getPreferredSize()))->height + $nc($bug6694823::screenInsets)->bottom;
	$nc($bug6694823::popup)->show($bug6694823::frame, this->val$point->x, this->val$point->y);
}

bug6694823$4::bug6694823$4() {
}

$Class* bug6694823$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$point", "Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6694823$4, val$point)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Point;)V", "()V", 0, $method(bug6694823$4, init$, void, $Point*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6694823$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6694823",
		"checkPopup",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6694823$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6694823$4",
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
		"bug6694823"
	};
	$loadClass(bug6694823$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6694823$4);
	});
	return class$;
}

$Class* bug6694823$4::class$ = nullptr;