#include <com/apple/laf/AquaTableUI.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaTableUI$1.h>
#include <com/apple/laf/AquaTableUI$FocusHandler.h>
#include <com/apple/laf/AquaTableUI$MouseInputHandler.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusListener.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <jcpp.h>

using $AquaTableUI$1 = ::com::apple::laf::AquaTableUI$1;
using $AquaTableUI$FocusHandler = ::com::apple::laf::AquaTableUI$FocusHandler;
using $AquaTableUI$MouseInputHandler = ::com::apple::laf::AquaTableUI$MouseInputHandler;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicTableUI = ::javax::swing::plaf::basic::BasicTableUI;

namespace com {
	namespace apple {
		namespace laf {

void AquaTableUI::init$() {
	$BasicTableUI::init$();
	$set(this, focusHandler, $new($AquaTableUI$1, this));
}

$ComponentUI* AquaTableUI::createUI($JComponent* c) {
	$init(AquaTableUI);
	return $new(AquaTableUI);
}

$FocusListener* AquaTableUI::createFocusListener() {
	return $new($AquaTableUI$FocusHandler, this);
}

$MouseInputListener* AquaTableUI::createMouseInputListener() {
	return $new($AquaTableUI$MouseInputHandler, this);
}

void AquaTableUI::installListeners() {
	$BasicTableUI::installListeners();
	$nc(this->table)->addFocusListener(this->focusHandler);
	$nc(this->table)->addPropertyChangeListener(this->focusHandler);
}

void AquaTableUI::uninstallListeners() {
	$nc(this->table)->removePropertyChangeListener(this->focusHandler);
	$nc(this->table)->removeFocusListener(this->focusHandler);
	$BasicTableUI::uninstallListeners();
}

$JTable* AquaTableUI::getComponent() {
	return this->table;
}

AquaTableUI::AquaTableUI() {
}

$Class* AquaTableUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"focusHandler", "Lcom/apple/laf/AquaFocusHandler;", nullptr, $PROTECTED, $field(AquaTableUI, focusHandler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AquaTableUI, init$, void)},
		{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED, $virtualMethod(AquaTableUI, createFocusListener, $FocusListener*)},
		{"createMouseInputListener", "()Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED, $virtualMethod(AquaTableUI, createMouseInputListener, $MouseInputListener*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(AquaTableUI, createUI, $ComponentUI*, $JComponent*)},
		{"getComponent", "()Ljavax/swing/JTable;", nullptr, 0, $virtualMethod(AquaTableUI, getComponent, $JTable*)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTableUI, installListeners, void)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(AquaTableUI, uninstallListeners, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaTableUI$MouseInputHandler", "com.apple.laf.AquaTableUI", "MouseInputHandler", $PUBLIC},
		{"com.apple.laf.AquaTableUI$FocusHandler", "com.apple.laf.AquaTableUI", "FocusHandler", $PUBLIC},
		{"com.apple.laf.AquaTableUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.apple.laf.AquaTableUI",
		"javax.swing.plaf.basic.BasicTableUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.laf.AquaTableUI$MouseInputHandler,com.apple.laf.AquaTableUI$FocusHandler,com.apple.laf.AquaTableUI$1"
	};
	$loadClass(AquaTableUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaTableUI);
	});
	return class$;
}

$Class* AquaTableUI::class$ = nullptr;

		} // laf
	} // apple
} // com