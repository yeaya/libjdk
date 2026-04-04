#include <bug7088744$2$1.h>
#include <bug7088744$2.h>
#include <bug7088744.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <jcpp.h>

using $bug7088744 = ::bug7088744;
using $bug7088744$2 = ::bug7088744$2;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug7088744$2$1::init$($bug7088744$2* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void bug7088744$2$1::mouseClicked($MouseEvent* e) {
	$bug7088744::processEvent(1, e);
}

void bug7088744$2$1::mousePressed($MouseEvent* e) {
	$bug7088744::processEvent(2, e);
}

void bug7088744$2$1::mouseReleased($MouseEvent* e) {
	$bug7088744::processEvent(3, e);
}

bug7088744$2$1::bug7088744$2$1() {
}

$Class* bug7088744$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug7088744$2;", nullptr, $FINAL | $SYNTHETIC, $field(bug7088744$2$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug7088744$2;)V", nullptr, 0, $method(bug7088744$2$1, init$, void, $bug7088744$2*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug7088744$2$1, mouseClicked, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug7088744$2$1, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug7088744$2$1, mouseReleased, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7088744$2",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7088744$2", nullptr, nullptr, 0},
		{"bug7088744$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7088744$2$1",
		"java.awt.event.MouseAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7088744"
	};
	$loadClass(bug7088744$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug7088744$2$1));
	});
	return class$;
}

$Class* bug7088744$2$1::class$ = nullptr;