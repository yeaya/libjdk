#include <bug4530474$2.h>
#include <bug4530474.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <javax/swing/JEditorPane.h>
#include <jcpp.h>

#undef TEST_COLOR

using $bug4530474 = ::bug4530474;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug4530474$2::init$($Robot* val$robot) {
	$set(this, val$robot, val$robot);
}

void bug4530474$2::run() {
	$useLocalObjectStack();
	bool passed = false;
	$init($bug4530474);
	$var($Point, p, $nc($bug4530474::jep)->getLocationOnScreen());
	$var($Dimension, d, $nc($bug4530474::jep)->getSize());
	int32_t x0 = $nc(p)->x;
	int32_t y = p->y + $nc(d)->height / 3;
	$var($StringBuilder, builder, $new($StringBuilder, "Test color: "_s));
	builder->append($($nc($bug4530474::TEST_COLOR)->toString()));
	builder->append(" resut colors: "_s);
	for (int32_t x = x0; x < x0 + d->width; ++x) {
		$var($Color, color, $nc(this->val$robot)->getPixelColor(x, y));
		builder->append(color);
		if ($bug4530474::TEST_COLOR->equals(color)) {
			passed = true;
			break;
		}
	}
	if (!passed) {
		$throwNew($RuntimeException, $$str({"Test Fail. "_s, $(builder->toString())}));
	}
}

bug4530474$2::bug4530474$2() {
}

$Class* bug4530474$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$robot", "Ljava/awt/Robot;", nullptr, $FINAL | $SYNTHETIC, $field(bug4530474$2, val$robot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Robot;)V", "()V", 0, $method(bug4530474$2, init$, void, $Robot*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4530474$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4530474",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4530474$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4530474$2",
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
		"bug4530474"
	};
	$loadClass(bug4530474$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4530474$2);
	});
	return class$;
}

$Class* bug4530474$2::class$ = nullptr;