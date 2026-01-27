#include <javax/swing/text/html/AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable.h>

#include <java/util/ArrayList.h>
#include <java/util/Hashtable.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleTable.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo$TableAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo$TableCellElementInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $Hashtable = ::java::util::Hashtable;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleTable = ::javax::accessibility::AccessibleTable;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$TableElementInfo$TableAccessibleContext = ::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableAccessibleContext;
using $AccessibleHTML$TableElementInfo$TableCellElementInfo = ::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableCellElementInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable_FieldInfo_[] = {
	{"this$2", "Ljavax/swing/text/html/AccessibleHTML$TableElementInfo$TableAccessibleContext;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, this$2)},
	{"headers", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Integer;Ljava/util/ArrayList<Ljavax/swing/text/html/AccessibleHTML$TableElementInfo$TableCellElementInfo;>;>;", $PRIVATE, $field(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, headers)},
	{"rowCount", "I", nullptr, $PRIVATE, $field(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, rowCount)},
	{"columnCount", "I", nullptr, $PRIVATE, $field(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, columnCount)},
	{}
};

$MethodInfo _AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML$TableElementInfo$TableAccessibleContext;)V", nullptr, $PROTECTED, $method(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, init$, void, $AccessibleHTML$TableElementInfo$TableAccessibleContext*)},
	{"addHeader", "(Ljavax/swing/text/html/AccessibleHTML$TableElementInfo$TableCellElementInfo;I)V", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, addHeader, void, $AccessibleHTML$TableElementInfo$TableCellElementInfo*, int32_t)},
	{"getAccessibleAt", "(II)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getAccessibleAt, $Accessible*, int32_t, int32_t)},
	{"getAccessibleCaption", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getAccessibleCaption, $Accessible*)},
	{"getAccessibleColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getAccessibleColumnCount, int32_t)},
	{"getAccessibleColumnDescription", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getAccessibleColumnDescription, $Accessible*, int32_t)},
	{"getAccessibleColumnExtentAt", "(II)I", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getAccessibleColumnExtentAt, int32_t, int32_t, int32_t)},
	{"getAccessibleColumnHeader", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getAccessibleColumnHeader, $AccessibleTable*)},
	{"getAccessibleRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getAccessibleRowCount, int32_t)},
	{"getAccessibleRowDescription", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getAccessibleRowDescription, $Accessible*, int32_t)},
	{"getAccessibleRowExtentAt", "(II)I", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getAccessibleRowExtentAt, int32_t, int32_t, int32_t)},
	{"getAccessibleRowHeader", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getAccessibleRowHeader, $AccessibleTable*)},
	{"getAccessibleSummary", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getAccessibleSummary, $Accessible*)},
	{"getElementInfoAt", "(II)Ljavax/swing/text/html/AccessibleHTML$TableElementInfo$TableCellElementInfo;", nullptr, $PRIVATE, $method(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getElementInfoAt, $AccessibleHTML$TableElementInfo$TableCellElementInfo*, int32_t, int32_t)},
	{"getSelectedAccessibleColumns", "()[I", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getSelectedAccessibleColumns, $ints*)},
	{"getSelectedAccessibleRows", "()[I", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, getSelectedAccessibleRows, $ints*)},
	{"isAccessibleColumnSelected", "(I)Z", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, isAccessibleColumnSelected, bool, int32_t)},
	{"isAccessibleRowSelected", "(I)Z", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, isAccessibleRowSelected, bool, int32_t)},
	{"isAccessibleSelected", "(II)Z", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, isAccessibleSelected, bool, int32_t, int32_t)},
	{"setAccessibleCaption", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, setAccessibleCaption, void, $Accessible*)},
	{"setAccessibleColumnDescription", "(ILjavax/accessibility/Accessible;)V", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, setAccessibleColumnDescription, void, int32_t, $Accessible*)},
	{"setAccessibleColumnHeader", "(Ljavax/accessibility/AccessibleTable;)V", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, setAccessibleColumnHeader, void, $AccessibleTable*)},
	{"setAccessibleRowDescription", "(ILjavax/accessibility/Accessible;)V", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, setAccessibleRowDescription, void, int32_t, $Accessible*)},
	{"setAccessibleRowHeader", "(Ljavax/accessibility/AccessibleTable;)V", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, setAccessibleRowHeader, void, $AccessibleTable*)},
	{"setAccessibleSummary", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC, $virtualMethod(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, setAccessibleSummary, void, $Accessible*)},
	{}
};

$InnerClassInfo _AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo", "javax.swing.text.html.AccessibleHTML", "TableElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo$TableAccessibleContext", "javax.swing.text.html.AccessibleHTML$TableElementInfo", "TableAccessibleContext", $PUBLIC},
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable", "javax.swing.text.html.AccessibleHTML$TableElementInfo$TableAccessibleContext", "AccessibleHeadersTable", $PROTECTED},
	{}
};

$ClassInfo _AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable",
	"java.lang.Object",
	"javax.accessibility.AccessibleTable",
	_AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable_FieldInfo_,
	_AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable($Class* clazz) {
	return $of($alloc(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable));
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::init$($AccessibleHTML$TableElementInfo$TableAccessibleContext* this$2) {
	$set(this, this$2, this$2);
	$set(this, headers, $new($Hashtable));
	this->rowCount = 0;
	this->columnCount = 0;
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::addHeader($AccessibleHTML$TableElementInfo$TableCellElementInfo* cellInfo, int32_t rowNumber) {
	$useLocalCurrentObjectStackCache();
	$var($Integer, rowInteger, $Integer::valueOf(rowNumber));
	$var($ArrayList, list, $cast($ArrayList, $nc(this->headers)->get(rowInteger)));
	if (list == nullptr) {
		$assign(list, $new($ArrayList));
		$nc(this->headers)->put(rowInteger, list);
	}
	$nc(list)->add(cellInfo);
}

$Accessible* AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getAccessibleCaption() {
	return nullptr;
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::setAccessibleCaption($Accessible* a) {
}

$Accessible* AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getAccessibleSummary() {
	return nullptr;
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::setAccessibleSummary($Accessible* a) {
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getAccessibleRowCount() {
	return this->rowCount;
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getAccessibleColumnCount() {
	return this->columnCount;
}

$AccessibleHTML$TableElementInfo$TableCellElementInfo* AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getElementInfoAt(int32_t r, int32_t c) {
	$useLocalCurrentObjectStackCache();
	$var($ArrayList, list, $cast($ArrayList, $nc(this->headers)->get($($Integer::valueOf(r)))));
	if (list != nullptr) {
		return $cast($AccessibleHTML$TableElementInfo$TableCellElementInfo, list->get(c));
	} else {
		return nullptr;
	}
}

$Accessible* AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getAccessibleAt(int32_t r, int32_t c) {
	$var($AccessibleHTML$ElementInfo, elementInfo, getElementInfoAt(r, c));
	if ($instanceOf($Accessible, elementInfo)) {
		return $cast($Accessible, elementInfo);
	} else {
		return nullptr;
	}
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getAccessibleRowExtentAt(int32_t r, int32_t c) {
	$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, elementInfo, getElementInfoAt(r, c));
	if (elementInfo != nullptr) {
		return elementInfo->getRowCount();
	} else {
		return 0;
	}
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getAccessibleColumnExtentAt(int32_t r, int32_t c) {
	$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, elementInfo, getElementInfoAt(r, c));
	if (elementInfo != nullptr) {
		return elementInfo->getRowCount();
	} else {
		return 0;
	}
}

$AccessibleTable* AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getAccessibleRowHeader() {
	return nullptr;
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::setAccessibleRowHeader($AccessibleTable* table) {
}

$AccessibleTable* AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getAccessibleColumnHeader() {
	return nullptr;
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::setAccessibleColumnHeader($AccessibleTable* table) {
}

$Accessible* AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getAccessibleRowDescription(int32_t r) {
	return nullptr;
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::setAccessibleRowDescription(int32_t r, $Accessible* a) {
}

$Accessible* AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getAccessibleColumnDescription(int32_t c) {
	return nullptr;
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::setAccessibleColumnDescription(int32_t c, $Accessible* a) {
}

bool AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::isAccessibleSelected(int32_t r, int32_t c) {
	return false;
}

bool AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::isAccessibleRowSelected(int32_t r) {
	return false;
}

bool AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::isAccessibleColumnSelected(int32_t c) {
	return false;
}

$ints* AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getSelectedAccessibleRows() {
	return $new($ints, 0);
}

$ints* AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::getSelectedAccessibleColumns() {
	return $new($ints, 0);
}

AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable() {
}

$Class* AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, name, initialize, &_AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable_ClassInfo_, allocate$AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable);
	return class$;
}

$Class* AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax