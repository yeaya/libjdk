#include <javax/swing/table/TableModel.h>

#include <javax/swing/event/TableModelListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TableModelListener = ::javax::swing::event::TableModelListener;

namespace javax {
	namespace swing {
		namespace table {

$MethodInfo _TableModel_MethodInfo_[] = {
	{"addTableModelListener", "(Ljavax/swing/event/TableModelListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableModel, addTableModelListener, void, $TableModelListener*)},
	{"getColumnClass", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(TableModel, getColumnClass, $Class*, int32_t)},
	{"getColumnCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableModel, getColumnCount, int32_t)},
	{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableModel, getColumnName, $String*, int32_t)},
	{"getRowCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableModel, getRowCount, int32_t)},
	{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableModel, getValueAt, $Object*, int32_t, int32_t)},
	{"isCellEditable", "(II)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableModel, isCellEditable, bool, int32_t, int32_t)},
	{"removeTableModelListener", "(Ljavax/swing/event/TableModelListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableModel, removeTableModelListener, void, $TableModelListener*)},
	{"setValueAt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableModel, setValueAt, void, Object$*, int32_t, int32_t)},
	{}
};

$ClassInfo _TableModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.table.TableModel",
	nullptr,
	nullptr,
	nullptr,
	_TableModel_MethodInfo_
};

$Object* allocate$TableModel($Class* clazz) {
	return $of($alloc(TableModel));
}

$Class* TableModel::load$($String* name, bool initialize) {
	$loadClass(TableModel, name, initialize, &_TableModel_ClassInfo_, allocate$TableModel);
	return class$;
}

$Class* TableModel::class$ = nullptr;

		} // table
	} // swing
} // javax