#include <sun/swing/FilePane$DetailsTableRowSorter$1.h>
#include <javax/swing/event/TableModelEvent.h>
#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TableModelEvent = ::javax::swing::event::TableModelEvent;
using $FilePane = ::sun::swing::FilePane;
using $FilePane$DetailsTableRowSorter = ::sun::swing::FilePane$DetailsTableRowSorter;

namespace sun {
	namespace swing {

void FilePane$DetailsTableRowSorter$1::init$($FilePane$DetailsTableRowSorter* this$1, $FilePane* val$this$0) {
	$set(this, this$1, this$1);
	$set(this, val$this$0, val$this$0);
}

void FilePane$DetailsTableRowSorter$1::tableChanged($TableModelEvent* e) {
	this->this$1->modelStructureChanged();
}

FilePane$DetailsTableRowSorter$1::FilePane$DetailsTableRowSorter$1() {
}

$Class* FilePane$DetailsTableRowSorter$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/swing/FilePane$DetailsTableRowSorter;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableRowSorter$1, this$1)},
		{"val$this$0", "Lsun/swing/FilePane;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableRowSorter$1, val$this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane$DetailsTableRowSorter;Lsun/swing/FilePane;)V", "()V", 0, $method(FilePane$DetailsTableRowSorter$1, init$, void, $FilePane$DetailsTableRowSorter*, $FilePane*)},
		{"tableChanged", "(Ljavax/swing/event/TableModelEvent;)V", nullptr, $PUBLIC, $virtualMethod(FilePane$DetailsTableRowSorter$1, tableChanged, void, $TableModelEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.FilePane$DetailsTableRowSorter",
		"<init>",
		"(Lsun/swing/FilePane;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$DetailsTableRowSorter", "sun.swing.FilePane", "DetailsTableRowSorter", $PRIVATE},
		{"sun.swing.FilePane$DetailsTableRowSorter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$DetailsTableRowSorter$1",
		"java.lang.Object",
		"javax.swing.event.TableModelListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.FilePane"
	};
	$loadClass(FilePane$DetailsTableRowSorter$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePane$DetailsTableRowSorter$1);
	});
	return class$;
}

$Class* FilePane$DetailsTableRowSorter$1::class$ = nullptr;

	} // swing
} // sun