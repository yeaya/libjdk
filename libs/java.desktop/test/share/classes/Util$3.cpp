#include <Util$3.h>
#include <Util.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JDialog.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDialog = ::javax::swing::JDialog;

void Util$3::init$($JDialog* val$retDialog) {
	$set(this, val$retDialog, val$retDialog);
}

void Util$3::actionPerformed($ActionEvent* ae) {
	$nc(this->val$retDialog)->dispose();
}

Util$3::Util$3() {
}

$Class* Util$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$retDialog", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(Util$3, val$retDialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JDialog;)V", "()V", 0, $method(Util$3, init$, void, $JDialog*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(Util$3, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Util",
		"createModalDialogWithPassFailButtons",
		"(Ljava/lang/String;)Ljavax/swing/JDialog;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Util$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Util$3",
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
		"Util"
	};
	$loadClass(Util$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Util$3);
	});
	return class$;
}

$Class* Util$3::class$ = nullptr;