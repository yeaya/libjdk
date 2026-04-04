#include <javax/swing/text/TableView$TableCell.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/TableView.h>
#include <javax/swing/text/View.h>
#include <jcpp.h>

#undef Y_AXIS

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxView = ::javax::swing::text::BoxView;
using $Element = ::javax::swing::text::Element;
using $TableView = ::javax::swing::text::TableView;
using $View = ::javax::swing::text::View;

namespace javax {
	namespace swing {
		namespace text {

int32_t TableView$TableCell::hashCode() {
	 return this->$BoxView::hashCode();
}

bool TableView$TableCell::equals(Object$* arg0) {
	 return this->$BoxView::equals(arg0);
}

$Object* TableView$TableCell::clone() {
	 return this->$BoxView::clone();
}

$String* TableView$TableCell::toString() {
	 return this->$BoxView::toString();
}

void TableView$TableCell::finalize() {
	this->$BoxView::finalize();
}

void TableView$TableCell::init$($TableView* this$0, $Element* elem) {
	$set(this, this$0, this$0);
	$BoxView::init$(elem, $View::Y_AXIS);
}

int32_t TableView$TableCell::getColumnCount() {
	return 1;
}

int32_t TableView$TableCell::getRowCount() {
	return 1;
}

void TableView$TableCell::setGridLocation(int32_t row, int32_t col) {
	this->row = row;
	this->col = col;
}

int32_t TableView$TableCell::getGridRow() {
	return this->row;
}

int32_t TableView$TableCell::getGridColumn() {
	return this->col;
}

TableView$TableCell::TableView$TableCell() {
}

$Class* TableView$TableCell::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/text/TableView;", nullptr, $FINAL | $SYNTHETIC, $field(TableView$TableCell, this$0)},
		{"row", "I", nullptr, 0, $field(TableView$TableCell, row)},
		{"col", "I", nullptr, 0, $field(TableView$TableCell, col)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/text/TableView;Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(TableView$TableCell, init$, void, $TableView*, $Element*)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(TableView$TableCell, getColumnCount, int32_t)},
		{"getGridColumn", "()I", nullptr, $PUBLIC, $virtualMethod(TableView$TableCell, getGridColumn, int32_t)},
		{"getGridRow", "()I", nullptr, $PUBLIC, $virtualMethod(TableView$TableCell, getGridRow, int32_t)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(TableView$TableCell, getRowCount, int32_t)},
		{"setGridLocation", "(II)V", nullptr, $PUBLIC, $virtualMethod(TableView$TableCell, setGridLocation, void, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.TableView$TableCell", "javax.swing.text.TableView", "TableCell", $PUBLIC},
		{"javax.swing.text.TableView$GridCell", "javax.swing.text.TableView", "GridCell", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.TableView$TableCell",
		"javax.swing.text.BoxView",
		"javax.swing.text.TableView$GridCell",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		nullptr,
		"javax.swing.text.TableView"
	};
	$loadClass(TableView$TableCell, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TableView$TableCell));
	});
	return class$;
}

$Class* TableView$TableCell::class$ = nullptr;

		} // text
	} // swing
} // javax