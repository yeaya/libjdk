#include <bug4816114$TestSplitPane.h>
#include <bug4816114.h>
#include <javax/swing/JSplitPane.h>
#include <jcpp.h>

using $bug4816114 = ::bug4816114;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JSplitPane = ::javax::swing::JSplitPane;

void bug4816114$TestSplitPane::init$($bug4816114* this$0) {
	$set(this, this$0, this$0);
	$JSplitPane::init$();
}

void bug4816114$TestSplitPane::setDividerLocation(int32_t location) {
	$JSplitPane::setDividerLocation(location);
	if ($nc(this->this$0->splitPane)->getDividerLocation() == 151) {
		this->this$0->setPassed(getOrientation(), true);
	}
	$synchronized(this->this$0) {
		$nc(this->this$0->resized)->set($bug4816114::step, true);
		this->this$0->notifyAll();
	}
}

bug4816114$TestSplitPane::bug4816114$TestSplitPane() {
}

$Class* bug4816114$TestSplitPane::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4816114;", nullptr, $FINAL | $SYNTHETIC, $field(bug4816114$TestSplitPane, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4816114;)V", nullptr, 0, $method(bug4816114$TestSplitPane, init$, void, $bug4816114*)},
		{"setDividerLocation", "(I)V", nullptr, $PUBLIC, $virtualMethod(bug4816114$TestSplitPane, setDividerLocation, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4816114$TestSplitPane", "bug4816114", "TestSplitPane", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4816114$TestSplitPane",
		"javax.swing.JSplitPane",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4816114"
	};
	$loadClass(bug4816114$TestSplitPane, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4816114$TestSplitPane));
	});
	return class$;
}

$Class* bug4816114$TestSplitPane::class$ = nullptr;