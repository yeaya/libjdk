#include <javax/swing/text/html/HiddenTagView$2.h>
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

void HiddenTagView$2::init$($HiddenTagView* this$0) {
	$set(this, this$0, this$0);
}

void HiddenTagView$2::run() {
	this->this$0->_updateModelFromText();
}

HiddenTagView$2::HiddenTagView$2() {
}

$Class* HiddenTagView$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/HiddenTagView;", nullptr, $FINAL | $SYNTHETIC, $field(HiddenTagView$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/HiddenTagView;)V", nullptr, 0, $method(HiddenTagView$2, init$, void, $HiddenTagView*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HiddenTagView$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.html.HiddenTagView",
		"updateModelFromText",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HiddenTagView$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HiddenTagView$2",
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
	$loadClass(HiddenTagView$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HiddenTagView$2);
	});
	return class$;
}

$Class* HiddenTagView$2::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax