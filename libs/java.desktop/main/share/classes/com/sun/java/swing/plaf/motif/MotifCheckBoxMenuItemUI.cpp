#include <com/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI.h>
#include <com/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI$ChangeHandler.h>
#include <com/sun/java/swing/plaf/motif/MotifCheckBoxMenuItemUI$MouseInputHandler.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicCheckBoxMenuItemUI.h>
#include <javax/swing/plaf/basic/BasicMenuItemUI.h>
#include <jcpp.h>

using $MotifCheckBoxMenuItemUI$ChangeHandler = ::com::sun::java::swing::plaf::motif::MotifCheckBoxMenuItemUI$ChangeHandler;
using $MotifCheckBoxMenuItemUI$MouseInputHandler = ::com::sun::java::swing::plaf::motif::MotifCheckBoxMenuItemUI$MouseInputHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicCheckBoxMenuItemUI = ::javax::swing::plaf::basic::BasicCheckBoxMenuItemUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifCheckBoxMenuItemUI::init$() {
	$BasicCheckBoxMenuItemUI::init$();
}

$ComponentUI* MotifCheckBoxMenuItemUI::createUI($JComponent* b) {
	$init(MotifCheckBoxMenuItemUI);
	return $new(MotifCheckBoxMenuItemUI);
}

void MotifCheckBoxMenuItemUI::installListeners() {
	$BasicCheckBoxMenuItemUI::installListeners();
	$set(this, changeListener, createChangeListener(this->menuItem));
	$nc(this->menuItem)->addChangeListener(this->changeListener);
}

void MotifCheckBoxMenuItemUI::uninstallListeners() {
	$BasicCheckBoxMenuItemUI::uninstallListeners();
	$nc(this->menuItem)->removeChangeListener(this->changeListener);
}

$ChangeListener* MotifCheckBoxMenuItemUI::createChangeListener($JComponent* c) {
	return $new($MotifCheckBoxMenuItemUI$ChangeHandler, this);
}

$MouseInputListener* MotifCheckBoxMenuItemUI::createMouseInputListener($JComponent* c) {
	return $new($MotifCheckBoxMenuItemUI$MouseInputHandler, this);
}

MotifCheckBoxMenuItemUI::MotifCheckBoxMenuItemUI() {
}

$Class* MotifCheckBoxMenuItemUI::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(MotifCheckBoxMenuItemUI, changeListener)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MotifCheckBoxMenuItemUI, init$, void)},
		{"createChangeListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $virtualMethod(MotifCheckBoxMenuItemUI, createChangeListener, $ChangeListener*, $JComponent*)},
		{"createMouseInputListener", "(Ljavax/swing/JComponent;)Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED, $virtualMethod(MotifCheckBoxMenuItemUI, createMouseInputListener, $MouseInputListener*, $JComponent*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(MotifCheckBoxMenuItemUI, createUI, $ComponentUI*, $JComponent*)},
		{"installListeners", "()V", nullptr, $PROTECTED, $virtualMethod(MotifCheckBoxMenuItemUI, installListeners, void)},
		{"uninstallListeners", "()V", nullptr, $PROTECTED, $virtualMethod(MotifCheckBoxMenuItemUI, uninstallListeners, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$MouseInputHandler", "com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI", "MouseInputHandler", $PROTECTED},
		{"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$ChangeHandler", "com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI", "ChangeHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI",
		"javax.swing.plaf.basic.BasicCheckBoxMenuItemUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$MouseInputHandler,com.sun.java.swing.plaf.motif.MotifCheckBoxMenuItemUI$ChangeHandler"
	};
	$loadClass(MotifCheckBoxMenuItemUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MotifCheckBoxMenuItemUI);
	});
	return class$;
}

$Class* MotifCheckBoxMenuItemUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com