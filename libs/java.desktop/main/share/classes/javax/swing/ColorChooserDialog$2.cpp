#include <javax/swing/ColorChooserDialog$2.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ColorChooserDialog.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ColorChooserDialog = ::javax::swing::ColorChooserDialog;

namespace javax {
	namespace swing {

void ColorChooserDialog$2::init$($ColorChooserDialog* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void ColorChooserDialog$2::actionPerformed($ActionEvent* e) {
	$$sure($AbstractButton, $nc(e)->getSource())->fireActionPerformed(e);
}

ColorChooserDialog$2::ColorChooserDialog$2() {
}

$Class* ColorChooserDialog$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/ColorChooserDialog;", nullptr, $FINAL | $SYNTHETIC, $field(ColorChooserDialog$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/ColorChooserDialog;)V", nullptr, 0, $method(ColorChooserDialog$2, init$, void, $ColorChooserDialog*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(ColorChooserDialog$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.ColorChooserDialog",
		"initColorChooserDialog",
		"(Ljava/awt/Component;Ljavax/swing/JColorChooser;Ljava/awt/event/ActionListener;Ljava/awt/event/ActionListener;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.ColorChooserDialog$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.ColorChooserDialog$2",
		"javax.swing.AbstractAction",
		nullptr,
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
	$loadClass(ColorChooserDialog$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ColorChooserDialog$2));
	});
	return class$;
}

$Class* ColorChooserDialog$2::class$ = nullptr;

	} // swing
} // javax