#include <javax/swing/table/AbstractTableModel.h>

#include <java/util/EventListener.h>
#include <javax/swing/event/EventListenerList.h>
#include <javax/swing/event/TableModelEvent.h>
#include <javax/swing/event/TableModelListener.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef ALL_COLUMNS
#undef DELETE
#undef HEADER_ROW
#undef INSERT
#undef UPDATE

using $EventListenerArray = $Array<::java::util::EventListener>;
using $TableModelListenerArray = $Array<::javax::swing::event::TableModelListener>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $EventListenerList = ::javax::swing::event::EventListenerList;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;
using $TableModelListener = ::javax::swing::event::TableModelListener;
using $TableModel = ::javax::swing::table::TableModel;

namespace javax {
	namespace swing {
		namespace table {

$FieldInfo _AbstractTableModel_FieldInfo_[] = {
	{"listenerList", "Ljavax/swing/event/EventListenerList;", nullptr, $PROTECTED, $field(AbstractTableModel, listenerList)},
	{}
};

$MethodInfo _AbstractTableModel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PROTECTED, $method(AbstractTableModel, init$, void)},
	{"addTableModelListener", "(Ljavax/swing/event/TableModelListener;)V", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, addTableModelListener, void, $TableModelListener*)},
	{"findColumn", "(Ljava/lang/String;)I", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, findColumn, int32_t, $String*)},
	{"fireTableCellUpdated", "(II)V", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, fireTableCellUpdated, void, int32_t, int32_t)},
	{"fireTableChanged", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, fireTableChanged, void, $TableModelEvent*)},
	{"fireTableDataChanged", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, fireTableDataChanged, void)},
	{"fireTableRowsDeleted", "(II)V", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, fireTableRowsDeleted, void, int32_t, int32_t)},
	{"fireTableRowsInserted", "(II)V", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, fireTableRowsInserted, void, int32_t, int32_t)},
	{"fireTableRowsUpdated", "(II)V", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, fireTableRowsUpdated, void, int32_t, int32_t)},
	{"fireTableStructureChanged", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, fireTableStructureChanged, void)},
	{"getColumnClass", "(I)Ljava/lang/Class;", "(I)Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(AbstractTableModel, getColumnClass, $Class*, int32_t)},
	{"getColumnName", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, getColumnName, $String*, int32_t)},
	{"getListeners", "(Ljava/lang/Class;)[Ljava/util/EventListener;", "<T::Ljava/util/EventListener;>(Ljava/lang/Class<TT;>;)[TT;", $PUBLIC, $virtualMethod(AbstractTableModel, getListeners, $EventListenerArray*, $Class*)},
	{"getTableModelListeners", "()[Ljavax/swing/event/TableModelListener;", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, getTableModelListeners, $TableModelListenerArray*)},
	{"isCellEditable", "(II)Z", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, isCellEditable, bool, int32_t, int32_t)},
	{"removeTableModelListener", "(Ljavax/swing/event/TableModelListener;)V", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, removeTableModelListener, void, $TableModelListener*)},
	{"setValueAt", "(Ljava/lang/Object;II)V", nullptr, $PUBLIC, $virtualMethod(AbstractTableModel, setValueAt, void, Object$*, int32_t, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbstractTableModel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.table.AbstractTableModel",
	"java.lang.Object",
	"javax.swing.table.TableModel,java.io.Serializable",
	_AbstractTableModel_FieldInfo_,
	_AbstractTableModel_MethodInfo_
};

$Object* allocate$AbstractTableModel($Class* clazz) {
	return $of($alloc(AbstractTableModel));
}

int32_t AbstractTableModel::hashCode() {
	 return this->$TableModel::hashCode();
}

bool AbstractTableModel::equals(Object$* arg0) {
	 return this->$TableModel::equals(arg0);
}

$Object* AbstractTableModel::clone() {
	 return this->$TableModel::clone();
}

$String* AbstractTableModel::toString() {
	 return this->$TableModel::toString();
}

void AbstractTableModel::finalize() {
	this->$TableModel::finalize();
}

void AbstractTableModel::init$() {
	$set(this, listenerList, $new($EventListenerList));
}

$String* AbstractTableModel::getColumnName(int32_t column) {
	$useLocalCurrentObjectStackCache();
	$var($String, result, ""_s);
	for (; column >= 0; column = column / 26 - 1) {
		$assign(result, $str({$$str((char16_t)((char16_t)(column % 26) + u'A')), result}));
	}
	return result;
}

int32_t AbstractTableModel::findColumn($String* columnName) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < getColumnCount(); ++i) {
		if ($nc(columnName)->equals($(getColumnName(i)))) {
			return i;
		}
	}
	return -1;
}

$Class* AbstractTableModel::getColumnClass(int32_t columnIndex) {
	return $Object::class$;
}

bool AbstractTableModel::isCellEditable(int32_t rowIndex, int32_t columnIndex) {
	return false;
}

void AbstractTableModel::setValueAt(Object$* aValue, int32_t rowIndex, int32_t columnIndex) {
}

void AbstractTableModel::addTableModelListener($TableModelListener* l) {
	$load($TableModelListener);
	$nc(this->listenerList)->add($TableModelListener::class$, l);
}

void AbstractTableModel::removeTableModelListener($TableModelListener* l) {
	$load($TableModelListener);
	$nc(this->listenerList)->remove($TableModelListener::class$, l);
}

$TableModelListenerArray* AbstractTableModel::getTableModelListeners() {
	$load($TableModelListener);
	return $fcast($TableModelListenerArray, $nc(this->listenerList)->getListeners($TableModelListener::class$));
}

void AbstractTableModel::fireTableDataChanged() {
	fireTableChanged($$new($TableModelEvent, this));
}

void AbstractTableModel::fireTableStructureChanged() {
	fireTableChanged($$new($TableModelEvent, this, $TableModelEvent::HEADER_ROW));
}

void AbstractTableModel::fireTableRowsInserted(int32_t firstRow, int32_t lastRow) {
	fireTableChanged($$new($TableModelEvent, this, firstRow, lastRow, $TableModelEvent::ALL_COLUMNS, $TableModelEvent::INSERT));
}

void AbstractTableModel::fireTableRowsUpdated(int32_t firstRow, int32_t lastRow) {
	fireTableChanged($$new($TableModelEvent, this, firstRow, lastRow, $TableModelEvent::ALL_COLUMNS, $TableModelEvent::UPDATE));
}

void AbstractTableModel::fireTableRowsDeleted(int32_t firstRow, int32_t lastRow) {
	fireTableChanged($$new($TableModelEvent, this, firstRow, lastRow, $TableModelEvent::ALL_COLUMNS, $TableModelEvent::DELETE));
}

void AbstractTableModel::fireTableCellUpdated(int32_t row, int32_t column) {
	fireTableChanged($$new($TableModelEvent, this, row, row, column));
}

void AbstractTableModel::fireTableChanged($TableModelEvent* e) {
	$var($ObjectArray, listeners, $nc(this->listenerList)->getListenerList());
	for (int32_t i = $nc(listeners)->length - 2; i >= 0; i -= 2) {
		$load($TableModelListener);
		if ($equals(listeners->get(i), $TableModelListener::class$)) {
			$nc(($cast($TableModelListener, listeners->get(i + 1))))->tableChanged(e);
		}
	}
}

$EventListenerArray* AbstractTableModel::getListeners($Class* listenerType) {
	return $nc(this->listenerList)->getListeners(listenerType);
}

AbstractTableModel::AbstractTableModel() {
}

$Class* AbstractTableModel::load$($String* name, bool initialize) {
	$loadClass(AbstractTableModel, name, initialize, &_AbstractTableModel_ClassInfo_, allocate$AbstractTableModel);
	return class$;
}

$Class* AbstractTableModel::class$ = nullptr;

		} // table
	} // swing
} // javax