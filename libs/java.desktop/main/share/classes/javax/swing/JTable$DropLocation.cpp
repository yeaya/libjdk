#include <javax/swing/JTable$DropLocation.h>
#include <java/awt/Point.h>
#include <javax/swing/JTable.h>
#include <javax/swing/TransferHandler$DropLocation.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TransferHandler$DropLocation = ::javax::swing::TransferHandler$DropLocation;

namespace javax {
	namespace swing {

void JTable$DropLocation::init$($Point* p, int32_t row, int32_t col, bool isInsertRow, bool isInsertCol) {
	$TransferHandler$DropLocation::init$(p);
	this->row = row;
	this->col = col;
	this->isInsertRow$ = isInsertRow;
	this->isInsertCol = isInsertCol;
}

int32_t JTable$DropLocation::getRow() {
	return this->row;
}

int32_t JTable$DropLocation::getColumn() {
	return this->col;
}

bool JTable$DropLocation::isInsertRow() {
	return this->isInsertRow$;
}

bool JTable$DropLocation::isInsertColumn() {
	return this->isInsertCol;
}

$String* JTable$DropLocation::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($of(this)->getClass()->getName()));
	var$0->append("[dropPoint="_s);
	var$0->append($(getDropPoint()));
	var$0->append(",row="_s);
	var$0->append(this->row);
	var$0->append(",column="_s);
	var$0->append(this->col);
	var$0->append(",insertRow="_s);
	var$0->append(this->isInsertRow$);
	var$0->append(",insertColumn="_s);
	var$0->append(this->isInsertCol);
	var$0->append("]"_s);
	return $str(var$0);
}

JTable$DropLocation::JTable$DropLocation() {
}

$Class* JTable$DropLocation::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"row", "I", nullptr, $PRIVATE | $FINAL, $field(JTable$DropLocation, row)},
		{"col", "I", nullptr, $PRIVATE | $FINAL, $field(JTable$DropLocation, col)},
		{"isInsertRow", "Z", nullptr, $PRIVATE | $FINAL, $field(JTable$DropLocation, isInsertRow$)},
		{"isInsertCol", "Z", nullptr, $PRIVATE | $FINAL, $field(JTable$DropLocation, isInsertCol)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Point;IIZZ)V", nullptr, $PRIVATE, $method(JTable$DropLocation, init$, void, $Point*, int32_t, int32_t, bool, bool)},
		{"getColumn", "()I", nullptr, $PUBLIC, $method(JTable$DropLocation, getColumn, int32_t)},
		{"getRow", "()I", nullptr, $PUBLIC, $method(JTable$DropLocation, getRow, int32_t)},
		{"isInsertColumn", "()Z", nullptr, $PUBLIC, $method(JTable$DropLocation, isInsertColumn, bool)},
		{"isInsertRow", "()Z", nullptr, $PUBLIC, $method(JTable$DropLocation, isInsertRow, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JTable$DropLocation, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JTable$DropLocation", "javax.swing.JTable", "DropLocation", $PUBLIC | $STATIC | $FINAL},
		{"javax.swing.TransferHandler$DropLocation", "javax.swing.TransferHandler", "DropLocation", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.swing.JTable$DropLocation",
		"javax.swing.TransferHandler$DropLocation",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JTable"
	};
	$loadClass(JTable$DropLocation, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTable$DropLocation);
	});
	return class$;
}

$Class* JTable$DropLocation::class$ = nullptr;

	} // swing
} // javax