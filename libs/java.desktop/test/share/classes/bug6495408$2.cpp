#include <bug6495408$2.h>
#include <bug6495408.h>
#include <java/awt/Component.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6495408 = ::bug6495408;
using $Component = ::java::awt::Component;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6495408$2::init$($Rectangle* val$d, $Point* val$p, $Robot* val$robot) {
	$set(this, val$d, val$d);
	$set(this, val$p, val$p);
	$set(this, val$robot, val$robot);
}

void bug6495408$2::run() {
	$init($bug6495408);
	int32_t tab = $nc($bug6495408::tabbedPane)->getTabCount() - 1;
	$var($Rectangle, bounds, $nc($bug6495408::tabbedPane)->getBoundsAt(tab));
	if (bounds != nullptr) {
		$nc(this->val$d)->setBounds(bounds);
		$nc(this->val$p)->setLocation(this->val$d->x + this->val$d->width / 2, this->val$d->y + this->val$d->height / 2);
		$SwingUtilities::convertPointToScreen(this->val$p, $bug6495408::tabbedPane);
		$nc(this->val$robot)->mouseMove(this->val$p->x, this->val$p->y + this->val$d->height);
		$nc($bug6495408::tabbedPane)->addTab("Hello"_s, nullptr);
	}
}

bug6495408$2::bug6495408$2() {
}

$Class* bug6495408$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$robot", "Ljava/awt/Robot;", nullptr, $FINAL | $SYNTHETIC, $field(bug6495408$2, val$robot)},
		{"val$p", "Ljava/awt/Point;", nullptr, $FINAL | $SYNTHETIC, $field(bug6495408$2, val$p)},
		{"val$d", "Ljava/awt/Rectangle;", nullptr, $FINAL | $SYNTHETIC, $field(bug6495408$2, val$d)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Rectangle;Ljava/awt/Point;Ljava/awt/Robot;)V", "()V", 0, $method(bug6495408$2, init$, void, $Rectangle*, $Point*, $Robot*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6495408$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6495408",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6495408$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6495408$2",
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
		"bug6495408"
	};
	$loadClass(bug6495408$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6495408$2);
	});
	return class$;
}

$Class* bug6495408$2::class$ = nullptr;