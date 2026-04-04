#include <javax/swing/plaf/metal/MetalDesktopIconUI.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/LayoutManager.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/MatteBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicDesktopIconUI.h>
#include <javax/swing/plaf/metal/MetalBumps.h>
#include <javax/swing/plaf/metal/MetalDesktopIconUI$1.h>
#include <javax/swing/plaf/metal/MetalDesktopIconUI$TitleListener.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef CENTER
#undef WEST

using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $MatteBorder = ::javax::swing::border::MatteBorder;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicDesktopIconUI = ::javax::swing::plaf::basic::BasicDesktopIconUI;
using $MetalBumps = ::javax::swing::plaf::metal::MetalBumps;
using $MetalDesktopIconUI$1 = ::javax::swing::plaf::metal::MetalDesktopIconUI$1;
using $MetalDesktopIconUI$TitleListener = ::javax::swing::plaf::metal::MetalDesktopIconUI$TitleListener;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$ComponentUI* MetalDesktopIconUI::createUI($JComponent* c) {
	$init(MetalDesktopIconUI);
	return $new(MetalDesktopIconUI);
}

void MetalDesktopIconUI::init$() {
	$BasicDesktopIconUI::init$();
}

void MetalDesktopIconUI::installDefaults() {
	$BasicDesktopIconUI::installDefaults();
	$LookAndFeel::installColorsAndFont(this->desktopIcon, "DesktopIcon.background"_s, "DesktopIcon.foreground"_s, "DesktopIcon.font"_s);
	this->width = $UIManager::getInt("DesktopIcon.width"_s);
}

void MetalDesktopIconUI::installComponents() {
	$useLocalObjectStack();
	$set(this, frame, $nc(this->desktopIcon)->getInternalFrame());
	$var($Icon, icon, $nc(this->frame)->getFrameIcon());
	$var($String, title, $nc(this->frame)->getTitle());
	$set(this, button, $new($JButton, title, icon));
	this->button->addActionListener($$new($MetalDesktopIconUI$1, this));
	$nc(this->button)->setFont($($nc(this->desktopIcon)->getFont()));
	$nc(this->button)->setBackground($($nc(this->desktopIcon)->getBackground()));
	$nc(this->button)->setForeground($($nc(this->desktopIcon)->getForeground()));
	int32_t buttonH = $nc($($nc(this->button)->getPreferredSize()))->height;
	int32_t var$0 = buttonH / 3;
	$var($Color, var$1, $MetalLookAndFeel::getControlHighlight());
	$var($Color, var$2, $MetalLookAndFeel::getControlDarkShadow());
	$var($Icon, drag, $new($MetalBumps, var$0, buttonH, var$1, var$2, $($MetalLookAndFeel::getControl())));
	$set(this, label, $new($JLabel, drag));
	this->label->setBorder($$new($MatteBorder, 0, 2, 0, 1, $($nc(this->desktopIcon)->getBackground())));
	$nc(this->desktopIcon)->setLayout($$new($BorderLayout, 2, 0));
	$nc(this->desktopIcon)->add(this->button, $BorderLayout::CENTER);
	$nc(this->desktopIcon)->add(this->label, $BorderLayout::WEST);
}

void MetalDesktopIconUI::uninstallComponents() {
	$nc(this->desktopIcon)->setLayout(nullptr);
	$nc(this->desktopIcon)->remove(this->label);
	$nc(this->desktopIcon)->remove(this->button);
	$set(this, button, nullptr);
	$set(this, frame, nullptr);
}

void MetalDesktopIconUI::installListeners() {
	$BasicDesktopIconUI::installListeners();
	$$nc($nc(this->desktopIcon)->getInternalFrame())->addPropertyChangeListener($set(this, titleListener, $new($MetalDesktopIconUI$TitleListener, this)));
}

void MetalDesktopIconUI::uninstallListeners() {
	$$nc($nc(this->desktopIcon)->getInternalFrame())->removePropertyChangeListener(this->titleListener);
	$set(this, titleListener, nullptr);
	$BasicDesktopIconUI::uninstallListeners();
}

$Dimension* MetalDesktopIconUI::getPreferredSize($JComponent* c) {
	return getMinimumSize(c);
}

$Dimension* MetalDesktopIconUI::getMinimumSize($JComponent* c) {
	$useLocalObjectStack();
	return $new($Dimension, this->width, $nc($($$nc($nc(this->desktopIcon)->getLayout())->minimumLayoutSize(this->desktopIcon)))->height);
}

$Dimension* MetalDesktopIconUI::getMaximumSize($JComponent* c) {
	return getMinimumSize(c);
}

MetalDesktopIconUI::MetalDesktopIconUI() {
}

$Class* MetalDesktopIconUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"button", "Ljavax/swing/JButton;", nullptr, 0, $field(MetalDesktopIconUI, button)},
		{"label", "Ljavax/swing/JLabel;", nullptr, 0, $field(MetalDesktopIconUI, label)},
		{"titleListener", "Ljavax/swing/plaf/metal/MetalDesktopIconUI$TitleListener;", nullptr, 0, $field(MetalDesktopIconUI, titleListener)},
		{"width", "I", nullptr, $PRIVATE, $field(MetalDesktopIconUI, width)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalDesktopIconUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalDesktopIconUI, createUI, $ComponentUI*, $JComponent*)},
		{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MetalDesktopIconUI, getMaximumSize, $Dimension*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MetalDesktopIconUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MetalDesktopIconUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"installComponents", "()V", nullptr, $PROTECTED, $virtualMethod(MetalDesktopIconUI, installComponents, void)},
		{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(MetalDesktopIconUI, installDefaults, void)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(MetalDesktopIconUI, installListeners, void)},
		{"uninstallComponents", "()V", nullptr, $PROTECTED, $virtualMethod(MetalDesktopIconUI, uninstallComponents, void)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(MetalDesktopIconUI, uninstallListeners, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalDesktopIconUI$TitleListener", "javax.swing.plaf.metal.MetalDesktopIconUI", "TitleListener", 0},
		{"javax.swing.plaf.metal.MetalDesktopIconUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.metal.MetalDesktopIconUI",
		"javax.swing.plaf.basic.BasicDesktopIconUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalDesktopIconUI$TitleListener,javax.swing.plaf.metal.MetalDesktopIconUI$1"
	};
	$loadClass(MetalDesktopIconUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetalDesktopIconUI);
	});
	return class$;
}

$Class* MetalDesktopIconUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax