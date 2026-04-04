#include <javax/swing/JLayer$LayerEventController$1.h>
#include <java/awt/Toolkit.h>
#include <javax/swing/JLayer$LayerEventController.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLayer$LayerEventController = ::javax::swing::JLayer$LayerEventController;

namespace javax {
	namespace swing {

void JLayer$LayerEventController$1::init$($JLayer$LayerEventController* this$0, int64_t val$eventMask) {
	$set(this, this$0, this$0);
	this->val$eventMask = val$eventMask;
}

$Object* JLayer$LayerEventController$1::run() {
	$$nc($Toolkit::getDefaultToolkit())->addAWTEventListener(this->this$0, this->val$eventMask);
	return nullptr;
}

JLayer$LayerEventController$1::JLayer$LayerEventController$1() {
}

$Class* JLayer$LayerEventController$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JLayer$LayerEventController;", nullptr, $FINAL | $SYNTHETIC, $field(JLayer$LayerEventController$1, this$0)},
		{"val$eventMask", "J", nullptr, $FINAL | $SYNTHETIC, $field(JLayer$LayerEventController$1, val$eventMask)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JLayer$LayerEventController;J)V", "()V", 0, $method(JLayer$LayerEventController$1, init$, void, $JLayer$LayerEventController*, int64_t)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(JLayer$LayerEventController$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JLayer$LayerEventController",
		"addAWTEventListener",
		"(J)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JLayer$LayerEventController", "javax.swing.JLayer", "LayerEventController", $PRIVATE | $STATIC},
		{"javax.swing.JLayer$LayerEventController$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JLayer$LayerEventController$1",
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
		"javax.swing.JLayer"
	};
	$loadClass(JLayer$LayerEventController$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JLayer$LayerEventController$1);
	});
	return class$;
}

$Class* JLayer$LayerEventController$1::class$ = nullptr;

	} // swing
} // javax