#include <Util$4.h>
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
using $RuntimeException = ::java::lang::RuntimeException;
using $JDialog = ::javax::swing::JDialog;

void Util$4::init$($JDialog* val$retDialog, $String* val$failString) {
	$set(this, val$retDialog, val$retDialog);
	$set(this, val$failString, val$failString);
}

void Util$4::actionPerformed($ActionEvent* ae) {
	$nc(this->val$retDialog)->dispose();
	$throwNew($RuntimeException, $$str({"Test failed. "_s, this->val$failString}));
}

Util$4::Util$4() {
}

$Class* Util$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$failString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Util$4, val$failString)},
		{"val$retDialog", "Ljavax/swing/JDialog;", nullptr, $FINAL | $SYNTHETIC, $field(Util$4, val$retDialog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JDialog;Ljava/lang/String;)V", "()V", 0, $method(Util$4, init$, void, $JDialog*, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(Util$4, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Util",
		"createModalDialogWithPassFailButtons",
		"(Ljava/lang/String;)Ljavax/swing/JDialog;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Util$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Util$4",
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
	$loadClass(Util$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Util$4);
	});
	return class$;
}

$Class* Util$4::class$ = nullptr;