#include <javax/swing/table/TableColumnModel.h>

#include <java/util/Enumeration.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/event/TableColumnModelListener.h>
#include <javax/swing/table/TableColumn.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $TableColumnModelListener = ::javax::swing::event::TableColumnModelListener;
using $TableColumn = ::javax::swing::table::TableColumn;

namespace javax {
	namespace swing {
		namespace table {

$MethodInfo _TableColumnModel_MethodInfo_[] = {
	{"addColumn", "(Ljavax/swing/table/TableColumn;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, addColumn, void, $TableColumn*)},
	{"addColumnModelListener", "(Ljavax/swing/event/TableColumnModelListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, addColumnModelListener, void, $TableColumnModelListener*)},
	{"getColumn", "(I)Ljavax/swing/table/TableColumn;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, getColumn, $TableColumn*, int32_t)},
	{"getColumnCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, getColumnCount, int32_t)},
	{"getColumnIndex", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, getColumnIndex, int32_t, Object$*)},
	{"getColumnIndexAtX", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, getColumnIndexAtX, int32_t, int32_t)},
	{"getColumnMargin", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, getColumnMargin, int32_t)},
	{"getColumnSelectionAllowed", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, getColumnSelectionAllowed, bool)},
	{"getColumns", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/swing/table/TableColumn;>;", $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, getColumns, $Enumeration*)},
	{"getSelectedColumnCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, getSelectedColumnCount, int32_t)},
	{"getSelectedColumns", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, getSelectedColumns, $ints*)},
	{"getSelectionModel", "()Ljavax/swing/ListSelectionModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, getSelectionModel, $ListSelectionModel*)},
	{"getTotalColumnWidth", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, getTotalColumnWidth, int32_t)},
	{"moveColumn", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, moveColumn, void, int32_t, int32_t)},
	{"removeColumn", "(Ljavax/swing/table/TableColumn;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, removeColumn, void, $TableColumn*)},
	{"removeColumnModelListener", "(Ljavax/swing/event/TableColumnModelListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, removeColumnModelListener, void, $TableColumnModelListener*)},
	{"setColumnMargin", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, setColumnMargin, void, int32_t)},
	{"setColumnSelectionAllowed", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, setColumnSelectionAllowed, void, bool)},
	{"setSelectionModel", "(Ljavax/swing/ListSelectionModel;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TableColumnModel, setSelectionModel, void, $ListSelectionModel*)},
	{}
};

$ClassInfo _TableColumnModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.table.TableColumnModel",
	nullptr,
	nullptr,
	nullptr,
	_TableColumnModel_MethodInfo_
};

$Object* allocate$TableColumnModel($Class* clazz) {
	return $of($alloc(TableColumnModel));
}

$Class* TableColumnModel::load$($String* name, bool initialize) {
	$loadClass(TableColumnModel, name, initialize, &_TableColumnModel_ClassInfo_, allocate$TableColumnModel);
	return class$;
}

$Class* TableColumnModel::class$ = nullptr;

		} // table
	} // swing
} // javax