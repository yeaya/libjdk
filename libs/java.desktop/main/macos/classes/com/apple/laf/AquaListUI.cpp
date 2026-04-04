#include <com/apple/laf/AquaListUI.h>
#include <apple/laf/JRSUIConstants$Variant.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaComboBoxRenderer.h>
#include <com/apple/laf/AquaListUI$AquaHomeEndAction.h>
#include <com/apple/laf/AquaListUI$AquaPropertyChangeHandler.h>
#include <com/apple/laf/AquaListUI$ComponentPainter.h>
#include <com/apple/laf/AquaListUI$FocusHandler.h>
#include <com/apple/laf/AquaListUI$MouseInputHandler.h>
#include <com/apple/laf/AquaPainter.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/CellRendererPane.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListCellRenderer.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <jcpp.h>

#undef GRADIENT
#undef GRADIENT_LIST_BACKGROUND_EVEN
#undef GRADIENT_LIST_BACKGROUND_ODD
#undef GRADIENT_SIDE_BAR
#undef GRADIENT_SIDE_BAR_FOCUSED_SELECTION
#undef GRADIENT_SIDE_BAR_SELECTION

using $JRSUIConstants$Variant = ::apple::laf::JRSUIConstants$Variant;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaComboBoxRenderer = ::com::apple::laf::AquaComboBoxRenderer;
using $AquaListUI$AquaHomeEndAction = ::com::apple::laf::AquaListUI$AquaHomeEndAction;
using $AquaListUI$AquaPropertyChangeHandler = ::com::apple::laf::AquaListUI$AquaPropertyChangeHandler;
using $AquaListUI$ComponentPainter = ::com::apple::laf::AquaListUI$ComponentPainter;
using $AquaListUI$FocusHandler = ::com::apple::laf::AquaListUI$FocusHandler;
using $AquaListUI$MouseInputHandler = ::com::apple::laf::AquaListUI$MouseInputHandler;
using $Component = ::java::awt::Component;
using $Rectangle = ::java::awt::Rectangle;
using $FocusListener = ::java::awt::event::FocusListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $ListCellRenderer = ::javax::swing::ListCellRenderer;
using $Border = ::javax::swing::border::Border;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;

namespace com {
	namespace apple {
		namespace laf {

void AquaListUI::init$() {
	$BasicListUI::init$();
}

$ComponentUI* AquaListUI::createUI($JComponent* c) {
	$init(AquaListUI);
	return $new(AquaListUI);
}

$FocusListener* AquaListUI::createFocusListener() {
	return $new($AquaListUI$FocusHandler, this);
}

$MouseInputListener* AquaListUI::createMouseInputListener() {
	return $new($AquaListUI$MouseInputHandler, this);
}

void AquaListUI::installKeyboardActions() {
	$useLocalObjectStack();
	$BasicListUI::installKeyboardActions();
	$$nc($nc(this->list)->getActionMap())->put("aquaHome"_s, $$new($AquaListUI$AquaHomeEndAction, true));
	$$nc($nc(this->list)->getActionMap())->put("aquaEnd"_s, $$new($AquaListUI$AquaHomeEndAction, false));
}

$PropertyChangeListener* AquaListUI::createPropertyChangeListener() {
	return $new($AquaListUI$AquaPropertyChangeHandler, this);
}

$JList* AquaListUI::getComponent() {
	return this->list;
}

void AquaListUI::repaintCell(Object$* value, int32_t selectedIndex, bool selected) {
	$useLocalObjectStack();
	$var($Rectangle, rowBounds, getCellBounds(this->list, selectedIndex, selectedIndex));
	if (rowBounds == nullptr) {
		return;
	}
	$var($ListCellRenderer, renderer, $nc(this->list)->getCellRenderer());
	if (renderer == nullptr) {
		return;
	}
	$var($Component, rendererComponent, $nc(renderer)->getListCellRendererComponent(this->list, value, selectedIndex, selected, true));
	if (rendererComponent == nullptr) {
		return;
	}
	$var($AquaComboBoxRenderer, aquaRenderer, $instanceOf($AquaComboBoxRenderer, renderer) ? $cast($AquaComboBoxRenderer, renderer) : ($AquaComboBoxRenderer*)nullptr);
	if (aquaRenderer != nullptr) {
		aquaRenderer->setDrawCheckedItem(false);
	}
	$nc(this->rendererPane)->paintComponent($($$nc($nc(this->list)->getGraphics())->create()), rendererComponent, this->list, $nc(rowBounds)->x, $nc(rowBounds)->y, $nc(rowBounds)->width, $nc(rowBounds)->height, true);
	if (aquaRenderer != nullptr) {
		aquaRenderer->setDrawCheckedItem(true);
	}
}

$Border* AquaListUI::getSourceListBackgroundPainter() {
	$init(AquaListUI);
	$var($AquaBorder, border, $new($AquaListUI$ComponentPainter));
	$init($JRSUIConstants$Widget);
	$nc($nc(border->painter)->state)->set($JRSUIConstants$Widget::GRADIENT);
	$init($JRSUIConstants$Variant);
	$nc(border->painter->state)->set($JRSUIConstants$Variant::GRADIENT_SIDE_BAR);
	return border;
}

$Border* AquaListUI::getSourceListSelectionBackgroundPainter() {
	$init(AquaListUI);
	$var($AquaBorder, border, $new($AquaListUI$ComponentPainter));
	$init($JRSUIConstants$Widget);
	$nc($nc(border->painter)->state)->set($JRSUIConstants$Widget::GRADIENT);
	$init($JRSUIConstants$Variant);
	$nc(border->painter->state)->set($JRSUIConstants$Variant::GRADIENT_SIDE_BAR_SELECTION);
	return border;
}

$Border* AquaListUI::getSourceListFocusedSelectionBackgroundPainter() {
	$init(AquaListUI);
	$var($AquaBorder, border, $new($AquaListUI$ComponentPainter));
	$init($JRSUIConstants$Widget);
	$nc($nc(border->painter)->state)->set($JRSUIConstants$Widget::GRADIENT);
	$init($JRSUIConstants$Variant);
	$nc(border->painter->state)->set($JRSUIConstants$Variant::GRADIENT_SIDE_BAR_FOCUSED_SELECTION);
	return border;
}

$Border* AquaListUI::getListEvenBackgroundPainter() {
	$init(AquaListUI);
	$var($AquaBorder, border, $new($AquaListUI$ComponentPainter));
	$init($JRSUIConstants$Widget);
	$nc($nc(border->painter)->state)->set($JRSUIConstants$Widget::GRADIENT);
	$init($JRSUIConstants$Variant);
	$nc(border->painter->state)->set($JRSUIConstants$Variant::GRADIENT_LIST_BACKGROUND_EVEN);
	return border;
}

$Border* AquaListUI::getListOddBackgroundPainter() {
	$init(AquaListUI);
	$var($AquaBorder, border, $new($AquaListUI$ComponentPainter));
	$init($JRSUIConstants$Widget);
	$nc($nc(border->painter)->state)->set($JRSUIConstants$Widget::GRADIENT);
	$init($JRSUIConstants$Variant);
	$nc(border->painter->state)->set($JRSUIConstants$Variant::GRADIENT_LIST_BACKGROUND_ODD);
	return border;
}

AquaListUI::AquaListUI() {
}

$Class* AquaListUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaListUI, init$, void)},
		{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED, $virtualMethod(AquaListUI, createFocusListener, $FocusListener*)},
		{"createMouseInputListener", "()Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED, $virtualMethod(AquaListUI, createMouseInputListener, $MouseInputListener*)},
		{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $virtualMethod(AquaListUI, createPropertyChangeListener, $PropertyChangeListener*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaListUI, createUI, $ComponentUI*, $JComponent*)},
		{"getComponent", "()Ljavax/swing/JList;", "()Ljavax/swing/JList<Ljava/lang/Object;>;", 0, $virtualMethod(AquaListUI, getComponent, $JList*)},
		{"getListEvenBackgroundPainter", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaListUI, getListEvenBackgroundPainter, $Border*)},
		{"getListOddBackgroundPainter", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaListUI, getListOddBackgroundPainter, $Border*)},
		{"getSourceListBackgroundPainter", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaListUI, getSourceListBackgroundPainter, $Border*)},
		{"getSourceListFocusedSelectionBackgroundPainter", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaListUI, getSourceListFocusedSelectionBackgroundPainter, $Border*)},
		{"getSourceListSelectionBackgroundPainter", "()Ljavax/swing/border/Border;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaListUI, getSourceListSelectionBackgroundPainter, $Border*)},
		{"installKeyboardActions", "()V", nullptr, $PROTECTED, $virtualMethod(AquaListUI, installKeyboardActions, void)},
		{"repaintCell", "(Ljava/lang/Object;IZ)V", nullptr, $PROTECTED, $virtualMethod(AquaListUI, repaintCell, void, Object$*, int32_t, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaListUI$ComponentPainter", "com.apple.laf.AquaListUI", "ComponentPainter", $STATIC},
		{"com.apple.laf.AquaListUI$MouseInputHandler", "com.apple.laf.AquaListUI", "MouseInputHandler", 0},
		{"com.apple.laf.AquaListUI$AquaPropertyChangeHandler", "com.apple.laf.AquaListUI", "AquaPropertyChangeHandler", 0},
		{"com.apple.laf.AquaListUI$FocusHandler", "com.apple.laf.AquaListUI", "FocusHandler", 0},
		{"com.apple.laf.AquaListUI$AquaHomeEndAction", "com.apple.laf.AquaListUI", "AquaHomeEndAction", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaListUI",
		"javax.swing.plaf.basic.BasicListUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaListUI$ComponentPainter,com.apple.laf.AquaListUI$MouseInputHandler,com.apple.laf.AquaListUI$AquaPropertyChangeHandler,com.apple.laf.AquaListUI$FocusHandler,com.apple.laf.AquaListUI$AquaHomeEndAction"
	};
	$loadClass(AquaListUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaListUI);
	});
	return class$;
}

$Class* AquaListUI::class$ = nullptr;

		} // laf
	} // apple
} // com