#include <bug6742358$TestPanel.h>
#include <bug6742358.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSlider.h>
#include <jcpp.h>

#undef X_AXIS
#undef Y_AXIS

using $bug6742358 = ::bug6742358;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JPanel = ::javax::swing::JPanel;

void bug6742358$TestPanel::init$() {
	$useLocalObjectStack();
	$JPanel::init$();
	$var($JPanel, pnVertical, $new($JPanel));
	pnVertical->setLayout($$new($BoxLayout, pnVertical, $BoxLayout::Y_AXIS));
	for (int32_t i = 0; i < 8; ++i) {
		pnVertical->add($($bug6742358::createSlider(false, (i & 4) == 0, (i & 2) == 0, (i & 1) == 0)));
	}
	$var($JPanel, pnHorizontal, $new($JPanel));
	pnHorizontal->setLayout($$new($BoxLayout, pnHorizontal, $BoxLayout::X_AXIS));
	for (int32_t i = 0; i < 8; ++i) {
		pnHorizontal->add($($bug6742358::createSlider(true, (i & 4) == 0, (i & 2) == 0, (i & 1) == 0)));
	}
	add(pnHorizontal);
	add(pnVertical);
}

bug6742358$TestPanel::bug6742358$TestPanel() {
}

$Class* bug6742358$TestPanel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(bug6742358$TestPanel, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6742358$TestPanel", "bug6742358", "TestPanel", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6742358$TestPanel",
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
		"bug6742358"
	};
	$loadClass(bug6742358$TestPanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6742358$TestPanel));
	});
	return class$;
}

$Class* bug6742358$TestPanel::class$ = nullptr;