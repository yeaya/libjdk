#include <sun/swing/FilePane$DetailsTableRowSorter$2.h>
#include <sun/swing/FilePane$DetailsTableRowSorter.h>
#include <sun/swing/FilePane.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FilePane$DetailsTableRowSorter = ::sun::swing::FilePane$DetailsTableRowSorter;

namespace sun {
	namespace swing {

void FilePane$DetailsTableRowSorter$2::init$($FilePane$DetailsTableRowSorter* this$1) {
	$set(this, this$1, this$1);
}

$Object* FilePane$DetailsTableRowSorter$2::call() {
	$FilePane$DetailsTableRowSorter::access$001(this->this$1);
	return nullptr;
}

FilePane$DetailsTableRowSorter$2::FilePane$DetailsTableRowSorter$2() {
}

$Class* FilePane$DetailsTableRowSorter$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/swing/FilePane$DetailsTableRowSorter;", nullptr, $FINAL | $SYNTHETIC, $field(FilePane$DetailsTableRowSorter$2, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/FilePane$DetailsTableRowSorter;)V", nullptr, 0, $method(FilePane$DetailsTableRowSorter$2, init$, void, $FilePane$DetailsTableRowSorter*)},
		{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(FilePane$DetailsTableRowSorter$2, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.FilePane$DetailsTableRowSorter",
		"sort",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.FilePane$DetailsTableRowSorter", "sun.swing.FilePane", "DetailsTableRowSorter", $PRIVATE},
		{"sun.swing.FilePane$DetailsTableRowSorter$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.FilePane$DetailsTableRowSorter$2",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.FilePane"
	};
	$loadClass(FilePane$DetailsTableRowSorter$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FilePane$DetailsTableRowSorter$2);
	});
	return class$;
}

$Class* FilePane$DetailsTableRowSorter$2::class$ = nullptr;

	} // swing
} // sun