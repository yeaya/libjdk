#include <sun/swing/FilePane$SortableListModel.h>
#include <javax/swing/AbstractListModel.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/event/RowSorterEvent.h>
#include <javax/swing/event/TableModelEvent.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <sun/swing/FilePane$DetailsTableModel.h>
#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractListModel = ::javax::swing::AbstractListModel;
using $RowSorterEvent = ::javax::swing::event::RowSorterEvent;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;
using $FilePane = ::sun::swing::FilePane;

namespace sun {
	namespace swing {

int32_t FilePane$SortableListModel::hashCode() {
	 return this->$AbstractListModel::hashCode();
}

bool FilePane$SortableListModel::equals(Object$* arg0) {
	 return this->$AbstractListModel::equals(arg0);
}

$Object* FilePane$SortableListModel::clone() {
	 return this->$AbstractListModel::clone();
}

$String* FilePane$SortableListModel::toString() {
	 return this->$AbstractListModel::toString();
}

void FilePane$SortableListModel::finalize() {
	this->$AbstractListModel::finalize();
}

void FilePane$SortableListModel::init$($FilePane* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$AbstractListModel::init$();
	$$nc(this$0->getDetailsTableModel())->addTableModelListener(this);
	$$nc(this$0->getRowSorter())->addRowSorterListener(this);
}

int32_t FilePane$SortableListModel::getSize() {
	return $$nc(this->this$0->getModel())->getSize();
}

$Object* FilePane$SortableListModel::getElementAt(int32_t index) {
	$useLocalObjectStack();
	return $$nc(this->this$0->getModel())->getElementAt($$nc(this->this$0->getRowSorter())->convertRowIndexToModel(index));
}

void FilePane$SortableListModel::tableChanged($TableModelEvent* e) {
	fireContentsChanged(this, 0, getSize());
}

void FilePane$SortableListModel::sorterChanged($RowSorterEvent* e) {
	fireContentsChanged(this, 0, getSize());
}

FilePane$SortableListModel::FilePane$SortableListModel() {
}

$Class* FilePane$SortableListModel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$SortableListModel, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lsun/swing/FilePane;)V", nullptr, $PUBLIC, $method(FilePane$SortableListModel, init$, void, $FilePane*)},
		{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FilePane$SortableListModel, getElementAt, $Object*, int32_t)},
		{"getSize", "()I", nullptr, $PUBLIC, $virtualMethod(FilePane$SortableListModel, getSize, int32_t)},
		{"sorterChanged", "(Ljavax/swing/event/RowSorterEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$SortableListModel, sorterChanged, void, $RowSorterEvent*)},
		{"tableChanged", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$SortableListModel, tableChanged, void, $TableModelEvent*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$SortableListModel", "sun.swing.FilePane", "SortableListModel", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$SortableListModel",
		"javax.swing.AbstractListModel",
		"javax.swing.event.TableModelListener,javax.swing.event.RowSorterListener",
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/AbstractListModel<Ljava/lang/Object;>;Ljavax/swing/event/TableModelListener;Ljavax/swing/event/RowSorterListener;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.FilePane"
	};
	$loadClass(FilePane$SortableListModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(FilePane$SortableListModel));
	});
	return class$;
}

$Class* FilePane$SortableListModel::class$ = nullptr;

	} // swing
} // sun