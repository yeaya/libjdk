#include <javax/swing/RepaintManager$2.h>
#include <java/awt/Component.h>
#include <java/lang/Runnable.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <javax/swing/RepaintManager$2$1.h>
#include <javax/swing/RepaintManager.h>
#include <jdk/internal/access/JavaSecurityAccess.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $RepaintManager = ::javax::swing::RepaintManager;
using $RepaintManager$2$1 = ::javax::swing::RepaintManager$2$1;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace javax {
	namespace swing {

void RepaintManager$2::init$($RepaintManager* this$0, $Component* val$c, $Runnable* val$r) {
	$set(this, this$0, this$0);
	$set(this, val$c, val$c);
	$set(this, val$r, val$r);
}

void RepaintManager$2::run() {
	$useLocalObjectStack();
	$var($AccessControlContext, stack, $AccessController::getContext());
	$var($AccessControlContext, acc, $$nc($AWTAccessor::getComponentAccessor())->getAccessControlContext(this->val$c));
	$init($RepaintManager);
	$nc($RepaintManager::javaSecurityAccess)->doIntersectionPrivilege($$new($RepaintManager$2$1, this), stack, acc);
}

RepaintManager$2::RepaintManager$2() {
}

$Class* RepaintManager$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/RepaintManager;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$2, this$0)},
		{"val$r", "Ljava/lang/Runnable;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$2, val$r)},
		{"val$c", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$2, val$c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/RepaintManager;Ljava/awt/Component;Ljava/lang/Runnable;)V", "()V", 0, $method(RepaintManager$2, init$, void, $RepaintManager*, $Component*, $Runnable*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RepaintManager$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.RepaintManager",
		"nativeQueueSurfaceDataRunnable",
		"(Lsun/awt/AppContext;Ljava/awt/Component;Ljava/lang/Runnable;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RepaintManager$2", nullptr, nullptr, 0},
		{"javax.swing.RepaintManager$2$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.RepaintManager$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.RepaintManager"
	};
	$loadClass(RepaintManager$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepaintManager$2);
	});
	return class$;
}

$Class* RepaintManager$2::class$ = nullptr;

	} // swing
} // javax