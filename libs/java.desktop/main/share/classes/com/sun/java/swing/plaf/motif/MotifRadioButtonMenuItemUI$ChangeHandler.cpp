#include <com/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI$ChangeHandler.h>
#include <com/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $MotifRadioButtonMenuItemUI = ::com::sun::java::swing::plaf::motif::MotifRadioButtonMenuItemUI;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

int32_t MotifRadioButtonMenuItemUI$ChangeHandler::hashCode() {
	 return this->$ChangeListener::hashCode();
}

bool MotifRadioButtonMenuItemUI$ChangeHandler::equals(Object$* arg0) {
	 return this->$ChangeListener::equals(arg0);
}

$Object* MotifRadioButtonMenuItemUI$ChangeHandler::clone() {
	 return this->$ChangeListener::clone();
}

$String* MotifRadioButtonMenuItemUI$ChangeHandler::toString() {
	 return this->$ChangeListener::toString();
}

void MotifRadioButtonMenuItemUI$ChangeHandler::finalize() {
	this->$ChangeListener::finalize();
}

void MotifRadioButtonMenuItemUI$ChangeHandler::init$($MotifRadioButtonMenuItemUI* this$0) {
	$set(this, this$0, this$0);
}

void MotifRadioButtonMenuItemUI$ChangeHandler::stateChanged($ChangeEvent* e) {
	$useLocalObjectStack();
	$var($JMenuItem, c, $cast($JMenuItem, $nc(e)->getSource()));
	$LookAndFeel::installProperty(c, "borderPainted"_s, $($Boolean::valueOf($nc(c)->isArmed())));
}

MotifRadioButtonMenuItemUI$ChangeHandler::MotifRadioButtonMenuItemUI$ChangeHandler() {
}

$Class* MotifRadioButtonMenuItemUI$ChangeHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifRadioButtonMenuItemUI$ChangeHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifRadioButtonMenuItemUI;)V", nullptr, $PROTECTED, $method(MotifRadioButtonMenuItemUI$ChangeHandler, init$, void, $MotifRadioButtonMenuItemUI*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(MotifRadioButtonMenuItemUI$ChangeHandler, stateChanged, void, $ChangeEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI$ChangeHandler", "com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI", "ChangeHandler", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI$ChangeHandler",
		"java.lang.Object",
		"javax.swing.event.ChangeListener,java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifRadioButtonMenuItemUI"
	};
	$loadClass(MotifRadioButtonMenuItemUI$ChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifRadioButtonMenuItemUI$ChangeHandler));
	});
	return class$;
}

$Class* MotifRadioButtonMenuItemUI$ChangeHandler::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com