#include <javax/swing/ColorChooserDialog$DisposeOnClose.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentAdapter.h>
#include <java/awt/event/ComponentEvent.h>
#include <javax/swing/ColorChooserDialog.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $ComponentAdapter = ::java::awt::event::ComponentAdapter;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

int32_t ColorChooserDialog$DisposeOnClose::hashCode() {
	 return this->$ComponentAdapter::hashCode();
}

bool ColorChooserDialog$DisposeOnClose::equals(Object$* arg0) {
	 return this->$ComponentAdapter::equals(arg0);
}

$Object* ColorChooserDialog$DisposeOnClose::clone() {
	 return this->$ComponentAdapter::clone();
}

$String* ColorChooserDialog$DisposeOnClose::toString() {
	 return this->$ComponentAdapter::toString();
}

void ColorChooserDialog$DisposeOnClose::finalize() {
	this->$ComponentAdapter::finalize();
}

void ColorChooserDialog$DisposeOnClose::init$() {
	$ComponentAdapter::init$();
}

void ColorChooserDialog$DisposeOnClose::componentHidden($ComponentEvent* e) {
	$var($Window, w, $cast($Window, $nc(e)->getComponent()));
	$nc(w)->dispose();
}

ColorChooserDialog$DisposeOnClose::ColorChooserDialog$DisposeOnClose() {
}

$Class* ColorChooserDialog$DisposeOnClose::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(ColorChooserDialog$DisposeOnClose, init$, void)},
		{"componentHidden", "(Ljava/awt/event/ComponentEvent;)V", nullptr, $PUBLIC, $virtualMethod(ColorChooserDialog$DisposeOnClose, componentHidden, void, $ComponentEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ColorChooserDialog$DisposeOnClose", "javax.swing.ColorChooserDialog", "DisposeOnClose", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.ColorChooserDialog$DisposeOnClose",
		"java.awt.event.ComponentAdapter",
		"java.io.Serializable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.ColorChooserDialog"
	};
	$loadClass(ColorChooserDialog$DisposeOnClose, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ColorChooserDialog$DisposeOnClose));
	});
	return class$;
}

$Class* ColorChooserDialog$DisposeOnClose::class$ = nullptr;

	} // swing
} // javax