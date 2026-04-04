#include <javax/swing/table/TableColumn$1.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTable.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/table/DefaultTableCellRenderer.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableColumn.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;
using $UIManager = ::javax::swing::UIManager;
using $DefaultTableCellRenderer = ::javax::swing::table::DefaultTableCellRenderer;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableColumn = ::javax::swing::table::TableColumn;

namespace javax {
	namespace swing {
		namespace table {

void TableColumn$1::init$($TableColumn* this$0) {
	$set(this, this$0, this$0);
	$DefaultTableCellRenderer::init$();
}

$Component* TableColumn$1::getTableCellRendererComponent($JTable* table, Object$* value, bool isSelected, bool hasFocus, int32_t row, int32_t column) {
	$useLocalObjectStack();
	if (table != nullptr) {
		$var($JTableHeader, header, table->getTableHeader());
		if (header != nullptr) {
			setForeground($(header->getForeground()));
			setBackground($(header->getBackground()));
			setFont($(header->getFont()));
		}
	}
	setText((value == nullptr) ? ""_s : $($of(value)->toString()));
	setBorder($($UIManager::getBorder("TableHeader.cellBorder"_s)));
	return this;
}

TableColumn$1::TableColumn$1() {
}

$Class* TableColumn$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/table/TableColumn;", nullptr, $FINAL | $SYNTHETIC, $field(TableColumn$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/table/TableColumn;)V", nullptr, 0, $method(TableColumn$1, init$, void, $TableColumn*)},
		{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(TableColumn$1, getTableCellRendererComponent, $Component*, $JTable*, Object$*, bool, bool, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.table.TableColumn",
		"createDefaultHeaderRenderer",
		"()Ljavax/swing/table/TableCellRenderer;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.table.TableColumn$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.table.TableColumn$1",
		"javax.swing.table.DefaultTableCellRenderer",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.table.TableColumn"
	};
	$loadClass(TableColumn$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TableColumn$1));
	});
	return class$;
}

$Class* TableColumn$1::class$ = nullptr;

		} // table
	} // swing
} // javax