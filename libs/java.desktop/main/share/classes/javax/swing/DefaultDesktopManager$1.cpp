#include <javax/swing/DefaultDesktopManager$1.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;

namespace javax {
	namespace swing {

void DefaultDesktopManager$1::init$($DefaultDesktopManager* this$0, $JComponent* val$f) {
	$set(this, this$0, this$0);
	$set(this, val$f, val$f);
}

void DefaultDesktopManager$1::run() {
	$nc($cast($JInternalFrame, this->val$f))->isDragging = false;
	int32_t var$0 = this->val$f->getWidth();
	this->val$f->paintImmediately(0, 0, var$0, this->val$f->getHeight());
	$cast($JInternalFrame, this->val$f)->isDragging = true;
}

DefaultDesktopManager$1::DefaultDesktopManager$1() {
}

$Class* DefaultDesktopManager$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/DefaultDesktopManager;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultDesktopManager$1, this$0)},
		{"val$f", "Ljavax/swing/JComponent;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultDesktopManager$1, val$f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/DefaultDesktopManager;Ljavax/swing/JComponent;)V", "()V", 0, $method(DefaultDesktopManager$1, init$, void, $DefaultDesktopManager*, $JComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultDesktopManager$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.DefaultDesktopManager",
		"emergencyCleanup",
		"(Ljavax/swing/JComponent;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.DefaultDesktopManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.DefaultDesktopManager$1",
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
		"javax.swing.DefaultDesktopManager"
	};
	$loadClass(DefaultDesktopManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultDesktopManager$1);
	});
	return class$;
}

$Class* DefaultDesktopManager$1::class$ = nullptr;

	} // swing
} // javax