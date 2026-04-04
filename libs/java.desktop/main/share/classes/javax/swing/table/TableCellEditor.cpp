#include <javax/swing/table/TableCellEditor.h>
#include <java/awt/Component.h>
#include <javax/swing/JTable.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTable = ::javax::swing::JTable;

namespace javax {
	namespace swing {
		namespace table {

$Class* TableCellEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTableCellEditorComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZII)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableCellEditor, getTableCellEditorComponent, $Component*, $JTable*, Object$*, bool, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.table.TableCellEditor",
		nullptr,
		"javax.swing.CellEditor",
		nullptr,
		methodInfos$$
	};
	$loadClass(TableCellEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableCellEditor);
	});
	return class$;
}

$Class* TableCellEditor::class$ = nullptr;

		} // table
	} // swing
} // javax