#include <javax/swing/plaf/basic/BasicDirectoryModel$1.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicDirectoryModel$1::init$($BasicDirectoryModel* this$0, bool val$busy) {
	$set(this, this$0, this$0);
	this->val$busy = val$busy;
}

void BasicDirectoryModel$1::run() {
	$useLocalObjectStack();
	$var($String, var$0, "busy"_s);
	$var($Object, var$1, $Boolean::valueOf(!this->val$busy));
	this->this$0->firePropertyChange(var$0, var$1, $($Boolean::valueOf(this->val$busy)));
}

BasicDirectoryModel$1::BasicDirectoryModel$1() {
}

$Class* BasicDirectoryModel$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicDirectoryModel;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDirectoryModel$1, this$0)},
		{"val$busy", "Z", nullptr, $FINAL | $SYNTHETIC, $field(BasicDirectoryModel$1, val$busy)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicDirectoryModel;Z)V", "()V", 0, $method(BasicDirectoryModel$1, init$, void, $BasicDirectoryModel*, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BasicDirectoryModel$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicDirectoryModel",
		"setBusy",
		"(ZI)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicDirectoryModel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicDirectoryModel$1",
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
		"javax.swing.plaf.basic.BasicDirectoryModel"
	};
	$loadClass(BasicDirectoryModel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicDirectoryModel$1);
	});
	return class$;
}

$Class* BasicDirectoryModel$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax