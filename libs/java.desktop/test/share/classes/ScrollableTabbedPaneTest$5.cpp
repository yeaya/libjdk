#include <ScrollableTabbedPaneTest$5.h>
#include <ScrollableTabbedPaneTest.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $ScrollableTabbedPaneTest = ::ScrollableTabbedPaneTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;

void ScrollableTabbedPaneTest$5::init$($String* val$shortLAF) {
	$set(this, val$shortLAF, val$shortLAF);
}

void ScrollableTabbedPaneTest$5::run() {
	$useLocalObjectStack();
	int32_t i = 0;
	int32_t value = 0;
	do {
		$var($String, title, $str({"Tab"_s, $$str((i + 1))}));
		$init($ScrollableTabbedPaneTest);
		$nc($ScrollableTabbedPaneTest::pane)->addTab(title, $$new($JPanel));
		int32_t tempValue = $nc($($nc($ScrollableTabbedPaneTest::pane)->getMinimumSize()))->height;
		if (value == 0) {
			value = tempValue;
		}
		if (value != tempValue) {
			$var($String, error, $str({"["_s, this->val$shortLAF, "]: [Error]: TabbedScrollPane fails"_s}));
			$plusAssignStatic($ScrollableTabbedPaneTest::errorString, error);
		}
		++i;
	} while (i < 10);
}

ScrollableTabbedPaneTest$5::ScrollableTabbedPaneTest$5() {
}

$Class* ScrollableTabbedPaneTest$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$shortLAF", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ScrollableTabbedPaneTest$5, val$shortLAF)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(ScrollableTabbedPaneTest$5, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ScrollableTabbedPaneTest$5, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ScrollableTabbedPaneTest",
		"runTestCase",
		"(Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ScrollableTabbedPaneTest$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ScrollableTabbedPaneTest$5",
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
		"ScrollableTabbedPaneTest"
	};
	$loadClass(ScrollableTabbedPaneTest$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ScrollableTabbedPaneTest$5);
	});
	return class$;
}

$Class* ScrollableTabbedPaneTest$5::class$ = nullptr;