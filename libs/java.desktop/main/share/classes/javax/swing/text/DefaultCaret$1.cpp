#include <javax/swing/text/DefaultCaret$1.h>
#include <javax/swing/text/DefaultCaret.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

namespace javax {
	namespace swing {
		namespace text {

void DefaultCaret$1::init$($DefaultCaret* this$0) {
	$set(this, this$0, this$0);
}

void DefaultCaret$1::run() {
	this->this$0->repaintNewCaret();
}

DefaultCaret$1::DefaultCaret$1() {
}

$Class* DefaultCaret$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/DefaultCaret;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCaret$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/DefaultCaret;)V", nullptr, 0, $method(DefaultCaret$1, init$, void, $DefaultCaret*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultCaret$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.DefaultCaret",
		"changeCaretPosition",
		"(ILjavax/swing/text/Position$Bias;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.DefaultCaret$1", nullptr, nullptr, 0},
		{"javax.swing.text.Position$Bias", "javax.swing.text.Position", "Bias", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.DefaultCaret$1",
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
		"javax.swing.text.DefaultCaret"
	};
	$loadClass(DefaultCaret$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultCaret$1);
	});
	return class$;
}

$Class* DefaultCaret$1::class$ = nullptr;

		} // text
	} // swing
} // javax