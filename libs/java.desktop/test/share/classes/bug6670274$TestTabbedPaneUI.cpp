#include <bug6670274$TestTabbedPaneUI.h>
#include <bug6670274.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $View = ::javax::swing::text::View;

void bug6670274$TestTabbedPaneUI::init$() {
	$BasicTabbedPaneUI::init$();
}

$View* bug6670274$TestTabbedPaneUI::getTextViewForTab(int32_t tabIndex) {
	return $BasicTabbedPaneUI::getTextViewForTab(tabIndex);
}

$JTabbedPane* bug6670274$TestTabbedPaneUI::getTabbedPane() {
	return this->tabPane;
}

bug6670274$TestTabbedPaneUI::bug6670274$TestTabbedPaneUI() {
}

$Class* bug6670274$TestTabbedPaneUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6670274$TestTabbedPaneUI, init$, void)},
		{"getTabbedPane", "()Ljavax/swing/JTabbedPane;", nullptr, $PUBLIC, $virtualMethod(bug6670274$TestTabbedPaneUI, getTabbedPane, $JTabbedPane*)},
		{"getTextViewForTab", "(I)Ljavax/swing/text/View;", nullptr, $PUBLIC, $virtualMethod(bug6670274$TestTabbedPaneUI, getTextViewForTab, $View*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6670274$TestTabbedPaneUI", "bug6670274", "TestTabbedPaneUI", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6670274$TestTabbedPaneUI",
		"javax.swing.plaf.basic.BasicTabbedPaneUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6670274"
	};
	$loadClass(bug6670274$TestTabbedPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6670274$TestTabbedPaneUI));
	});
	return class$;
}

$Class* bug6670274$TestTabbedPaneUI::class$ = nullptr;