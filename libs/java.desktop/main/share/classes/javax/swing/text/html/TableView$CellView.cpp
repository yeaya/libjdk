#include <javax/swing/text/html/TableView$CellView.h>
#include <java/lang/Math.h>
#include <javax/swing/SizeRequirements.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/BlockView.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <javax/swing/text/html/TableView.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef VALIGN
#undef Y_AXIS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $SizeRequirements = ::javax::swing::SizeRequirements;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $Element = ::javax::swing::text::Element;
using $View = ::javax::swing::text::View;
using $BlockView = ::javax::swing::text::html::BlockView;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;
using $TableView = ::javax::swing::text::html::TableView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void TableView$CellView::init$($TableView* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$BlockView::init$(elem, $View::Y_AXIS);
}

void TableView$CellView::layoutMajorAxis(int32_t targetSpan, int32_t axis, $ints* offsets, $ints* spans) {
	$useLocalObjectStack();
	$BlockView::layoutMajorAxis(targetSpan, axis, offsets, spans);
	int32_t used = 0;
	int32_t n = $nc(spans)->length;
	for (int32_t i = 0; i < n; ++i) {
		used += spans->get(i);
	}
	int32_t adjust = 0;
	if (used < targetSpan) {
		$init($HTML$Attribute);
		$var($String, valign, $cast($String, $$nc($$nc(getElement())->getAttributes())->getAttribute($HTML$Attribute::VALIGN)));
		if (valign == nullptr) {
			$var($AttributeSet, rowAttr, $$nc($$nc(getElement())->getParentElement())->getAttributes());
			$assign(valign, $cast($String, $nc(rowAttr)->getAttribute($HTML$Attribute::VALIGN)));
		}
		if ((valign == nullptr) || valign->equals("middle"_s)) {
			adjust = (targetSpan - used) / 2;
		} else if (valign->equals("bottom"_s)) {
			adjust = targetSpan - used;
		}
	}
	if (adjust != 0) {
		for (int32_t i = 0; i < n; ++i) {
			(*$nc(offsets))[i] += adjust;
		}
	}
}

$SizeRequirements* TableView$CellView::calculateMajorAxisRequirements(int32_t axis, $SizeRequirements* r) {
	$var($SizeRequirements, req, $BlockView::calculateMajorAxisRequirements(axis, r));
	$nc(req)->maximum = $Integer::MAX_VALUE;
	return req;
}

$SizeRequirements* TableView$CellView::calculateMinorAxisRequirements(int32_t axis, $SizeRequirements* r) {
	$useLocalObjectStack();
	$var($SizeRequirements, rv, $BlockView::calculateMinorAxisRequirements(axis, r));
	int32_t n = getViewCount();
	int32_t min = 0;
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		min = $Math::max($cast(int32_t, $nc(v)->getMinimumSpan(axis)), min);
	}
	$nc(rv)->minimum = $Math::min($nc(rv)->minimum, min);
	return rv;
}

TableView$CellView::TableView$CellView() {
}

$Class* TableView$CellView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/html/TableView;", nullptr, $FINAL | $SYNTHETIC, $field(TableView$CellView, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/html/TableView;Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(TableView$CellView, init$, void, $TableView*, $Element*)},
		{"calculateMajorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED, $virtualMethod(TableView$CellView, calculateMajorAxisRequirements, $SizeRequirements*, int32_t, $SizeRequirements*)},
		{"calculateMinorAxisRequirements", "(ILjavax/swing/SizeRequirements;)Ljavax/swing/SizeRequirements;", nullptr, $PROTECTED, $virtualMethod(TableView$CellView, calculateMinorAxisRequirements, $SizeRequirements*, int32_t, $SizeRequirements*)},
		{"layoutMajorAxis", "(II[I[I)V", nullptr, $PROTECTED, $virtualMethod(TableView$CellView, layoutMajorAxis, void, int32_t, int32_t, $ints*, $ints*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.TableView$CellView", "javax.swing.text.html.TableView", "CellView", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.html.TableView$CellView",
		"javax.swing.text.html.BlockView",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.text.html.TableView"
	};
	$loadClass(TableView$CellView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableView$CellView);
	});
	return class$;
}

$Class* TableView$CellView::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax