#include <sun/swing/FilePane$DetailsTableRowSorter$SorterModelWrapper.h>
#include <javax/swing/DefaultRowSorter$ModelWrapper.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <sun/swing/FilePane$DetailsTableModel.h>
#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter$ModelWrapper = ::javax::swing::DefaultRowSorter$ModelWrapper;
using $FilePane$DetailsTableRowSorter = ::sun::swing::FilePane$DetailsTableRowSorter;

namespace sun {
	namespace swing {

void FilePane$DetailsTableRowSorter$SorterModelWrapper::init$($FilePane$DetailsTableRowSorter* this$1) {
	$set(this, this$1, this$1);
	$DefaultRowSorter$ModelWrapper::init$();
}

$Object* FilePane$DetailsTableRowSorter$SorterModelWrapper::getModel() {
	return $of($nc(this->this$1->this$0)->getDetailsTableModel());
}

int32_t FilePane$DetailsTableRowSorter$SorterModelWrapper::getColumnCount() {
	return $$nc($nc(this->this$1->this$0)->getDetailsTableModel())->getColumnCount();
}

int32_t FilePane$DetailsTableRowSorter$SorterModelWrapper::getRowCount() {
	return $$nc($nc(this->this$1->this$0)->getDetailsTableModel())->getRowCount();
}

$Object* FilePane$DetailsTableRowSorter$SorterModelWrapper::getValueAt(int32_t row, int32_t column) {
	return $$nc($nc(this->this$1->this$0)->getModel())->getElementAt(row);
}

$Object* FilePane$DetailsTableRowSorter$SorterModelWrapper::getIdentifier(int32_t row) {
	return $of($Integer::valueOf(row));
}

FilePane$DetailsTableRowSorter$SorterModelWrapper::FilePane$DetailsTableRowSorter$SorterModelWrapper() {
}

$Class* FilePane$DetailsTableRowSorter$SorterModelWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/swing/FilePane$DetailsTableRowSorter;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableRowSorter$SorterModelWrapper, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane$DetailsTableRowSorter;)V", nullptr, $PRIVATE, $method(FilePane$DetailsTableRowSorter$SorterModelWrapper, init$, void, $FilePane$DetailsTableRowSorter*)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(FilePane$DetailsTableRowSorter$SorterModelWrapper, getColumnCount, int32_t)},
		{"getIdentifier", "(I)Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(FilePane$DetailsTableRowSorter$SorterModelWrapper, getIdentifier, $Object*, int32_t)},
		{"getModel", "()Ljavax/swing/table/TableModel;", nullptr, $PUBLIC, $virtualMethod(FilePane$DetailsTableRowSorter$SorterModelWrapper, getModel, $Object*)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(FilePane$DetailsTableRowSorter$SorterModelWrapper, getRowCount, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FilePane$DetailsTableRowSorter$SorterModelWrapper, getValueAt, $Object*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$DetailsTableRowSorter", "sun.swing.FilePane", "DetailsTableRowSorter", $PRIVATE},
		{"sun.swing.FilePane$DetailsTableRowSorter$SorterModelWrapper", "sun.swing.FilePane$DetailsTableRowSorter", "SorterModelWrapper", $PRIVATE},
		{"javax.swing.DefaultRowSorter$ModelWrapper", "javax.swing.DefaultRowSorter", "ModelWrapper", $PROTECTED | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$DetailsTableRowSorter$SorterModelWrapper",
		"javax.swing.DefaultRowSorter$ModelWrapper",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/DefaultRowSorter$ModelWrapper<Ljavax/swing/table/TableModel;Ljava/lang/Integer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.FilePane"
	};
	$loadClass(FilePane$DetailsTableRowSorter$SorterModelWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePane$DetailsTableRowSorter$SorterModelWrapper);
	});
	return class$;
}

$Class* FilePane$DetailsTableRowSorter$SorterModelWrapper::class$ = nullptr;

	} // swing
} // sun