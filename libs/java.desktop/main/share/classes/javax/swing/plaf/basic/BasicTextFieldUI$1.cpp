#include <javax/swing/plaf/basic/BasicTextFieldUI$1.h>
#include <javax/swing/plaf/basic/BasicTextFieldUI.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/GlyphView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicTextFieldUI = ::javax::swing::plaf::basic::BasicTextFieldUI;
using $Element = ::javax::swing::text::Element;
using $GlyphView = ::javax::swing::text::GlyphView;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicTextFieldUI$1::init$($BasicTextFieldUI* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$GlyphView::init$(elem);
}

float BasicTextFieldUI$1::getMinimumSpan(int32_t axis) {
	return getPreferredSpan(axis);
}

BasicTextFieldUI$1::BasicTextFieldUI$1() {
}

$Class* BasicTextFieldUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicTextFieldUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTextFieldUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicTextFieldUI;Ljavax/swing/text/Element;)V", nullptr, 0, $method(BasicTextFieldUI$1, init$, void, $BasicTextFieldUI*, $Element*)},
		{"getMinimumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(BasicTextFieldUI$1, getMinimumSpan, float, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.basic.BasicTextFieldUI",
		"create",
		"(Ljavax/swing/text/Element;)Ljavax/swing/text/View;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicTextFieldUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicTextFieldUI$1",
		"javax.swing.text.GlyphView",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicTextFieldUI"
	};
	$loadClass(BasicTextFieldUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicTextFieldUI$1));
	});
	return class$;
}

$Class* BasicTextFieldUI$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax