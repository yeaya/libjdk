#include <javax/swing/table/TableCellRenderer.h>
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

$Class* TableCellRenderer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTableCellRendererComponent", "(Ljavax/swing/JTable;Ljava/lang/Object;ZZII)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableCellRenderer, getTableCellRendererComponent, $Component*, $JTable*, Object$*, bool, bool, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.table.TableCellRenderer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TableCellRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableCellRenderer);
	});
	return class$;
}

$Class* TableCellRenderer::class$ = nullptr;

		} // table
	} // swing
} // javax