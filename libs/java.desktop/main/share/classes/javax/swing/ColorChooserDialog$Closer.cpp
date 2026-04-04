#include <javax/swing/ColorChooserDialog$Closer.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ColorChooserDialog.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

using $Window = ::java::awt::Window;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorChooserDialog = ::javax::swing::ColorChooserDialog;

namespace javax {
	namespace swing {

int32_t ColorChooserDialog$Closer::hashCode() {
	 return this->$WindowAdapter::hashCode();
}

bool ColorChooserDialog$Closer::equals(Object$* arg0) {
	 return this->$WindowAdapter::equals(arg0);
}

$Object* ColorChooserDialog$Closer::clone() {
	 return this->$WindowAdapter::clone();
}

$String* ColorChooserDialog$Closer::toString() {
	 return this->$WindowAdapter::toString();
}

void ColorChooserDialog$Closer::finalize() {
	this->$WindowAdapter::finalize();
}

void ColorChooserDialog$Closer::init$($ColorChooserDialog* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void ColorChooserDialog$Closer::windowClosing($WindowEvent* e) {
	$nc(this->this$0->cancelButton)->doClick(0);
	$var($Window, w, $nc(e)->getWindow());
	$nc(w)->hide();
}

ColorChooserDialog$Closer::ColorChooserDialog$Closer() {
}

$Class* ColorChooserDialog$Closer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/ColorChooserDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ColorChooserDialog$Closer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/ColorChooserDialog;)V", nullptr, 0, $method(ColorChooserDialog$Closer, init$, void, $ColorChooserDialog*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(ColorChooserDialog$Closer, windowClosing, void, $WindowEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ColorChooserDialog$Closer", "javax.swing.ColorChooserDialog", "Closer", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.ColorChooserDialog$Closer",
		"java.awt.event.WindowAdapter",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.ColorChooserDialog"
	};
	$loadClass(ColorChooserDialog$Closer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ColorChooserDialog$Closer));
	});
	return class$;
}

$Class* ColorChooserDialog$Closer::class$ = nullptr;

	} // swing
} // javax