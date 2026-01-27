#include <javax/swing/plaf/metal/MetalScrollPaneUI.h>

#include <java/awt/Component.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollPaneUI.h>
#include <javax/swing/plaf/basic/BasicScrollPaneUI.h>
#include <javax/swing/plaf/metal/MetalBorders$ScrollPaneBorder.h>
#include <javax/swing/plaf/metal/MetalScrollBarUI.h>
#include <javax/swing/plaf/metal/MetalScrollPaneUI$1.h>
#include <jcpp.h>

#undef FALSE
#undef FREE_STANDING_PROP
#undef TRUE

using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $JScrollPane = ::javax::swing::JScrollPane;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollPaneUI = ::javax::swing::plaf::ScrollPaneUI;
using $BasicScrollPaneUI = ::javax::swing::plaf::basic::BasicScrollPaneUI;
using $MetalBorders$ScrollPaneBorder = ::javax::swing::plaf::metal::MetalBorders$ScrollPaneBorder;
using $MetalScrollBarUI = ::javax::swing::plaf::metal::MetalScrollBarUI;
using $MetalScrollPaneUI$1 = ::javax::swing::plaf::metal::MetalScrollPaneUI$1;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$CompoundAttribute _MetalScrollPaneUI_MethodAnnotations_uninstallListeners6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _MetalScrollPaneUI_FieldInfo_[] = {
	{"scrollBarSwapListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PRIVATE, $field(MetalScrollPaneUI, scrollBarSwapListener)},
	{}
};

$MethodInfo _MetalScrollPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MetalScrollPaneUI, init$, void)},
	{"createScrollBarSwapListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $virtualMethod(MetalScrollPaneUI, createScrollBarSwapListener, $PropertyChangeListener*)},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MetalScrollPaneUI, createUI, $ComponentUI*, $JComponent*)},
	{"installListeners", "(Ljavax/swing/JScrollPane;)V", nullptr, $PUBLIC, $virtualMethod(MetalScrollPaneUI, installListeners, void, $JScrollPane*)},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MetalScrollPaneUI, installUI, void, $JComponent*)},
	{"uninstallListeners", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED, $virtualMethod(MetalScrollPaneUI, uninstallListeners, void, $JComponent*)},
	{"uninstallListeners", "(Ljavax/swing/JScrollPane;)V", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(MetalScrollPaneUI, uninstallListeners, void, $JScrollPane*), nullptr, nullptr, _MetalScrollPaneUI_MethodAnnotations_uninstallListeners6},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(MetalScrollPaneUI, uninstallUI, void, $JComponent*)},
	{"updateScrollbarsFreeStanding", "()V", nullptr, $PRIVATE, $method(MetalScrollPaneUI, updateScrollbarsFreeStanding, void)},
	{}
};

$InnerClassInfo _MetalScrollPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalScrollPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalScrollPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalScrollPaneUI",
	"javax.swing.plaf.basic.BasicScrollPaneUI",
	nullptr,
	_MetalScrollPaneUI_FieldInfo_,
	_MetalScrollPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_MetalScrollPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalScrollPaneUI$1"
};

$Object* allocate$MetalScrollPaneUI($Class* clazz) {
	return $of($alloc(MetalScrollPaneUI));
}

void MetalScrollPaneUI::init$() {
	$BasicScrollPaneUI::init$();
}

$ComponentUI* MetalScrollPaneUI::createUI($JComponent* x) {
	$init(MetalScrollPaneUI);
	return $new(MetalScrollPaneUI);
}

void MetalScrollPaneUI::installUI($JComponent* c) {
	$BasicScrollPaneUI::installUI(c);
	$var($JScrollPane, sp, $cast($JScrollPane, c));
	updateScrollbarsFreeStanding();
}

void MetalScrollPaneUI::uninstallUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$BasicScrollPaneUI::uninstallUI(c);
	$var($JScrollPane, sp, $cast($JScrollPane, c));
	$var($JScrollBar, hsb, $nc(sp)->getHorizontalScrollBar());
	$var($JScrollBar, vsb, sp->getVerticalScrollBar());
	if (hsb != nullptr) {
		$init($MetalScrollBarUI);
		hsb->putClientProperty($MetalScrollBarUI::FREE_STANDING_PROP, nullptr);
	}
	if (vsb != nullptr) {
		$init($MetalScrollBarUI);
		vsb->putClientProperty($MetalScrollBarUI::FREE_STANDING_PROP, nullptr);
	}
}

void MetalScrollPaneUI::installListeners($JScrollPane* scrollPane) {
	$BasicScrollPaneUI::installListeners(scrollPane);
	$set(this, scrollBarSwapListener, createScrollBarSwapListener());
	$nc(scrollPane)->addPropertyChangeListener(this->scrollBarSwapListener);
}

void MetalScrollPaneUI::uninstallListeners($JComponent* c) {
	$BasicScrollPaneUI::uninstallListeners(c);
	$nc(c)->removePropertyChangeListener(this->scrollBarSwapListener);
}

void MetalScrollPaneUI::uninstallListeners($JScrollPane* scrollPane) {
	$BasicScrollPaneUI::uninstallListeners(scrollPane);
	$nc(scrollPane)->removePropertyChangeListener(this->scrollBarSwapListener);
}

void MetalScrollPaneUI::updateScrollbarsFreeStanding() {
	$useLocalCurrentObjectStackCache();
	if (this->scrollpane == nullptr) {
		return;
	}
	$var($Border, border, $nc(this->scrollpane)->getBorder());
	$var($Object, value, nullptr);
	if ($instanceOf($MetalBorders$ScrollPaneBorder, border)) {
		$init($Boolean);
		$assign(value, $Boolean::FALSE);
	} else {
		$init($Boolean);
		$assign(value, $Boolean::TRUE);
	}
	$var($JScrollBar, sb, $nc(this->scrollpane)->getHorizontalScrollBar());
	if (sb != nullptr) {
		$init($MetalScrollBarUI);
		sb->putClientProperty($MetalScrollBarUI::FREE_STANDING_PROP, value);
	}
	$assign(sb, $nc(this->scrollpane)->getVerticalScrollBar());
	if (sb != nullptr) {
		$init($MetalScrollBarUI);
		sb->putClientProperty($MetalScrollBarUI::FREE_STANDING_PROP, value);
	}
}

$PropertyChangeListener* MetalScrollPaneUI::createScrollBarSwapListener() {
	return $new($MetalScrollPaneUI$1, this);
}

MetalScrollPaneUI::MetalScrollPaneUI() {
}

$Class* MetalScrollPaneUI::load$($String* name, bool initialize) {
	$loadClass(MetalScrollPaneUI, name, initialize, &_MetalScrollPaneUI_ClassInfo_, allocate$MetalScrollPaneUI);
	return class$;
}

$Class* MetalScrollPaneUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax