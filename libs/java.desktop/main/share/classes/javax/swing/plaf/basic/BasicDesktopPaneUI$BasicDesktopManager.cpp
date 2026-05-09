#include <javax/swing/plaf/basic/BasicDesktopPaneUI$BasicDesktopManager.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/plaf/basic/BasicDesktopPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $BasicDesktopPaneUI = ::javax::swing::plaf::basic::BasicDesktopPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

int32_t BasicDesktopPaneUI$BasicDesktopManager::hashCode() {
	return this->$DefaultDesktopManager::hashCode();
}

bool BasicDesktopPaneUI$BasicDesktopManager::equals(Object$* arg0) {
	return this->$DefaultDesktopManager::equals(arg0);
}

$Object* BasicDesktopPaneUI$BasicDesktopManager::clone() {
	return this->$DefaultDesktopManager::clone();
}

$String* BasicDesktopPaneUI$BasicDesktopManager::toString() {
	return this->$DefaultDesktopManager::toString();
}

void BasicDesktopPaneUI$BasicDesktopManager::finalize() {
	this->$DefaultDesktopManager::finalize();
}

void BasicDesktopPaneUI$BasicDesktopManager::init$($BasicDesktopPaneUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultDesktopManager::init$();
}

BasicDesktopPaneUI$BasicDesktopManager::BasicDesktopPaneUI$BasicDesktopManager() {
}

$Class* BasicDesktopPaneUI$BasicDesktopManager::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicDesktopPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDesktopPaneUI$BasicDesktopManager, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/plaf/basic/BasicDesktopPaneUI;)V", nullptr, $PRIVATE, $method(BasicDesktopPaneUI$BasicDesktopManager, init$, void, $BasicDesktopPaneUI*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicDesktopPaneUI$BasicDesktopManager", "javax.swing.plaf.basic.BasicDesktopPaneUI", "BasicDesktopManager", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicDesktopPaneUI$BasicDesktopManager",
		"javax.swing.DefaultDesktopManager",
		"javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicDesktopPaneUI"
	};
	$loadClass(BasicDesktopPaneUI$BasicDesktopManager, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicDesktopPaneUI$BasicDesktopManager));
	});
	return class$;
}

$Class* BasicDesktopPaneUI$BasicDesktopManager::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax