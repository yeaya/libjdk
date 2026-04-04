#include <com/sun/java/swing/plaf/windows/WindowsDesktopIconUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicDesktopIconUI.h>
#include <jcpp.h>

#undef CENTER

using $WindowsInternalFrameTitlePane = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $BorderLayout = ::java::awt::BorderLayout;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicDesktopIconUI = ::javax::swing::plaf::basic::BasicDesktopIconUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsDesktopIconUI::init$() {
	$BasicDesktopIconUI::init$();
}

$ComponentUI* WindowsDesktopIconUI::createUI($JComponent* c) {
	$init(WindowsDesktopIconUI);
	return $new(WindowsDesktopIconUI);
}

void WindowsDesktopIconUI::installDefaults() {
	$BasicDesktopIconUI::installDefaults();
	this->width = $UIManager::getInt("DesktopIcon.width"_s);
}

void WindowsDesktopIconUI::installUI($JComponent* c) {
	$BasicDesktopIconUI::installUI(c);
	$nc(c)->setOpaque($XPStyle::getXP() == nullptr);
}

void WindowsDesktopIconUI::uninstallUI($JComponent* c) {
	$var($WindowsInternalFrameTitlePane, thePane, $cast($WindowsInternalFrameTitlePane, this->iconPane));
	$BasicDesktopIconUI::uninstallUI(c);
	$nc(thePane)->uninstallListeners();
}

void WindowsDesktopIconUI::installComponents() {
	$set(this, iconPane, $new($WindowsInternalFrameTitlePane, this->frame));
	$nc(this->desktopIcon)->setLayout($$new($BorderLayout));
	$nc(this->desktopIcon)->add(this->iconPane, $BorderLayout::CENTER);
	if ($XPStyle::getXP() != nullptr) {
		$nc(this->desktopIcon)->setBorder(nullptr);
	}
}

$Dimension* WindowsDesktopIconUI::getPreferredSize($JComponent* c) {
	return getMinimumSize(c);
}

$Dimension* WindowsDesktopIconUI::getMinimumSize($JComponent* c) {
	$var($Dimension, dim, $BasicDesktopIconUI::getMinimumSize(c));
	$nc(dim)->width = this->width;
	return dim;
}

WindowsDesktopIconUI::WindowsDesktopIconUI() {
}

$Class* WindowsDesktopIconUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"width", "I", nullptr, $PRIVATE, $field(WindowsDesktopIconUI, width)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsDesktopIconUI, init$, void)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsDesktopIconUI, createUI, $ComponentUI*, $JComponent*)},
		{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(WindowsDesktopIconUI, getMinimumSize, $Dimension*, $JComponent*)},
		{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(WindowsDesktopIconUI, getPreferredSize, $Dimension*, $JComponent*)},
		{"installComponents", "()V", nullptr, $PROTECTED, $virtualMethod(WindowsDesktopIconUI, installComponents, void)},
		{"installDefaults", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsDesktopIconUI, installDefaults, void)},
		{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsDesktopIconUI, installUI, void, $JComponent*)},
		{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsDesktopIconUI, uninstallUI, void, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsDesktopIconUI",
		"javax.swing.plaf.basic.BasicDesktopIconUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowsDesktopIconUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsDesktopIconUI);
	});
	return class$;
}

$Class* WindowsDesktopIconUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com