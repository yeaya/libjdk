#include <javax/swing/table/TableRowSorter$TableRowSorterModelWrapper.h>
#include <javax/swing/DefaultRowSorter$ModelWrapper.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter.h>
#include <javax/swing/table/TableStringConverter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultRowSorter$ModelWrapper = ::javax::swing::DefaultRowSorter$ModelWrapper;
using $TableRowSorter = ::javax::swing::table::TableRowSorter;
using $TableStringConverter = ::javax::swing::table::TableStringConverter;

namespace javax {
	namespace swing {
		namespace table {

void TableRowSorter$TableRowSorterModelWrapper::init$($TableRowSorter* this$0) {
	$set(this, this$0, this$0);
	$DefaultRowSorter$ModelWrapper::init$();
}

$Object* TableRowSorter$TableRowSorterModelWrapper::getModel() {
	return this->this$0->tableModel;
}

int32_t TableRowSorter$TableRowSorterModelWrapper::getColumnCount() {
	return (this->this$0->tableModel == nullptr) ? 0 : this->this$0->tableModel->getColumnCount();
}

int32_t TableRowSorter$TableRowSorterModelWrapper::getRowCount() {
	return (this->this$0->tableModel == nullptr) ? 0 : this->this$0->tableModel->getRowCount();
}

$Object* TableRowSorter$TableRowSorterModelWrapper::getValueAt(int32_t row, int32_t column) {
	return $nc(this->this$0->tableModel)->getValueAt(row, column);
}

$String* TableRowSorter$TableRowSorterModelWrapper::getStringValueAt(int32_t row, int32_t column) {
	$useLocalObjectStack();
	$var($TableStringConverter, converter, this->this$0->getStringConverter());
	if (converter != nullptr) {
		$var($String, value, converter->toString(this->this$0->tableModel, row, column));
		if (value != nullptr) {
			return value;
		}
		return ""_s;
	}
	$var($Object, o, getValueAt(row, column));
	if (o == nullptr) {
		return ""_s;
	}
	$var($String, string, $nc(o)->toString());
	if (string == nullptr) {
		return ""_s;
	}
	return string;
}

$Object* TableRowSorter$TableRowSorterModelWrapper::getIdentifier(int32_t index) {
	return $of($Integer::valueOf(index));
}

TableRowSorter$TableRowSorterModelWrapper::TableRowSorter$TableRowSorterModelWrapper() {
}

$Class* TableRowSorter$TableRowSorterModelWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/table/TableRowSorter;", nullptr, $FINAL | $SYNTHETIC, $field(TableRowSorter$TableRowSorterModelWrapper, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/table/TableRowSorter;)V", nullptr, $PRIVATE, $method(TableRowSorter$TableRowSorterModelWrapper, init$, void, $TableRowSorter*)},
		{"getColumnCount", "()I", nullptr, $PUBLIC, $virtualMethod(TableRowSorter$TableRowSorterModelWrapper, getColumnCount, int32_t)},
		{"getIdentifier", "(I)Ljava/lang/Integer;", nullptr, $PUBLIC, $virtualMethod(TableRowSorter$TableRowSorterModelWrapper, getIdentifier, $Object*, int32_t)},
		{"getModel", "()Ljavax/swing/table/TableModel;", "()TM;", $PUBLIC, $virtualMethod(TableRowSorter$TableRowSorterModelWrapper, getModel, $Object*)},
		{"getRowCount", "()I", nullptr, $PUBLIC, $virtualMethod(TableRowSorter$TableRowSorterModelWrapper, getRowCount, int32_t)},
		{"getStringValueAt", "(II)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TableRowSorter$TableRowSorterModelWrapper, getStringValueAt, $String*, int32_t, int32_t)},
		{"getValueAt", "(II)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TableRowSorter$TableRowSorterModelWrapper, getValueAt, $Object*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.table.TableRowSorter$TableRowSorterModelWrapper", "javax.swing.table.TableRowSorter", "TableRowSorterModelWrapper", $PRIVATE},
		{"javax.swing.DefaultRowSorter$ModelWrapper", "javax.swing.DefaultRowSorter", "ModelWrapper", $PROTECTED | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.table.TableRowSorter$TableRowSorterModelWrapper",
		"javax.swing.DefaultRowSorter$ModelWrapper",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/DefaultRowSorter$ModelWrapper<TM;Ljava/lang/Integer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.table.TableRowSorter"
	};
	$loadClass(TableRowSorter$TableRowSorterModelWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TableRowSorter$TableRowSorterModelWrapper);
	});
	return class$;
}

$Class* TableRowSorter$TableRowSorterModelWrapper::class$ = nullptr;

		} // table
	} // swing
} // javax