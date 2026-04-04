#include <bug4708809$4.h>
#include <bug4708809.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JScrollBar.h>
#include <jcpp.h>

using $PointArray = $Array<::java::awt::Point>;
using $bug4708809 = ::bug4708809;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4708809$4::init$($PointArray* val$result, double val$scaleX, double val$scaleY) {
	$set(this, val$result, val$result);
	this->val$scaleX = val$scaleX;
	this->val$scaleY = val$scaleY;
}

void bug4708809$4::run() {
	$useLocalObjectStack();
	$init($bug4708809);
	$var($Point, p, $nc($bug4708809::sbar)->getLocationOnScreen());
	$var($Rectangle, rect, $nc($bug4708809::sbar)->getBounds());
	$nc(this->val$result)->set(0, $$new($Point, $cast(int32_t, ($nc(p)->x + this->val$scaleX * $nc(rect)->width)), $cast(int32_t, ($nc(p)->y + this->val$scaleY * $nc(rect)->height))));
}

bug4708809$4::bug4708809$4() {
}

$Class* bug4708809$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$scaleY", "D", nullptr, $FINAL | $SYNTHETIC, $field(bug4708809$4, val$scaleY)},
		{"val$scaleX", "D", nullptr, $FINAL | $SYNTHETIC, $field(bug4708809$4, val$scaleX)},
		{"val$result", "[Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug4708809$4, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/awt/Point;DD)V", "()V", 0, $method(bug4708809$4, init$, void, $PointArray*, double, double)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4708809$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4708809",
		"getClickPoint",
		"(DD)Ljava/awt/Point;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4708809$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4708809$4",
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
		"bug4708809"
	};
	$loadClass(bug4708809$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4708809$4);
	});
	return class$;
}

$Class* bug4708809$4::class$ = nullptr;