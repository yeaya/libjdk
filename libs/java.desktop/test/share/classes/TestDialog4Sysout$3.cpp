#include <TestDialog4Sysout$3.h>
#include <JFileChooserCombolistSelection.h>
#include <TestDialog4Sysout.h>
#include <java/awt/event/ActionEvent.h>
#include <jcpp.h>

using $JFileChooserCombolistSelection = ::JFileChooserCombolistSelection;
using $TestDialog4Sysout = ::TestDialog4Sysout;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestDialog4Sysout$3::init$($TestDialog4Sysout* this$0) {
	$set(this, this$0, this$0);
}

void TestDialog4Sysout$3::actionPerformed($ActionEvent* ae) {
	$JFileChooserCombolistSelection::fail();
}

TestDialog4Sysout$3::TestDialog4Sysout$3() {
}

$Class* TestDialog4Sysout$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestDialog4Sysout;", nullptr, $FINAL | $SYNTHETIC, $field(TestDialog4Sysout$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestDialog4Sysout;)V", nullptr, 0, $method(TestDialog4Sysout$3, init$, void, $TestDialog4Sysout*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestDialog4Sysout$3, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestDialog4Sysout",
		"<init>",
		"(Ljavax/swing/JFrame;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestDialog4Sysout$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestDialog4Sysout$3",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestDialog4Sysout"
	};
	$loadClass(TestDialog4Sysout$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestDialog4Sysout$3);
	});
	return class$;
}

$Class* TestDialog4Sysout$3::class$ = nullptr;