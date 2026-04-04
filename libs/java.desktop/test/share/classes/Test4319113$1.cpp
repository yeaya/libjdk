#include <Test4319113$1.h>
#include <Test4319113$1$1.h>
#include <Test4319113.h>
#include <java/awt/event/ItemEvent.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Test4319113 = ::Test4319113;
using $Test4319113$1$1 = ::Test4319113$1$1;
using $ItemEvent = ::java::awt::event::ItemEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void Test4319113$1::init$($Test4319113* this$0) {
	$set(this, this$0, this$0);
}

void Test4319113$1::itemStateChanged($ItemEvent* itemEvent) {
	if ($nc(itemEvent)->getStateChange() == 1) {
		$SwingUtilities::invokeLater($$new($Test4319113$1$1, this));
	}
}

Test4319113$1::Test4319113$1() {
}

$Class* Test4319113$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTest4319113;", nullptr, $FINAL | $SYNTHETIC, $field(Test4319113$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTest4319113;)V", nullptr, 0, $method(Test4319113$1, init$, void, $Test4319113*)},
		{"itemStateChanged", "(Ljava/awt/event/ItemEvent;)V", nullptr, $PUBLIC, $virtualMethod(Test4319113$1, itemStateChanged, void, $ItemEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test4319113",
		"show",
		"(Ljava/awt/Window;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test4319113$1", nullptr, nullptr, 0},
		{"Test4319113$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test4319113$1",
		"java.lang.Object",
		"java.awt.event.ItemListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test4319113"
	};
	$loadClass(Test4319113$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test4319113$1);
	});
	return class$;
}

$Class* Test4319113$1::class$ = nullptr;