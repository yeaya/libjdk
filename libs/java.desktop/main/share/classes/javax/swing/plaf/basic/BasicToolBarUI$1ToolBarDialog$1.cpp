#include <javax/swing/plaf/basic/BasicToolBarUI$1ToolBarDialog$1.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$1ToolBarDialog.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JRootPane = ::javax::swing::JRootPane;
using $BasicToolBarUI$1ToolBarDialog = ::javax::swing::plaf::basic::BasicToolBarUI$1ToolBarDialog;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicToolBarUI$1ToolBarDialog$1::init$($BasicToolBarUI$1ToolBarDialog* this$1) {
	$set(this, this$1, this$1);
	$JRootPane::init$();
	this->packing = false;
}

void BasicToolBarUI$1ToolBarDialog$1::validate() {
	$JRootPane::validate();
	if (!this->packing) {
		this->packing = true;
		this->this$1->pack();
		this->packing = false;
	}
}

BasicToolBarUI$1ToolBarDialog$1::BasicToolBarUI$1ToolBarDialog$1() {
}

$Class* BasicToolBarUI$1ToolBarDialog$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/plaf/basic/BasicToolBarUI$1ToolBarDialog;", nullptr, $FINAL | $SYNTHETIC, $field(BasicToolBarUI$1ToolBarDialog$1, this$1)},
		{"packing", "Z", nullptr, $PRIVATE, $field(BasicToolBarUI$1ToolBarDialog$1, packing)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicToolBarUI$1ToolBarDialog;)V", nullptr, 0, $method(BasicToolBarUI$1ToolBarDialog$1, init$, void, $BasicToolBarUI$1ToolBarDialog*)},
		{"validate", "()V", nullptr, $PUBLIC, $virtualMethod(BasicToolBarUI$1ToolBarDialog$1, validate, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog",
		"createRootPane",
		"()Ljavax/swing/JRootPane;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog", nullptr, "ToolBarDialog", 0},
		{"javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicToolBarUI$1ToolBarDialog$1",
		"javax.swing.JRootPane",
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
	$loadClass(BasicToolBarUI$1ToolBarDialog$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicToolBarUI$1ToolBarDialog$1));
	});
	return class$;
}

$Class* BasicToolBarUI$1ToolBarDialog$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax