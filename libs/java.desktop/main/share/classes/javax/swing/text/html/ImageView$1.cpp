#include <javax/swing/text/html/ImageView$1.h>
#include <javax/swing/text/html/ImageView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageView = ::javax::swing::text::html::ImageView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void ImageView$1::init$($ImageView* this$0) {
	$set(this, this$0, this$0);
}

void ImageView$1::run() {
	this->this$0->safePreferenceChanged();
}

ImageView$1::ImageView$1() {
}

$Class* ImageView$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/ImageView;", nullptr, $FINAL | $SYNTHETIC, $field(ImageView$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/ImageView;)V", nullptr, 0, $method(ImageView$1, init$, void, $ImageView*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ImageView$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.html.ImageView",
		"safePreferenceChanged",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.ImageView$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.ImageView$1",
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
		"javax.swing.text.html.ImageView"
	};
	$loadClass(ImageView$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageView$1);
	});
	return class$;
}

$Class* ImageView$1::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax