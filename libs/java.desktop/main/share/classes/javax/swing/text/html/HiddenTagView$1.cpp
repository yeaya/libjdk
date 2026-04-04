#include <javax/swing/text/html/HiddenTagView$1.h>
#include <javax/swing/text/html/HiddenTagView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HiddenTagView = ::javax::swing::text::html::HiddenTagView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HiddenTagView$1::init$($HiddenTagView* this$0) {
	$set(this, this$0, this$0);
}

void HiddenTagView$1::run() {
	this->this$0->_setTextFromModel();
}

HiddenTagView$1::HiddenTagView$1() {
}

$Class* HiddenTagView$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/HiddenTagView;", nullptr, $FINAL | $SYNTHETIC, $field(HiddenTagView$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/HiddenTagView;)V", nullptr, 0, $method(HiddenTagView$1, init$, void, $HiddenTagView*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HiddenTagView$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.html.HiddenTagView",
		"setTextFromModel",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HiddenTagView$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HiddenTagView$1",
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
		"javax.swing.text.html.HiddenTagView"
	};
	$loadClass(HiddenTagView$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HiddenTagView$1);
	});
	return class$;
}

$Class* HiddenTagView$1::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax