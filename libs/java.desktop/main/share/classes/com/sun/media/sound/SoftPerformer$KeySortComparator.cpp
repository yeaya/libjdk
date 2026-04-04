#include <com/sun/media/sound/SoftPerformer$KeySortComparator.h>
#include <com/sun/media/sound/ModelIdentifier.h>
#include <com/sun/media/sound/ModelSource.h>
#include <com/sun/media/sound/SoftPerformer.h>
#include <jcpp.h>

using $ModelSource = ::com::sun::media::sound::ModelSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftPerformer$KeySortComparator::init$() {
}

int32_t SoftPerformer$KeySortComparator::compare($ModelSource* o1, $ModelSource* o2) {
	$useLocalObjectStack();
	return $$nc($$nc($nc(o1)->getIdentifier())->toString())->compareTo($($$nc($nc(o2)->getIdentifier())->toString()));
}

int32_t SoftPerformer$KeySortComparator::compare(Object$* o1, Object$* o2) {
	return this->compare($cast($ModelSource, o1), $cast($ModelSource, o2));
}

SoftPerformer$KeySortComparator::SoftPerformer$KeySortComparator() {
}

$Class* SoftPerformer$KeySortComparator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SoftPerformer$KeySortComparator, init$, void)},
		{"compare", "(Lcom/sun/media/sound/ModelSource;Lcom/sun/media/sound/ModelSource;)I", nullptr, $PUBLIC, $virtualMethod(SoftPerformer$KeySortComparator, compare, int32_t, $ModelSource*, $ModelSource*)},
		{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(SoftPerformer$KeySortComparator, compare, int32_t, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftPerformer$KeySortComparator", "com.sun.media.sound.SoftPerformer", "KeySortComparator", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftPerformer$KeySortComparator",
		"java.lang.Object",
		"java.util.Comparator",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/Comparator<Lcom/sun/media/sound/ModelSource;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftPerformer"
	};
	$loadClass(SoftPerformer$KeySortComparator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftPerformer$KeySortComparator);
	});
	return class$;
}

$Class* SoftPerformer$KeySortComparator::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com