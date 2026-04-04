#include <PrintManualTest_FitWidthMultiple$1$3.h>
#include <PrintManualTest_FitWidthMultiple$1.h>
#include <PrintManualTest_FitWidthMultiple.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <jcpp.h>

using $PrintManualTest_FitWidthMultiple = ::PrintManualTest_FitWidthMultiple;
using $PrintManualTest_FitWidthMultiple$1 = ::PrintManualTest_FitWidthMultiple$1;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void PrintManualTest_FitWidthMultiple$1$3::init$($PrintManualTest_FitWidthMultiple$1* this$1) {
	$set(this, this$1, this$1);
	$WindowAdapter::init$();
}

void PrintManualTest_FitWidthMultiple$1$3::windowClosing($WindowEvent* e) {
	$nc(this->this$1->this$0)->dispose();
	if ($PrintManualTest_FitWidthMultiple::testPassed == false) {
		$throwNew($RuntimeException, " User has not executed the test"_s);
	}
}

PrintManualTest_FitWidthMultiple$1$3::PrintManualTest_FitWidthMultiple$1$3() {
}

$Class* PrintManualTest_FitWidthMultiple$1$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "LPrintManualTest_FitWidthMultiple$1;", nullptr, $FINAL | $SYNTHETIC, $field(PrintManualTest_FitWidthMultiple$1$3, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPrintManualTest_FitWidthMultiple$1;)V", nullptr, 0, $method(PrintManualTest_FitWidthMultiple$1$3, init$, void, $PrintManualTest_FitWidthMultiple$1*)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(PrintManualTest_FitWidthMultiple$1$3, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"PrintManualTest_FitWidthMultiple$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PrintManualTest_FitWidthMultiple$1", nullptr, nullptr, 0},
		{"PrintManualTest_FitWidthMultiple$1$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PrintManualTest_FitWidthMultiple$1$3",
		"java.awt.event.WindowAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PrintManualTest_FitWidthMultiple"
	};
	$loadClass(PrintManualTest_FitWidthMultiple$1$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PrintManualTest_FitWidthMultiple$1$3));
	});
	return class$;
}

$Class* PrintManualTest_FitWidthMultiple$1$3::class$ = nullptr;