#include <javax/swing/JFileChooser$WeakPCL.h>
#include <java/awt/Toolkit.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace javax {
	namespace swing {

bool JFileChooser$WeakPCL::$assertionsDisabled = false;

void JFileChooser$WeakPCL::init$($JFileChooser* jfc) {
	$set(this, jfcRef, $new($WeakReference, jfc));
}

void JFileChooser$WeakPCL::propertyChange($PropertyChangeEvent* ev) {
	$useLocalObjectStack();
	if (!JFileChooser$WeakPCL::$assertionsDisabled && !$$nc($nc(ev)->getPropertyName())->equals("awt.file.showHiddenFiles"_s)) {
		$throwNew($AssertionError);
	}
	$var($JFileChooser, jfc, $cast($JFileChooser, $nc(this->jfcRef)->get()));
	if (jfc == nullptr) {
		$$nc($Toolkit::getDefaultToolkit())->removePropertyChangeListener("awt.file.showHiddenFiles"_s, this);
	} else {
		bool oldValue = jfc->useFileHiding;
		jfc->useFileHiding = !$$sure($Boolean, $nc(ev)->getNewValue())->booleanValue();
		jfc->firePropertyChange("FileHidingChanged"_s, oldValue, jfc->useFileHiding);
	}
}

void JFileChooser$WeakPCL::clinit$($Class* clazz) {
	$load($JFileChooser);
	JFileChooser$WeakPCL::$assertionsDisabled = !$JFileChooser::class$->desiredAssertionStatus();
}

JFileChooser$WeakPCL::JFileChooser$WeakPCL() {
}

$Class* JFileChooser$WeakPCL::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(JFileChooser$WeakPCL, $assertionsDisabled)},
		{"jfcRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljavax/swing/JFileChooser;>;", 0, $field(JFileChooser$WeakPCL, jfcRef)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, $PUBLIC, $method(JFileChooser$WeakPCL, init$, void, $JFileChooser*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(JFileChooser$WeakPCL, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JFileChooser$WeakPCL", "javax.swing.JFileChooser", "WeakPCL", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JFileChooser$WeakPCL",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JFileChooser"
	};
	$loadClass(JFileChooser$WeakPCL, name, initialize, &classInfo$$, JFileChooser$WeakPCL::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JFileChooser$WeakPCL);
	});
	return class$;
}

$Class* JFileChooser$WeakPCL::class$ = nullptr;

	} // swing
} // javax