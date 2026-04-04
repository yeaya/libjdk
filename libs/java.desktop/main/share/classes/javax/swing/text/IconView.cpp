#include <javax/swing/text/IconView.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <javax/swing/Icon.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/StyleConstants.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef X_AXIS
#undef Y_AXIS

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Element = ::javax::swing::text::Element;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $StyleConstants = ::javax::swing::text::StyleConstants;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

void IconView::init$($Element* elem) {
	$View::init$(elem);
	$var($AttributeSet, attr, $nc(elem)->getAttributes());
	$set(this, c, $StyleConstants::getIcon(attr));
}

void IconView::paint($Graphics* g, $Shape* a) {
	$useLocalObjectStack();
	$var($Rectangle, alloc, $nc(a)->getBounds());
	$nc(this->c)->paintIcon($(getContainer()), g, $nc(alloc)->x, $nc(alloc)->y);
}

float IconView::getPreferredSpan(int32_t axis) {
	$useLocalObjectStack();
	switch (axis) {
	case $View::X_AXIS:
		return (float)$nc(this->c)->getIconWidth();
	case $View::Y_AXIS:
		return (float)$nc(this->c)->getIconHeight();
	default:
		$throwNew($IllegalArgumentException, $$str({"Invalid axis: "_s, $$str(axis)}));
	}
}

float IconView::getAlignment(int32_t axis) {
	switch (axis) {
	case $View::Y_AXIS:
		return 1;
	default:
		return $View::getAlignment(axis);
	}
}

$Shape* IconView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	$useLocalObjectStack();
	int32_t p0 = getStartOffset();
	int32_t p1 = getEndOffset();
	if ((pos >= p0) && (pos <= p1)) {
		$var($Rectangle, r, $nc(a)->getBounds());
		if (pos == p1) {
			$nc(r)->x += $nc(r)->width;
		}
		$nc(r)->width = 0;
		return r;
	}
	$throwNew($BadLocationException, $$str({$$str(pos), " not in range "_s, $$str(p0), ","_s, $$str(p1)}), pos);
}

int32_t IconView::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* bias) {
	$var($Rectangle, alloc, $cast($Rectangle, a));
	if (x < $nc(alloc)->x + ($nc(alloc)->width / 2)) {
		$init($Position$Bias);
		$nc(bias)->set(0, $Position$Bias::Forward);
		return getStartOffset();
	}
	$init($Position$Bias);
	$nc(bias)->set(0, $Position$Bias::Backward);
	return getEndOffset();
}

IconView::IconView() {
}

$Class* IconView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(IconView, c)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(IconView, init$, void, $Element*)},
		{"getAlignment", "(I)F", nullptr, $PUBLIC, $virtualMethod(IconView, getAlignment, float, int32_t)},
		{"getPreferredSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(IconView, getPreferredSpan, float, int32_t)},
		{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, $virtualMethod(IconView, modelToView, $Shape*, int32_t, $Shape*, $Position$Bias*), "javax.swing.text.BadLocationException"},
		{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC, $virtualMethod(IconView, paint, void, $Graphics*, $Shape*)},
		{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, $virtualMethod(IconView, viewToModel, int32_t, float, float, $Shape*, $Position$BiasArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.IconView",
		"javax.swing.text.View",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IconView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IconView);
	});
	return class$;
}

$Class* IconView::class$ = nullptr;

		} // text
	} // swing
} // javax