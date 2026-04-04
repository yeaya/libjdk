#include <com/apple/laf/AquaOptionPaneUI.h>
#include <com/apple/laf/AquaOptionPaneUI$AquaButtonAreaLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <javax/swing/Box.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

#undef REMAINDER
#undef TOP
#undef WEST
#undef X_AXIS

using $AquaOptionPaneUI$AquaButtonAreaLayout = ::com::apple::laf::AquaOptionPaneUI$AquaButtonAreaLayout;
using $Container = ::java::awt::Container;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Box = ::javax::swing::Box;
using $BoxLayout = ::javax::swing::BoxLayout;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;

namespace com {
	namespace apple {
		namespace laf {

void AquaOptionPaneUI::init$() {
	$BasicOptionPaneUI::init$();
}

$ComponentUI* AquaOptionPaneUI::createUI($JComponent* x) {
	$init(AquaOptionPaneUI);
	return $new(AquaOptionPaneUI);
}

$Container* AquaOptionPaneUI::createButtonArea() {
	$useLocalObjectStack();
	$var($Container, bottom, $BasicOptionPaneUI::createButtonArea());
	$nc(bottom)->setLayout($$new($AquaOptionPaneUI$AquaButtonAreaLayout, true, AquaOptionPaneUI::kDialogSmallPadding));
	return bottom;
}

$Container* AquaOptionPaneUI::createMessageArea() {
	$useLocalObjectStack();
	$var($JPanel, top, $new($JPanel));
	top->setBorder($($UIManager::getBorder("OptionPane.messageAreaBorder"_s)));
	top->setLayout($$new($BoxLayout, top, $BoxLayout::X_AXIS));
	$var($Container, body, $new($JPanel));
	$var($Icon, sideIcon, getIcon());
	if (sideIcon != nullptr) {
		$var($JLabel, iconLabel, $new($JLabel, sideIcon));
		iconLabel->setVerticalAlignment($SwingConstants::TOP);
		$var($JPanel, iconPanel, $new($JPanel));
		iconPanel->add(iconLabel);
		top->add(iconPanel);
		top->add($($Box::createHorizontalStrut(AquaOptionPaneUI::kDialogLargePadding)));
	}
	body->setLayout($$new($GridBagLayout));
	$var($GridBagConstraints, cons, $new($GridBagConstraints));
	cons->gridx = (cons->gridy = 0);
	cons->gridwidth = $GridBagConstraints::REMAINDER;
	cons->gridheight = 1;
	cons->anchor = $GridBagConstraints::WEST;
	$set(cons, insets, $new($Insets, 0, 0, 3, 0));
	$var($Object, var$0, getMessage());
	addMessageComponents(body, cons, var$0, getMaxCharactersPerLineCount(), false);
	top->add(body);
	return top;
}

AquaOptionPaneUI::AquaOptionPaneUI() {
}

$Class* AquaOptionPaneUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"kOKCancelButtonWidth", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaOptionPaneUI, kOKCancelButtonWidth)},
		{"kButtonHeight", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaOptionPaneUI, kButtonHeight)},
		{"kDialogSmallPadding", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaOptionPaneUI, kDialogSmallPadding)},
		{"kDialogLargePadding", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaOptionPaneUI, kDialogLargePadding)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaOptionPaneUI, init$, void)},
		{"createButtonArea", "()Ljava/awt/Container;", nullptr, $PROTECTED, $virtualMethod(AquaOptionPaneUI, createButtonArea, $Container*)},
		{"createMessageArea", "()Ljava/awt/Container;", nullptr, $PROTECTED, $virtualMethod(AquaOptionPaneUI, createMessageArea, $Container*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaOptionPaneUI, createUI, $ComponentUI*, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaOptionPaneUI$AquaButtonAreaLayout", "com.apple.laf.AquaOptionPaneUI", "AquaButtonAreaLayout", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaOptionPaneUI",
		"javax.swing.plaf.basic.BasicOptionPaneUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaOptionPaneUI$AquaButtonAreaLayout"
	};
	$loadClass(AquaOptionPaneUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaOptionPaneUI);
	});
	return class$;
}

$Class* AquaOptionPaneUI::class$ = nullptr;

		} // laf
	} // apple
} // com