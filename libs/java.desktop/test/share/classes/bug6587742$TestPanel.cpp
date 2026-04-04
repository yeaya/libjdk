#include <bug6587742$TestPanel.h>
#include <bug6587742$TestPanel$1.h>
#include <bug6587742.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/OceanTheme.h>
#include <jcpp.h>

#undef X_AXIS
#undef Y_AXIS

using $bug6587742 = ::bug6587742;
using $bug6587742$TestPanel$1 = ::bug6587742$TestPanel$1;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JComboBox = ::javax::swing::JComboBox;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $OceanTheme = ::javax::swing::plaf::metal::OceanTheme;

void bug6587742$TestPanel::init$($bug6587742* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$JPanel::init$();
	$set(this, cbThemes, $new($JComboBox));
	this->cbThemes->addItem($$new($OceanTheme));
	this->cbThemes->addItem($$new($DefaultMetalTheme));
	this->cbThemes->addItemListener($$new($bug6587742$TestPanel$1, this, this$0));
	$var($JPanel, pnVertical, $new($JPanel));
	pnVertical->setLayout($$new($BoxLayout, pnVertical, $BoxLayout::Y_AXIS));
	for (int32_t i = 0; i < 12; ++i) {
		int32_t filled = i >> 2;
		pnVertical->add($($bug6587742::createSlider(false, filled > 1 ? ($Boolean*)nullptr : $($Boolean::valueOf(filled == 1)), (i & 2) == 0, (i & 1) != 0)));
	}
	$var($JPanel, pnHorizontal, $new($JPanel));
	pnHorizontal->setLayout($$new($BoxLayout, pnHorizontal, $BoxLayout::X_AXIS));
	for (int32_t i = 0; i < 12; ++i) {
		int32_t filled = i >> 2;
		pnHorizontal->add($($bug6587742::createSlider(true, filled > 1 ? ($Boolean*)nullptr : $($Boolean::valueOf(filled == 1)), (i & 2) == 0, (i & 1) != 0)));
	}
	$var($JTabbedPane, tpSliders, $new($JTabbedPane));
	tpSliders->add("Vertical sliders"_s, pnVertical);
	tpSliders->add("Horizontal sliders"_s, pnHorizontal);
	setLayout($$new($BoxLayout, this, $BoxLayout::Y_AXIS));
	add($$new($JLabel, "Select theme:"_s));
	add(this->cbThemes);
	add(tpSliders);
}

bug6587742$TestPanel::bug6587742$TestPanel() {
}

$Class* bug6587742$TestPanel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6587742;", nullptr, $FINAL | $SYNTHETIC, $field(bug6587742$TestPanel, this$0)},
		{"cbThemes", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $FINAL, $field(bug6587742$TestPanel, cbThemes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6587742;)V", nullptr, $PRIVATE, $method(bug6587742$TestPanel, init$, void, $bug6587742*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6587742$TestPanel", "bug6587742", "TestPanel", $PRIVATE},
		{"bug6587742$TestPanel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6587742$TestPanel",
		"javax.swing.JPanel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6587742"
	};
	$loadClass(bug6587742$TestPanel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6587742$TestPanel));
	});
	return class$;
}

$Class* bug6587742$TestPanel::class$ = nullptr;