#include <javax/swing/plaf/basic/BasicTreeUI$Actions$1.h>
#include <javax/swing/plaf/basic/BasicTreeUI$Actions.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $BasicTreeUI$Actions = ::javax::swing::plaf::basic::BasicTreeUI$Actions;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTreeUI$Actions$1::init$($BasicTreeUI$Actions* this$0, $BasicTreeUI* val$ui, int32_t val$rowCount) {
	$set(this, this$0, this$0);
	$set(this, val$ui, val$ui);
	this->val$rowCount = val$rowCount;
}

void BasicTreeUI$Actions$1::run() {
	$nc(this->val$ui)->ensureRowsAreVisible(this->val$rowCount - 1, this->val$rowCount - 1);
}

BasicTreeUI$Actions$1::BasicTreeUI$Actions$1() {
}

$Class* BasicTreeUI$Actions$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI$Actions;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$Actions$1, this$0)},
		{"val$rowCount", "I", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$Actions$1, val$rowCount)},
		{"val$ui", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$Actions$1, val$ui)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI$Actions;Ljavax/swing/plaf/basic/BasicTreeUI;I)V", "()V", 0, $method(BasicTreeUI$Actions$1, init$, void, $BasicTreeUI$Actions*, $BasicTreeUI*, int32_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BasicTreeUI$Actions$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicTreeUI$Actions",
		"home",
		"(Ljavax/swing/JTree;Ljavax/swing/plaf/basic/BasicTreeUI;IZZ)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTreeUI$Actions", "javax.swing.plaf.basic.BasicTreeUI", "Actions", $PRIVATE | $STATIC},
		{"javax.swing.plaf.basic.BasicTreeUI$Actions$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicTreeUI$Actions$1",
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
		"javax.swing.plaf.basic.BasicTreeUI"
	};
	$loadClass(BasicTreeUI$Actions$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicTreeUI$Actions$1);
	});
	return class$;
}

$Class* BasicTreeUI$Actions$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax