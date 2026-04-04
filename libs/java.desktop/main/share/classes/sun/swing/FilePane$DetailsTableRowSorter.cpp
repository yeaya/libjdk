#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <java/util/Comparator.h>
#include <javax/swing/DefaultRowSorter.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter.h>
#include <sun/awt/shell/ShellFolder.h>
#include <sun/awt/shell/ShellFolderColumnInfo.h>
#include <sun/swing/FilePane$DetailsTableModel.h>
#include <sun/swing/FilePane$DetailsTableRowSorter$1.h>
#include <sun/swing/FilePane$DetailsTableRowSorter$2.h>
#include <sun/swing/FilePane$DetailsTableRowSorter$SorterModelWrapper.h>
#include <sun/swing/FilePane$DirectoriesFirstComparatorWrapper.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ShellFolderColumnInfoArray = $Array<::sun::awt::shell::ShellFolderColumnInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $TableModel = ::javax::swing::table::TableModel;
using $TableRowSorter = ::javax::swing::table::TableRowSorter;
using $ShellFolder = ::sun::awt::shell::ShellFolder;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$DetailsTableRowSorter$1 = ::sun::swing::FilePane$DetailsTableRowSorter$1;
using $FilePane$DetailsTableRowSorter$2 = ::sun::swing::FilePane$DetailsTableRowSorter$2;
using $FilePane$DetailsTableRowSorter$SorterModelWrapper = ::sun::swing::FilePane$DetailsTableRowSorter$SorterModelWrapper;
using $FilePane$DirectoriesFirstComparatorWrapper = ::sun::swing::FilePane$DirectoriesFirstComparatorWrapper;

namespace sun {
	namespace swing {

void FilePane$DetailsTableRowSorter::access$001(FilePane$DetailsTableRowSorter* x0) {
	$init(FilePane$DetailsTableRowSorter);
	$nc(x0)->$TableRowSorter::sort();
}

void FilePane$DetailsTableRowSorter::init$($FilePane* this$0) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$TableRowSorter::init$();
	$var($FilePane$DetailsTableRowSorter$SorterModelWrapper, modelWrapper, $new($FilePane$DetailsTableRowSorter$SorterModelWrapper, this));
	setModelWrapper(modelWrapper);
	$$sure($TableModel, modelWrapper->getModel())->addTableModelListener($$new($FilePane$DetailsTableRowSorter$1, this, this$0));
}

void FilePane$DetailsTableRowSorter::updateComparators($ShellFolderColumnInfoArray* columns) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(columns)->length; ++i) {
		$var($Comparator, c, $nc(columns->get(i))->getComparator());
		if (c != nullptr) {
			$assign(c, $new($FilePane$DirectoriesFirstComparatorWrapper, this->this$0, i, c));
		}
		setComparator(i, c);
	}
}

void FilePane$DetailsTableRowSorter::sort() {
	$ShellFolder::invoke($$new($FilePane$DetailsTableRowSorter$2, this));
}

void FilePane$DetailsTableRowSorter::modelStructureChanged() {
	$TableRowSorter::modelStructureChanged();
	updateComparators($($nc(this->this$0->detailsTableModel)->getColumns()));
}

FilePane$DetailsTableRowSorter::FilePane$DetailsTableRowSorter() {
}

$Class* FilePane$DetailsTableRowSorter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableRowSorter, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane;)V", nullptr, $PUBLIC, $method(FilePane$DetailsTableRowSorter, init$, void, $FilePane*)},
		{"access$001", "(Lsun/swing/FilePane$DetailsTableRowSorter;)V", nullptr, $STATIC | $SYNTHETIC, $staticMethod(FilePane$DetailsTableRowSorter, access$001, void, FilePane$DetailsTableRowSorter*)},
		{"modelStructureChanged", "()V", nullptr, $PUBLIC, $virtualMethod(FilePane$DetailsTableRowSorter, modelStructureChanged, void)},
		{"sort", "()V", nullptr, $PUBLIC, $virtualMethod(FilePane$DetailsTableRowSorter, sort, void)},
		{"updateComparators", "([Lsun/awt/shell/ShellFolderColumnInfo;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$DetailsTableRowSorter, updateComparators, void, $ShellFolderColumnInfoArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$DetailsTableRowSorter", "sun.swing.FilePane", "DetailsTableRowSorter", $PRIVATE},
		{"sun.swing.FilePane$DetailsTableRowSorter$SorterModelWrapper", "sun.swing.FilePane$DetailsTableRowSorter", "SorterModelWrapper", $PRIVATE},
		{"sun.swing.FilePane$DetailsTableRowSorter$2", nullptr, nullptr, 0},
		{"sun.swing.FilePane$DetailsTableRowSorter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$DetailsTableRowSorter",
		"javax.swing.table.TableRowSorter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/table/TableRowSorter<Ljavax/swing/table/TableModel;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.FilePane"
	};
	$loadClass(FilePane$DetailsTableRowSorter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePane$DetailsTableRowSorter);
	});
	return class$;
}

$Class* FilePane$DetailsTableRowSorter::class$ = nullptr;

	} // swing
} // sun