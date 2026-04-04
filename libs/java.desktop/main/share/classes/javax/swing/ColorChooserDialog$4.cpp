#include <javax/swing/ColorChooserDialog$4.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/ColorChooserDialog.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ColorChooserDialog = ::javax::swing::ColorChooserDialog;

namespace javax {
	namespace swing {

void ColorChooserDialog$4::init$($ColorChooserDialog* this$0) {
	$set(this, this$0, this$0);
}

void ColorChooserDialog$4::actionPerformed($ActionEvent* e) {
	this->this$0->reset();
}

ColorChooserDialog$4::ColorChooserDialog$4() {
}

$Class* ColorChooserDialog$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/ColorChooserDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ColorChooserDialog$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/ColorChooserDialog;)V", nullptr, 0, $method(ColorChooserDialog$4, init$, void, $ColorChooserDialog*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ColorChooserDialog$4, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.ColorChooserDialog",
		"initColorChooserDialog",
		"(Ljava/awt/Component;Ljavax/swing/JColorChooser;Ljava/awt/event/ActionListener;Ljava/awt/event/ActionListener;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ColorChooserDialog$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.ColorChooserDialog$4",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.ColorChooserDialog"
	};
	$loadClass(ColorChooserDialog$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ColorChooserDialog$4);
	});
	return class$;
}

$Class* ColorChooserDialog$4::class$ = nullptr;

	} // swing
} // javax