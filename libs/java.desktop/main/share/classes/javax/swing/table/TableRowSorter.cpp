#include <javax/swing/table/TableRowSorter.h>
#include <java/lang/Comparable.h>
#include <java/text/Collator.h>
#include <java/util/Comparator.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter$ComparableComparator.h>
#include <javax/swing/table/TableRowSorter$TableRowSorterModelWrapper.h>
#include <javax/swing/table/TableStringConverter.h>
#include <jcpp.h>

#undef COMPARABLE_COMPARATOR

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collator = ::java::text::Collator;
using $Comparator = ::java::util::Comparator;
using $DefaultRowSorter = ::javax::swing::DefaultRowSorter;
using $TableModel = ::javax::swing::table::TableModel;
using $TableRowSorter$ComparableComparator = ::javax::swing::table::TableRowSorter$ComparableComparator;
using $TableRowSorter$TableRowSorterModelWrapper = ::javax::swing::table::TableRowSorter$TableRowSorterModelWrapper;
using $TableStringConverter = ::javax::swing::table::TableStringConverter;

namespace javax {
	namespace swing {
		namespace table {

$Comparator* TableRowSorter::COMPARABLE_COMPARATOR = nullptr;

void TableRowSorter::init$() {
	TableRowSorter::init$(nullptr);
}

void TableRowSorter::init$($TableModel* model) {
	$DefaultRowSorter::init$();
	setModel(model);
}

void TableRowSorter::setModel($TableModel* model) {
	$set(this, tableModel, model);
	setModelWrapper($$new($TableRowSorter$TableRowSorterModelWrapper, this));
}

void TableRowSorter::setStringConverter($TableStringConverter* stringConverter) {
	$set(this, stringConverter, stringConverter);
}

$TableStringConverter* TableRowSorter::getStringConverter() {
	return this->stringConverter;
}

$Comparator* TableRowSorter::getComparator(int32_t column) {
	$useLocalObjectStack();
	$var($Comparator, comparator, $DefaultRowSorter::getComparator(column));
	if (comparator != nullptr) {
		return comparator;
	}
	$Class* columnClass = $$sure($TableModel, getModel())->getColumnClass(column);
	if (columnClass == $String::class$) {
		return $Collator::getInstance();
	}
	$load($Comparable);
	if ($Comparable::class$->isAssignableFrom(columnClass)) {
		return TableRowSorter::COMPARABLE_COMPARATOR;
	}
	return $Collator::getInstance();
}

bool TableRowSorter::useToString(int32_t column) {
	$useLocalObjectStack();
	$var($Comparator, comparator, $DefaultRowSorter::getComparator(column));
	if (comparator != nullptr) {
		return false;
	}
	$Class* columnClass = $$sure($TableModel, getModel())->getColumnClass(column);
	if (columnClass == $String::class$) {
		return false;
	}
	$load($Comparable);
	if ($Comparable::class$->isAssignableFrom(columnClass)) {
		return false;
	}
	return true;
}

void TableRowSorter::clinit$($Class* clazz) {
	$assignStatic(TableRowSorter::COMPARABLE_COMPARATOR, $new($TableRowSorter$ComparableComparator));
}

TableRowSorter::TableRowSorter() {
}

$Class* TableRowSorter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"COMPARABLE_COMPARATOR", "Ljava/util/Comparator;", "Ljava/util/Comparator<*>;", $PRIVATE | $STATIC | $FINAL, $staticField(TableRowSorter, COMPARABLE_COMPARATOR)},
		{"tableModel", "Ljavax/swing/table/TableModel;", "TM;", $PRIVATE, $field(TableRowSorter, tableModel)},
		{"stringConverter", "Ljavax/swing/table/TableStringConverter;", nullptr, $PRIVATE, $field(TableRowSorter, stringConverter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TableRowSorter, init$, void)},
		{"<init>", "(Ljavax/swing/table/TableModel;)V", "(TM;)V", $PUBLIC, $method(TableRowSorter, init$, void, $TableModel*)},
		{"getComparator", "(I)Ljava/util/Comparator;", "(I)Ljava/util/Comparator<*>;", $PUBLIC, $virtualMethod(TableRowSorter, getComparator, $Comparator*, int32_t)},
		{"getStringConverter", "()Ljavax/swing/table/TableStringConverter;", nullptr, $PUBLIC, $virtualMethod(TableRowSorter, getStringConverter, $TableStringConverter*)},
		{"setModel", "(Ljavax/swing/table/TableModel;)V", "(TM;)V", $PUBLIC, $virtualMethod(TableRowSorter, setModel, void, $TableModel*)},
		{"setStringConverter", "(Ljavax/swing/table/TableStringConverter;)V", nullptr, $PUBLIC, $virtualMethod(TableRowSorter, setStringConverter, void, $TableStringConverter*)},
		{"useToString", "(I)Z", nullptr, $PROTECTED, $virtualMethod(TableRowSorter, useToString, bool, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.table.TableRowSorter$ComparableComparator", "javax.swing.table.TableRowSorter", "ComparableComparator", $PRIVATE | $STATIC},
		{"javax.swing.table.TableRowSorter$TableRowSorterModelWrapper", "javax.swing.table.TableRowSorter", "TableRowSorterModelWrapper", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.table.TableRowSorter",
		"javax.swing.DefaultRowSorter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<M::Ljavax/swing/table/TableModel;>Ljavax/swing/DefaultRowSorter<TM;Ljava/lang/Integer;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.table.TableRowSorter$ComparableComparator,javax.swing.table.TableRowSorter$TableRowSorterModelWrapper"
	};
	$loadClass(TableRowSorter, name, initialize, &classInfo$$, TableRowSorter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TableRowSorter);
	});
	return class$;
}

$Class* TableRowSorter::class$ = nullptr;

		} // table
	} // swing
} // javax