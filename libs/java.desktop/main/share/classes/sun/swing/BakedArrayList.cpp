#include <sun/swing/BakedArrayList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace sun {
	namespace swing {

void BakedArrayList::init$(int32_t size) {
	$ArrayList::init$(size);
}

void BakedArrayList::init$($List* data) {
	$useLocalObjectStack();
	BakedArrayList::init$($nc(data)->size());
	for (int32_t counter = 0, max = data->size(); counter < max; ++counter) {
		add($(data->get(counter)));
	}
	cacheHashCode();
}

void BakedArrayList::cacheHashCode() {
	$useLocalObjectStack();
	this->_hashCode = 1;
	for (int32_t counter = size() - 1; counter >= 0; --counter) {
		this->_hashCode = 31 * this->_hashCode + $$nc(get(counter))->hashCode();
	}
}

int32_t BakedArrayList::hashCode() {
	return this->_hashCode;
}

bool BakedArrayList::equals(Object$* o) {
	$useLocalObjectStack();
	$var(BakedArrayList, list, $cast(BakedArrayList, o));
	int32_t size = this->size();
	if ($nc(list)->size() != size) {
		return false;
	}
	while (size-- > 0) {
		if (!$$nc(get(size))->equals($(list->get(size)))) {
			return false;
		}
	}
	return true;
}

BakedArrayList::BakedArrayList() {
}

$Class* BakedArrayList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_hashCode", "I", nullptr, $PRIVATE, $field(BakedArrayList, _hashCode)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(BakedArrayList, init$, void, int32_t)},
		{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<+TE;>;)V", $PUBLIC, $method(BakedArrayList, init$, void, $List*)},
		{"cacheHashCode", "()V", nullptr, $PUBLIC, $virtualMethod(BakedArrayList, cacheHashCode, void)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BakedArrayList, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(BakedArrayList, hashCode, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.swing.BakedArrayList",
		"java.util.ArrayList",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/util/ArrayList<TE;>;"
	};
	$loadClass(BakedArrayList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BakedArrayList));
	});
	return class$;
}

$Class* BakedArrayList::class$ = nullptr;

	} // swing
} // sun