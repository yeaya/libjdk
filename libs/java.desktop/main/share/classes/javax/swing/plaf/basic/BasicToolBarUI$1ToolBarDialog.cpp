#include <javax/swing/plaf/basic/BasicToolBarUI$1ToolBarDialog.h>
#include <java/awt/Dialog.h>
#include <java/awt/Frame.h>
#include <javax/swing/JDialog.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$1ToolBarDialog$1.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

using $Dialog = ::java::awt::Dialog;
using $Frame = ::java::awt::Frame;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDialog = ::javax::swing::JDialog;
using $JRootPane = ::javax::swing::JRootPane;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$1ToolBarDialog$1 = ::javax::swing::plaf::basic::BasicToolBarUI$1ToolBarDialog$1;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicToolBarUI$1ToolBarDialog::init$($BasicToolBarUI* this$0, $Frame* owner, $String* title, bool modal) {
	$set(this, this$0, this$0);
	$JDialog::init$(owner, title, modal);
}

void BasicToolBarUI$1ToolBarDialog::init$($BasicToolBarUI* this$0, $Dialog* owner, $String* title, bool modal) {
	$set(this, this$0, this$0);
	$JDialog::init$(owner, title, modal);
}

$JRootPane* BasicToolBarUI$1ToolBarDialog::createRootPane() {
	$var($JRootPane, rootPane, $new($BasicToolBarUI$1ToolBarDialog$1, this));
	rootPane->setOpaque(true);
	return rootPane;
}

BasicToolBarUI$1ToolBarDialog::BasicToolBarUI$1ToolBarDialog() {
}

$Class* BasicToolBarUI$1ToolBarDialog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$1ToolBarDialog, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;Ljava/awt/Frame;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(BasicToolBarUI$1ToolBarDialog, init$, void, $BasicToolBarUI*, $Frame*, $String*, bool)},
		{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI;Ljava/awt/Dialog;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(BasicToolBarUI$1ToolBarDialog, init$, void, $BasicToolBarUI*, $Dialog*, $String*, bool)},
		{"createRootPane", "()Ljavax/swing/JRootPane;", nullptr, $PROTECTED, $virtualMethod(BasicToolBarUI$1ToolBarDialog, createRootPane, $JRootPane*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicToolBarUI",
		"createFloatingWindow",
		"(Ljavax/swing/JToolBar;)Ljavax/swing/RootPaneContainer;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog", nullptr, "ToolBarDialog", 0},
		{"javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog",
		"javax.swing.JDialog",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicToolBarUI"
	};
	$loadClass(BasicToolBarUI$1ToolBarDialog, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicToolBarUI$1ToolBarDialog));
	});
	return class$;
}

$Class* BasicToolBarUI$1ToolBarDialog::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax