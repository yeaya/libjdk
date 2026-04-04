#include <javax/swing/text/html/HTMLEditorKit$HTMLFactory$1.h>
#include <java/awt/Shape.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/html/BlockView.h>
#include <javax/swing/text/html/HTMLEditorKit$HTMLFactory.h>
#include <jcpp.h>

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $BlockView = ::javax::swing::text::html::BlockView;
using $HTMLEditorKit$HTMLFactory = ::javax::swing::text::html::HTMLEditorKit$HTMLFactory;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLEditorKit$HTMLFactory$1::init$($HTMLEditorKit$HTMLFactory* this$0, $Element* elem, int32_t axis) {
	$set(this, this$0, this$0);
	$BlockView::init$(elem, axis);
}

float HTMLEditorKit$HTMLFactory$1::getPreferredSpan(int32_t axis) {
	return 0;
}

float HTMLEditorKit$HTMLFactory$1::getMinimumSpan(int32_t axis) {
	return 0;
}

float HTMLEditorKit$HTMLFactory$1::getMaximumSpan(int32_t axis) {
	return 0;
}

void HTMLEditorKit$HTMLFactory$1::loadChildren($ViewFactory* f) {
}

$Shape* HTMLEditorKit$HTMLFactory$1::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	return a;
}

int32_t HTMLEditorKit$HTMLFactory$1::getNextVisualPositionFrom(int32_t pos, $Position$Bias* b, $Shape* a, int32_t direction, $Position$BiasArray* biasRet) {
	return $$nc(getElement())->getEndOffset();
}

HTMLEditorKit$HTMLFactory$1::HTMLEditorKit$HTMLFactory$1() {
}

$Class* HTMLEditorKit$HTMLFactory$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/HTMLEditorKit$HTMLFactory;", nullptr, $FINAL | $SYNTHETIC, $field(HTMLEditorKit$HTMLFactory$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/HTMLEditorKit$HTMLFactory;Ljavax/swing/text/Element;I)V", nullptr, 0, $method(HTMLEditorKit$HTMLFactory$1, init$, void, $HTMLEditorKit$HTMLFactory*, $Element*, int32_t)},
		{"getMaximumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(HTMLEditorKit$HTMLFactory$1, getMaximumSpan, float, int32_t)},
		{"getMinimumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(HTMLEditorKit$HTMLFactory$1, getMinimumSpan, float, int32_t)},
		{"getNextVisualPositionFrom", "(ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, $virtualMethod(HTMLEditorKit$HTMLFactory$1, getNextVisualPositionFrom, int32_t, int32_t, $Position$Bias*, $Shape*, int32_t, $Position$BiasArray*)},
		{"getPreferredSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(HTMLEditorKit$HTMLFactory$1, getPreferredSpan, float, int32_t)},
		{"loadChildren", "(Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED, $virtualMethod(HTMLEditorKit$HTMLFactory$1, loadChildren, void, $ViewFactory*)},
		{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(HTMLEditorKit$HTMLFactory$1, modelToView, $Shape*, int32_t, $Shape*, $Position$Bias*), "javax.swing.text.BadLocationException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.text.html.HTMLEditorKit$HTMLFactory",
		"create",
		"(Ljavax/swing/text/Element;)Ljavax/swing/text/View;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.HTMLEditorKit$HTMLFactory", "javax.swing.text.html.HTMLEditorKit", "HTMLFactory", $PUBLIC | $STATIC},
		{"javax.swing.text.html.HTMLEditorKit$HTMLFactory$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.HTMLEditorKit$HTMLFactory$1",
		"javax.swing.text.html.BlockView",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.HTMLEditorKit"
	};
	$loadClass(HTMLEditorKit$HTMLFactory$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLEditorKit$HTMLFactory$1);
	});
	return class$;
}

$Class* HTMLEditorKit$HTMLFactory$1::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax