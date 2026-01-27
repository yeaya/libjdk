#include <javax/swing/JTable$AccessibleJTable$AccessibleTableHeader.h>

#include <java/awt/Component.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleTable.h>
#include <javax/swing/JTable$AccessibleJTable$AccessibleJTableHeaderCell.h>
#include <javax/swing/JTable$AccessibleJTable.h>
#include <javax/swing/JTable.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellRenderer.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleTable = ::javax::accessibility::AccessibleTable;
using $JTable = ::javax::swing::JTable;
using $JTable$AccessibleJTable = ::javax::swing::JTable$AccessibleJTable;
using $JTable$AccessibleJTable$AccessibleJTableHeaderCell = ::javax::swing::JTable$AccessibleJTable$AccessibleJTableHeaderCell;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellRenderer = ::javax::swing::table::TableCellRenderer;
using $TableColumn = ::javax::swing::table::TableColumn;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;

namespace javax {
	namespace swing {

$FieldInfo _JTable$AccessibleJTable$AccessibleTableHeader_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/JTable$AccessibleJTable;", nullptr, $FINAL | $SYNTHETIC, $field(JTable$AccessibleJTable$AccessibleTableHeader, this$1)},
	{"header", "Ljavax/swing/table/JTableHeader;", nullptr, $PRIVATE, $field(JTable$AccessibleJTable$AccessibleTableHeader, header)},
	{"headerModel", "Ljavax/swing/table/TableColumnModel;", nullptr, $PRIVATE, $field(JTable$AccessibleJTable$AccessibleTableHeader, headerModel)},
	{}
};

$MethodInfo _JTable$AccessibleJTable$AccessibleTableHeader_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JTable$AccessibleJTable;Ljavax/swing/table/JTableHeader;)V", nullptr, 0, $method(JTable$AccessibleJTable$AccessibleTableHeader, init$, void, $JTable$AccessibleJTable*, $JTableHeader*)},
	{"getAccessibleAt", "(II)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, getAccessibleAt, $Accessible*, int32_t, int32_t)},
	{"getAccessibleCaption", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, getAccessibleCaption, $Accessible*)},
	{"getAccessibleColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, getAccessibleColumnCount, int32_t)},
	{"getAccessibleColumnDescription", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, getAccessibleColumnDescription, $Accessible*, int32_t)},
	{"getAccessibleColumnExtentAt", "(II)I", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, getAccessibleColumnExtentAt, int32_t, int32_t, int32_t)},
	{"getAccessibleColumnHeader", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, getAccessibleColumnHeader, $AccessibleTable*)},
	{"getAccessibleRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, getAccessibleRowCount, int32_t)},
	{"getAccessibleRowDescription", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, getAccessibleRowDescription, $Accessible*, int32_t)},
	{"getAccessibleRowExtentAt", "(II)I", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, getAccessibleRowExtentAt, int32_t, int32_t, int32_t)},
	{"getAccessibleRowHeader", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, getAccessibleRowHeader, $AccessibleTable*)},
	{"getAccessibleSummary", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, getAccessibleSummary, $Accessible*)},
	{"getSelectedAccessibleColumns", "()[I", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, getSelectedAccessibleColumns, $ints*)},
	{"getSelectedAccessibleRows", "()[I", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, getSelectedAccessibleRows, $ints*)},
	{"isAccessibleColumnSelected", "(I)Z", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, isAccessibleColumnSelected, bool, int32_t)},
	{"isAccessibleRowSelected", "(I)Z", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, isAccessibleRowSelected, bool, int32_t)},
	{"isAccessibleSelected", "(II)Z", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, isAccessibleSelected, bool, int32_t, int32_t)},
	{"setAccessibleCaption", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, setAccessibleCaption, void, $Accessible*)},
	{"setAccessibleColumnDescription", "(ILjavax/accessibility/Accessible;)V", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, setAccessibleColumnDescription, void, int32_t, $Accessible*)},
	{"setAccessibleColumnHeader", "(Ljavax/accessibility/AccessibleTable;)V", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, setAccessibleColumnHeader, void, $AccessibleTable*)},
	{"setAccessibleRowDescription", "(ILjavax/accessibility/Accessible;)V", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, setAccessibleRowDescription, void, int32_t, $Accessible*)},
	{"setAccessibleRowHeader", "(Ljavax/accessibility/AccessibleTable;)V", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, setAccessibleRowHeader, void, $AccessibleTable*)},
	{"setAccessibleSummary", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC, $virtualMethod(JTable$AccessibleJTable$AccessibleTableHeader, setAccessibleSummary, void, $Accessible*)},
	{}
};

$InnerClassInfo _JTable$AccessibleJTable$AccessibleTableHeader_InnerClassesInfo_[] = {
	{"javax.swing.JTable$AccessibleJTable", "javax.swing.JTable", "AccessibleJTable", $PROTECTED},
	{"javax.swing.JTable$AccessibleJTable$AccessibleTableHeader", "javax.swing.JTable$AccessibleJTable", "AccessibleTableHeader", $PRIVATE},
	{}
};

$ClassInfo _JTable$AccessibleJTable$AccessibleTableHeader_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JTable$AccessibleJTable$AccessibleTableHeader",
	"java.lang.Object",
	"javax.accessibility.AccessibleTable",
	_JTable$AccessibleJTable$AccessibleTableHeader_FieldInfo_,
	_JTable$AccessibleJTable$AccessibleTableHeader_MethodInfo_,
	nullptr,
	nullptr,
	_JTable$AccessibleJTable$AccessibleTableHeader_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JTable"
};

$Object* allocate$JTable$AccessibleJTable$AccessibleTableHeader($Class* clazz) {
	return $of($alloc(JTable$AccessibleJTable$AccessibleTableHeader));
}

void JTable$AccessibleJTable$AccessibleTableHeader::init$($JTable$AccessibleJTable* this$1, $JTableHeader* header) {
	$set(this, this$1, this$1);
	$set(this, header, header);
	$set(this, headerModel, $nc(header)->getColumnModel());
}

$Accessible* JTable$AccessibleJTable$AccessibleTableHeader::getAccessibleCaption() {
	return nullptr;
}

void JTable$AccessibleJTable$AccessibleTableHeader::setAccessibleCaption($Accessible* a) {
}

$Accessible* JTable$AccessibleJTable$AccessibleTableHeader::getAccessibleSummary() {
	return nullptr;
}

void JTable$AccessibleJTable$AccessibleTableHeader::setAccessibleSummary($Accessible* a) {
}

int32_t JTable$AccessibleJTable$AccessibleTableHeader::getAccessibleRowCount() {
	return 1;
}

int32_t JTable$AccessibleJTable$AccessibleTableHeader::getAccessibleColumnCount() {
	return $nc(this->headerModel)->getColumnCount();
}

$Accessible* JTable$AccessibleJTable$AccessibleTableHeader::getAccessibleAt(int32_t row, int32_t column) {
	$useLocalCurrentObjectStackCache();
	$var($TableColumn, aColumn, $nc(this->headerModel)->getColumn(column));
	$var($TableCellRenderer, renderer, $nc(aColumn)->getHeaderRenderer());
	if (renderer == nullptr) {
		$assign(renderer, $nc(this->header)->getDefaultRenderer());
	}
	$var($JTable, var$0, $nc(this->header)->getTable());
	$var($Component, component, $nc(renderer)->getTableCellRendererComponent(var$0, $(aColumn->getHeaderValue()), false, false, -1, column));
	return $new($JTable$AccessibleJTable$AccessibleJTableHeaderCell, this->this$1, row, column, $($nc(this->this$1->this$0)->getTableHeader()), component);
}

int32_t JTable$AccessibleJTable$AccessibleTableHeader::getAccessibleRowExtentAt(int32_t r, int32_t c) {
	return 1;
}

int32_t JTable$AccessibleJTable$AccessibleTableHeader::getAccessibleColumnExtentAt(int32_t r, int32_t c) {
	return 1;
}

$AccessibleTable* JTable$AccessibleJTable$AccessibleTableHeader::getAccessibleRowHeader() {
	return nullptr;
}

void JTable$AccessibleJTable$AccessibleTableHeader::setAccessibleRowHeader($AccessibleTable* table) {
}

$AccessibleTable* JTable$AccessibleJTable$AccessibleTableHeader::getAccessibleColumnHeader() {
	return nullptr;
}

void JTable$AccessibleJTable$AccessibleTableHeader::setAccessibleColumnHeader($AccessibleTable* table) {
}

$Accessible* JTable$AccessibleJTable$AccessibleTableHeader::getAccessibleRowDescription(int32_t r) {
	return nullptr;
}

void JTable$AccessibleJTable$AccessibleTableHeader::setAccessibleRowDescription(int32_t r, $Accessible* a) {
}

$Accessible* JTable$AccessibleJTable$AccessibleTableHeader::getAccessibleColumnDescription(int32_t c) {
	return nullptr;
}

void JTable$AccessibleJTable$AccessibleTableHeader::setAccessibleColumnDescription(int32_t c, $Accessible* a) {
}

bool JTable$AccessibleJTable$AccessibleTableHeader::isAccessibleSelected(int32_t r, int32_t c) {
	return false;
}

bool JTable$AccessibleJTable$AccessibleTableHeader::isAccessibleRowSelected(int32_t r) {
	return false;
}

bool JTable$AccessibleJTable$AccessibleTableHeader::isAccessibleColumnSelected(int32_t c) {
	return false;
}

$ints* JTable$AccessibleJTable$AccessibleTableHeader::getSelectedAccessibleRows() {
	return $new($ints, 0);
}

$ints* JTable$AccessibleJTable$AccessibleTableHeader::getSelectedAccessibleColumns() {
	return $new($ints, 0);
}

JTable$AccessibleJTable$AccessibleTableHeader::JTable$AccessibleJTable$AccessibleTableHeader() {
}

$Class* JTable$AccessibleJTable$AccessibleTableHeader::load$($String* name, bool initialize) {
	$loadClass(JTable$AccessibleJTable$AccessibleTableHeader, name, initialize, &_JTable$AccessibleJTable$AccessibleTableHeader_ClassInfo_, allocate$JTable$AccessibleJTable$AccessibleTableHeader);
	return class$;
}

$Class* JTable$AccessibleJTable$AccessibleTableHeader::class$ = nullptr;

	} // swing
} // javax