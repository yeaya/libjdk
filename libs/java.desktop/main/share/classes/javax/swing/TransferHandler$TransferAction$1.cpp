#include <javax/swing/TransferHandler$TransferAction$1.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/TransferHandler$TransferAction.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler$TransferAction = ::javax::swing::TransferHandler$TransferAction;

namespace javax {
	namespace swing {

void TransferHandler$TransferAction$1::init$($TransferHandler$TransferAction* this$0, $ActionEvent* val$e) {
	$set(this, this$0, this$0);
	$set(this, val$e, val$e);
}

$Object* TransferHandler$TransferAction$1::run() {
	this->this$0->actionPerformedImpl(this->val$e);
	return nullptr;
}

TransferHandler$TransferAction$1::TransferHandler$TransferAction$1() {
}

$Class* TransferHandler$TransferAction$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/TransferHandler$TransferAction;", nullptr, $FINAL | $SYNTHETIC, $field(TransferHandler$TransferAction$1, this$0)},
		{"val$e", "Ljava/awt/event/ActionEvent;", nullptr, $FINAL | $SYNTHETIC, $field(TransferHandler$TransferAction$1, val$e)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/TransferHandler$TransferAction;Ljava/awt/event/ActionEvent;)V", "()V", 0, $method(TransferHandler$TransferAction$1, init$, void, $TransferHandler$TransferAction*, $ActionEvent*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(TransferHandler$TransferAction$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.TransferHandler$TransferAction",
		"actionPerformed",
		"(Ljava/awt/event/ActionEvent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.TransferHandler$TransferAction", "javax.swing.TransferHandler", "TransferAction", $STATIC},
		{"javax.swing.TransferHandler$TransferAction$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.TransferHandler$TransferAction$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.TransferHandler"
	};
	$loadClass(TransferHandler$TransferAction$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TransferHandler$TransferAction$1);
	});
	return class$;
}

$Class* TransferHandler$TransferAction$1::class$ = nullptr;

	} // swing
} // javax