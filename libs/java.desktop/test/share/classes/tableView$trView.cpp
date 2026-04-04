#include <tableView$trView.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/TableView$TableRow.h>
#include <javax/swing/text/View.h>
#include <tableView.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::javax::swing::text::Element;
using $TableView$TableRow = ::javax::swing::text::TableView$TableRow;
using $View = ::javax::swing::text::View;
using $tableView = ::tableView;

void tableView$trView::setParent($View* parent) {
	$TableView$TableRow::setParent(parent);
}

void tableView$trView::init$($tableView* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$TableView$TableRow::init$(this$0, elem);
}

float tableView$trView::getMinimumSpan(int32_t axis) {
	return getPreferredSpan(axis);
}

float tableView$trView::getMaximumSpan(int32_t axis) {
	return getPreferredSpan(axis);
}

float tableView$trView::getAlignment(int32_t axis) {
	return 0.0f;
}

void tableView$trView::paintChild($Graphics* g, $Rectangle* alloc, int32_t index) {
	$TableView$TableRow::paintChild(g, alloc, index);
	int32_t lastY = $nc(alloc)->y + $nc(alloc)->height - 1;
	$nc(g)->drawLine(alloc->x, alloc->y, alloc->x, lastY);
	int32_t lastX = alloc->x + alloc->width;
	g->drawLine(lastX, alloc->y, lastX, lastY);
}

tableView$trView::tableView$trView() {
}

$Class* tableView$trView::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LtableView;", nullptr, $FINAL | $SYNTHETIC, $field(tableView$trView, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LtableView;Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(tableView$trView, init$, void, $tableView*, $Element*)},
		{"getAlignment", "(I)F", nullptr, $PUBLIC, $virtualMethod(tableView$trView, getAlignment, float, int32_t)},
		{"getMaximumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(tableView$trView, getMaximumSpan, float, int32_t)},
		{"getMinimumSpan", "(I)F", nullptr, $PUBLIC, $virtualMethod(tableView$trView, getMinimumSpan, float, int32_t)},
		{"paintChild", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED, $virtualMethod(tableView$trView, paintChild, void, $Graphics*, $Rectangle*, int32_t)},
		{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC, $virtualMethod(tableView$trView, setParent, void, $View*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"tableView$trView", "tableView", "trView", $PUBLIC},
		{"javax.swing.text.TableView$TableRow", "javax.swing.text.TableView", "TableRow", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"tableView$trView",
		"javax.swing.text.TableView$TableRow",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"tableView"
	};
	$loadClass(tableView$trView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(tableView$trView);
	});
	return class$;
}

$Class* tableView$trView::class$ = nullptr;