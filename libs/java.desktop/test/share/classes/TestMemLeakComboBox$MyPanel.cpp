#include <TestMemLeakComboBox$MyPanel.h>
#include <TestMemLeakComboBox.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $TestMemLeakComboBox = ::TestMemLeakComboBox;
using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CellRendererPane = ::javax::swing::CellRendererPane;
using $JComboBox = ::javax::swing::JComboBox;
using $JPanel = ::javax::swing::JPanel;

void TestMemLeakComboBox$MyPanel::init$() {
	$JPanel::init$();
}

void TestMemLeakComboBox$MyPanel::paint($Graphics* g) {
	$useLocalObjectStack();
	$JPanel::paint(g);
	{
		$var($ComponentArray, arr$, getComponents());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Component, child, arr$->get(i$));
			{
				verifyChild(child);
			}
		}
	}
}

void TestMemLeakComboBox$MyPanel::verifyChild($Component* c) {
	$useLocalObjectStack();
	if ($instanceOf($JComboBox, c)) {
		$var($ComponentArray, arr$, $cast($Container, c)->getComponents());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Component, child, arr$->get(i$));
			if ($instanceOf($CellRendererPane, child) && $cast($CellRendererPane, child)->getComponentCount() > 0) {
				$init($TestMemLeakComboBox);
				$assignStatic($TestMemLeakComboBox::failed, $new($String, $$str({"CellRendererPane still has children for: "_s, c})));
			}
		}
	}
}

TestMemLeakComboBox$MyPanel::TestMemLeakComboBox$MyPanel() {
}

$Class* TestMemLeakComboBox$MyPanel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(TestMemLeakComboBox$MyPanel, init$, void)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(TestMemLeakComboBox$MyPanel, paint, void, $Graphics*)},
		{"verifyChild", "(Ljava/awt/Component;)V", nullptr, $PRIVATE, $method(TestMemLeakComboBox$MyPanel, verifyChild, void, $Component*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestMemLeakComboBox$MyPanel", "TestMemLeakComboBox", "MyPanel", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestMemLeakComboBox$MyPanel",
		"javax.swing.JPanel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestMemLeakComboBox"
	};
	$loadClass(TestMemLeakComboBox$MyPanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestMemLeakComboBox$MyPanel));
	});
	return class$;
}

$Class* TestMemLeakComboBox$MyPanel::class$ = nullptr;