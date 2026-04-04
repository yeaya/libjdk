#include <javax/swing/RowSorter$SortKey.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SortOrder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SortOrder = ::javax::swing::SortOrder;

namespace javax {
	namespace swing {

void RowSorter$SortKey::init$(int32_t column, $SortOrder* sortOrder) {
	if (sortOrder == nullptr) {
		$throwNew($IllegalArgumentException, "sort order must be non-null"_s);
	}
	this->column = column;
	$set(this, sortOrder, sortOrder);
}

int32_t RowSorter$SortKey::getColumn() {
	return this->column;
}

$SortOrder* RowSorter$SortKey::getSortOrder() {
	return this->sortOrder;
}

int32_t RowSorter$SortKey::hashCode() {
	int32_t result = 17;
	result = 37 * result + this->column;
	result = 37 * result + $nc(this->sortOrder)->hashCode();
	return result;
}

bool RowSorter$SortKey::equals(Object$* o) {
	if ($equals(o, this)) {
		return true;
	}
	if ($instanceOf(RowSorter$SortKey, o)) {
		return ($cast(RowSorter$SortKey, o)->column == this->column && $cast(RowSorter$SortKey, o)->sortOrder == this->sortOrder);
	}
	return false;
}

RowSorter$SortKey::RowSorter$SortKey() {
}

$Class* RowSorter$SortKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"column", "I", nullptr, $PRIVATE, $field(RowSorter$SortKey, column)},
		{"sortOrder", "Ljavax/swing/SortOrder;", nullptr, $PRIVATE, $field(RowSorter$SortKey, sortOrder)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjavax/swing/SortOrder;)V", nullptr, $PUBLIC, $method(RowSorter$SortKey, init$, void, int32_t, $SortOrder*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(RowSorter$SortKey, equals, bool, Object$*)},
		{"getColumn", "()I", nullptr, $PUBLIC | $FINAL, $method(RowSorter$SortKey, getColumn, int32_t)},
		{"getSortOrder", "()Ljavax/swing/SortOrder;", nullptr, $PUBLIC | $FINAL, $method(RowSorter$SortKey, getSortOrder, $SortOrder*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(RowSorter$SortKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RowSorter$SortKey", "javax.swing.RowSorter", "SortKey", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.RowSorter$SortKey",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.RowSorter"
	};
	$loadClass(RowSorter$SortKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowSorter$SortKey);
	});
	return class$;
}

$Class* RowSorter$SortKey::class$ = nullptr;

	} // swing
} // javax