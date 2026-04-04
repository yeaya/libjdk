#include <javax/swing/JLayer$LayerEventController$2.h>
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

void JLayer$LayerEventController$2::init$($JLayer$LayerEventController* this$0) {
	$set(this, this$0, this$0);
}

$Object* JLayer$LayerEventController$2::run() {
	$$nc($Toolkit::getDefaultToolkit())->removeAWTEventListener(this->this$0);
	return nullptr;
}

JLayer$LayerEventController$2::JLayer$LayerEventController$2() {
}

$Class* JLayer$LayerEventController$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/JLayer$LayerEventController;", nullptr, $FINAL | $SYNTHETIC, $field(JLayer$LayerEventController$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JLayer$LayerEventController;)V", nullptr, 0, $method(JLayer$LayerEventController$2, init$, void, $JLayer$LayerEventController*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(JLayer$LayerEventController$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.JLayer$LayerEventController",
		"removeAWTEventListener",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JLayer$LayerEventController", "javax.swing.JLayer", "LayerEventController", $PRIVATE | $STATIC},
		{"javax.swing.JLayer$LayerEventController$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JLayer$LayerEventController$2",
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
	$loadClass(JLayer$LayerEventController$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JLayer$LayerEventController$2);
	});
	return class$;
}

$Class* JLayer$LayerEventController$2::class$ = nullptr;

	} // swing
} // javax