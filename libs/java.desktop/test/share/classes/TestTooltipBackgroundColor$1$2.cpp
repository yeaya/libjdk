#include <TestTooltipBackgroundColor$1$2.h>
#include <TestTooltipBackgroundColor$1.h>
#include <TestTooltipBackgroundColor.h>
#include <java/awt/event/ContainerAdapter.h>
#include <java/awt/event/ContainerEvent.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <jcpp.h>

using $TestTooltipBackgroundColor = ::TestTooltipBackgroundColor;
using $TestTooltipBackgroundColor$1 = ::TestTooltipBackgroundColor$1;
using $ContainerAdapter = ::java::awt::event::ContainerAdapter;
using $ContainerEvent = ::java::awt::event::ContainerEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestTooltipBackgroundColor$1$2::init$($TestTooltipBackgroundColor$1* this$0) {
	$set(this, this$0, this$0);
	$ContainerAdapter::init$();
}

void TestTooltipBackgroundColor$1$2::componentAdded($ContainerEvent* e) {
	$init($TestTooltipBackgroundColor);
	$nc($TestTooltipBackgroundColor::latch)->countDown();
}

TestTooltipBackgroundColor$1$2::TestTooltipBackgroundColor$1$2() {
}

$Class* TestTooltipBackgroundColor$1$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestTooltipBackgroundColor$1;", nullptr, $FINAL | $SYNTHETIC, $field(TestTooltipBackgroundColor$1$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestTooltipBackgroundColor$1;)V", nullptr, 0, $method(TestTooltipBackgroundColor$1$2, init$, void, $TestTooltipBackgroundColor$1*)},
		{"componentAdded", "(Ljava/awt/event/ContainerEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestTooltipBackgroundColor$1$2, componentAdded, void, $ContainerEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestTooltipBackgroundColor$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestTooltipBackgroundColor$1", nullptr, nullptr, 0},
		{"TestTooltipBackgroundColor$1$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestTooltipBackgroundColor$1$2",
		"java.awt.event.ContainerAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestTooltipBackgroundColor"
	};
	$loadClass(TestTooltipBackgroundColor$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTooltipBackgroundColor$1$2);
	});
	return class$;
}

$Class* TestTooltipBackgroundColor$1$2::class$ = nullptr;