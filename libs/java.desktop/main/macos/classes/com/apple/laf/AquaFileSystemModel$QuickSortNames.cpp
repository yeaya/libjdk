#include <com/apple/laf/AquaFileSystemModel$QuickSortNames.h>
#include <com/apple/laf/AquaFileSystemModel$QuickSort.h>
#include <com/apple/laf/AquaFileSystemModel$SortableFile.h>
#include <com/apple/laf/AquaFileSystemModel.h>
#include <jcpp.h>

using $AquaFileSystemModel = ::com::apple::laf::AquaFileSystemModel;
using $AquaFileSystemModel$QuickSort = ::com::apple::laf::AquaFileSystemModel$QuickSort;
using $AquaFileSystemModel$SortableFile = ::com::apple::laf::AquaFileSystemModel$SortableFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaFileSystemModel$QuickSortNames::init$($AquaFileSystemModel* this$0) {
	$set(this, this$0, this$0);
	$AquaFileSystemModel$QuickSort::init$(this$0);
}

bool AquaFileSystemModel$QuickSortNames::lt($AquaFileSystemModel$SortableFile* a, $AquaFileSystemModel$SortableFile* b) {
	$useLocalObjectStack();
	$var($String, aLower, $nc($nc(a)->fName)->toLowerCase());
	$var($String, bLower, $nc($nc(b)->fName)->toLowerCase());
	return aLower->compareTo(bLower) < 0;
}

AquaFileSystemModel$QuickSortNames::AquaFileSystemModel$QuickSortNames() {
}

$Class* AquaFileSystemModel$QuickSortNames::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/apple/laf/AquaFileSystemModel;", nullptr, $FINAL | $SYNTHETIC, $field(AquaFileSystemModel$QuickSortNames, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaFileSystemModel;)V", nullptr, 0, $method(AquaFileSystemModel$QuickSortNames, init$, void, $AquaFileSystemModel*)},
		{"lt", "(Lcom/apple/laf/AquaFileSystemModel$SortableFile;Lcom/apple/laf/AquaFileSystemModel$SortableFile;)Z", nullptr, $PROTECTED, $virtualMethod(AquaFileSystemModel$QuickSortNames, lt, bool, $AquaFileSystemModel$SortableFile*, $AquaFileSystemModel$SortableFile*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaFileSystemModel$QuickSortNames", "com.apple.laf.AquaFileSystemModel", "QuickSortNames", 0},
		{"com.apple.laf.AquaFileSystemModel$QuickSort", "com.apple.laf.AquaFileSystemModel", "QuickSort", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaFileSystemModel$QuickSortNames",
		"com.apple.laf.AquaFileSystemModel$QuickSort",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaFileSystemModel"
	};
	$loadClass(AquaFileSystemModel$QuickSortNames, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaFileSystemModel$QuickSortNames);
	});
	return class$;
}

$Class* AquaFileSystemModel$QuickSortNames::class$ = nullptr;

		} // laf
	} // apple
} // com