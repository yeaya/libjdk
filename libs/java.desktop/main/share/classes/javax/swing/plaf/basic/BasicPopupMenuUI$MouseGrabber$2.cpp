#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber$2.h>
#include <java/awt/Toolkit.h>
#include <javax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPopupMenuUI$MouseGrabber = ::javax::swing::plaf::basic::BasicPopupMenuUI$MouseGrabber;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicPopupMenuUI$MouseGrabber$2::init$($BasicPopupMenuUI$MouseGrabber* this$0, $Toolkit* val$tk) {
	$set(this, this$0, this$0);
	$set(this, val$tk, val$tk);
}

$Object* BasicPopupMenuUI$MouseGrabber$2::run() {
	$nc(this->val$tk)->removeAWTEventListener(this->this$0);
	return nullptr;
}

BasicPopupMenuUI$MouseGrabber$2::BasicPopupMenuUI$MouseGrabber$2() {
}

$Class* BasicPopupMenuUI$MouseGrabber$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber;", nullptr, $FINAL | $SYNTHETIC, $field(BasicPopupMenuUI$MouseGrabber$2, this$0)},
		{"val$tk", "Ljava/awt/Toolkit;", nullptr, $FINAL | $SYNTHETIC, $field(BasicPopupMenuUI$MouseGrabber$2, val$tk)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicPopupMenuUI$MouseGrabber;Ljava/awt/Toolkit;)V", "()V", 0, $method(BasicPopupMenuUI$MouseGrabber$2, init$, void, $BasicPopupMenuUI$MouseGrabber*, $Toolkit*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(BasicPopupMenuUI$MouseGrabber$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber",
		"ungrabWindow",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber", "javax.swing.plaf.basic.BasicPopupMenuUI", "MouseGrabber", $STATIC},
		{"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicPopupMenuUI$MouseGrabber$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicPopupMenuUI"
	};
	$loadClass(BasicPopupMenuUI$MouseGrabber$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicPopupMenuUI$MouseGrabber$2);
	});
	return class$;
}

$Class* BasicPopupMenuUI$MouseGrabber$2::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax