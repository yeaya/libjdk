#include <bug6670274.h>
#include <bug6670274$1.h>
#include <bug6670274$TestTabbedPaneUI.h>
#include <java/awt/Component.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

using $bug6670274$1 = ::bug6670274$1;
using $bug6670274$TestTabbedPaneUI = ::bug6670274$TestTabbedPaneUI;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $View = ::javax::swing::text::View;

void bug6670274::init$() {
}

void bug6670274::createGui() {
	$useLocalObjectStack();
	$var($JTabbedPane, pane, $new($JTabbedPane));
	$var($bug6670274$TestTabbedPaneUI, ui, $new($bug6670274$TestTabbedPaneUI));
	pane->setUI(ui);
	pane->add("one"_s, $$new($JPanel));
	pane->add("<html><i>Two</i></html>"_s, $$new($JPanel));
	pane->add("three"_s, $$new($JPanel));
	pane->setTitleAt(0, "<html><i>ONE</i></html>"_s);
	check(ui, $$new($ints, {
		0,
		1
	}));
	pane->setTitleAt(1, "hello"_s);
	check(ui, $$new($ints, {0}));
	pane->setTitleAt(0, "<html>html</html>"_s);
	pane->setTitleAt(2, "<html>html</html>"_s);
	check(ui, $$new($ints, {
		0,
		2
	}));
}

void bug6670274::check($bug6670274$TestTabbedPaneUI* ui, $ints* indices) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $$nc($nc(ui)->getTabbedPane())->getTabCount(); ++i) {
		$nc($System::out)->print($$str({"Checking tab #"_s, $$str(i)}));
		$var($View, view, ui->getTextViewForTab(i));
		bool found = false;
		for (int32_t j = 0; j < $nc(indices)->length; ++j) {
			if (indices->get(j) == i) {
				found = true;
				break;
			}
		}
		$System::out->print($$str({"; view = "_s, view}));
		if (found) {
			if (view == nullptr) {
				$throwNew($RuntimeException, "View is unexpectedly null"_s);
			}
		} else if (view != nullptr) {
			$throwNew($RuntimeException, "View is unexpectedly not null"_s);
		}
		$System::out->println(" ok"_s);
	}
	$nc($System::out)->println(""_s);
}

void bug6670274::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6670274$1));
}

bug6670274::bug6670274() {
}

$Class* bug6670274::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6670274, init$, void)},
		{"check", "(Lbug6670274$TestTabbedPaneUI;[I)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(bug6670274, check, void, $bug6670274$TestTabbedPaneUI*, $ints*)},
		{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6670274, createGui, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6670274, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6670274$TestTabbedPaneUI", "bug6670274", "TestTabbedPaneUI", $STATIC},
		{"bug6670274$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6670274",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6670274$TestTabbedPaneUI,bug6670274$1"
	};
	$loadClass(bug6670274, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6670274);
	});
	return class$;
}

$Class* bug6670274::class$ = nullptr;