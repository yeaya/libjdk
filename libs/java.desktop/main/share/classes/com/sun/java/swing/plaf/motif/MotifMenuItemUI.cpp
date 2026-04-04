#include <com/sun/java/swing/plaf/motif/MotifMenuItemUI.h>
#include <com/sun/java/swing/plaf/motif/MotifMenuItemUI$ChangeHandler.h>
#include <com/sun/java/swing/plaf/motif/MotifMenuItemUI$MouseInputHandler.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <jcpp.h>

using $MotifMenuItemUI$ChangeHandler = ::com::sun::java::swing::plaf::motif::MotifMenuItemUI$ChangeHandler;
using $MotifMenuItemUI$MouseInputHandler = ::com::sun::java::swing::plaf::motif::MotifMenuItemUI$MouseInputHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicMenuItemUI = ::javax::swing::plaf::basic::BasicMenuItemUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifMenuItemUI::init$() {
	$BasicMenuItemUI::init$();
}

$ComponentUI* MotifMenuItemUI::createUI($JComponent* c) {
	$init(MotifMenuItemUI);
	return $new(MotifMenuItemUI);
}

void MotifMenuItemUI::installListeners() {
	$BasicMenuItemUI::installListeners();
	$set(this, changeListener, createChangeListener(this->menuItem));
	$nc(this->menuItem)->addChangeListener(this->changeListener);
}

void MotifMenuItemUI::uninstallListeners() {
	$BasicMenuItemUI::uninstallListeners();
	$nc(this->menuItem)->removeChangeListener(this->changeListener);
}

$ChangeListener* MotifMenuItemUI::createChangeListener($JComponent* c) {
	return $new($MotifMenuItemUI$ChangeHandler, this);
}

$MouseInputListener* MotifMenuItemUI::createMouseInputListener($JComponent* c) {
	return $new($MotifMenuItemUI$MouseInputHandler, this);
}

MotifMenuItemUI::MotifMenuItemUI() {
}

$Class* MotifMenuItemUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(MotifMenuItemUI, changeListener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifMenuItemUI, init$, void)},
		{"createChangeListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $virtualMethod(MotifMenuItemUI, createChangeListener, $ChangeListener*, $JComponent*)},
		{"createMouseInputListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED, $virtualMethod(MotifMenuItemUI, createMouseInputListener, $MouseInputListener*, $JComponent*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifMenuItemUI, createUI, $ComponentUI*, $JComponent*)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(MotifMenuItemUI, installListeners, void)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(MotifMenuItemUI, uninstallListeners, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifMenuItemUI$MouseInputHandler", "com.sun.java.swing.plaf.motif.MotifMenuItemUI", "MouseInputHandler", $PROTECTED},
		{"com.sun.java.swing.plaf.motif.MotifMenuItemUI$ChangeHandler", "com.sun.java.swing.plaf.motif.MotifMenuItemUI", "ChangeHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifMenuItemUI",
		"javax.swing.plaf.basic.BasicMenuItemUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifMenuItemUI$MouseInputHandler,com.sun.java.swing.plaf.motif.MotifMenuItemUI$ChangeHandler"
	};
	$loadClass(MotifMenuItemUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifMenuItemUI);
	});
	return class$;
}

$Class* MotifMenuItemUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com