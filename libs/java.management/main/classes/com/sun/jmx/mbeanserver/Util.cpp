#include <com/sun/jmx/mbeanserver/Util.h>

#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/LinkedHashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/NavigableMap.h>
#include <java/util/Set.h>
#include <java/util/SortedMap.h>
#include <java/util/TreeMap.h>
#include <javax/management/JMException.h>
#include <javax/management/MalformedObjectNameException.h>
#include <javax/management/ObjectName.h>
#include <javax/management/OperationsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $LinkedHashMap = ::java::util::LinkedHashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $NavigableMap = ::java::util::NavigableMap;
using $Set = ::java::util::Set;
using $SortedMap = ::java::util::SortedMap;
using $TreeMap = ::java::util::TreeMap;
using $JMException = ::javax::management::JMException;
using $MalformedObjectNameException = ::javax::management::MalformedObjectNameException;
using $ObjectName = ::javax::management::ObjectName;
using $OperationsException = ::javax::management::OperationsException;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

$MethodInfo _Util_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Util, init$, void)},
	{"cast", "(Ljava/lang/Object;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/lang/Object;)TT;", $PUBLIC | $STATIC, $staticMethod(Util, cast, $Object*, Object$*)},
	{"hashCode", "([Ljava/lang/String;[Ljava/lang/Object;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, hashCode, int32_t, $StringArray*, $ObjectArray*)},
	{"newIdentityHashMap", "()Ljava/util/IdentityHashMap;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Ljava/util/IdentityHashMap<TK;TV;>;", $STATIC, $staticMethod(Util, newIdentityHashMap, $IdentityHashMap*)},
	{"newInsertionOrderMap", "()Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Ljava/util/Map<TK;TV;>;", $STATIC, $staticMethod(Util, newInsertionOrderMap, $Map*)},
	{"newList", "()Ljava/util/List;", "<E:Ljava/lang/Object;>()Ljava/util/List<TE;>;", $STATIC, $staticMethod(Util, newList, $List*)},
	{"newList", "(Ljava/util/Collection;)Ljava/util/List;", "<E:Ljava/lang/Object;>(Ljava/util/Collection<TE;>;)Ljava/util/List<TE;>;", $STATIC, $staticMethod(Util, newList, $List*, $Collection*)},
	{"newMap", "()Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Ljava/util/Map<TK;TV;>;", $STATIC, $staticMethod(Util, newMap, $Map*)},
	{"newObjectName", "(Ljava/lang/String;)Ljavax/management/ObjectName;", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, newObjectName, $ObjectName*, $String*)},
	{"newSet", "()Ljava/util/Set;", "<E:Ljava/lang/Object;>()Ljava/util/Set<TE;>;", $STATIC, $staticMethod(Util, newSet, $Set*)},
	{"newSet", "(Ljava/util/Collection;)Ljava/util/Set;", "<E:Ljava/lang/Object;>(Ljava/util/Collection<TE;>;)Ljava/util/Set<TE;>;", $STATIC, $staticMethod(Util, newSet, $Set*, $Collection*)},
	{"newSortedMap", "()Ljava/util/SortedMap;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Ljava/util/SortedMap<TK;TV;>;", $STATIC, $staticMethod(Util, newSortedMap, $SortedMap*)},
	{"newSortedMap", "(Ljava/util/Comparator;)Ljava/util/SortedMap;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>(Ljava/util/Comparator<-TK;>;)Ljava/util/SortedMap<TK;TV;>;", $STATIC, $staticMethod(Util, newSortedMap, $SortedMap*, $Comparator*)},
	{"newSynchronizedIdentityHashMap", "()Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Ljava/util/Map<TK;TV;>;", $STATIC, $staticMethod(Util, newSynchronizedIdentityHashMap, $Map*)},
	{"newSynchronizedMap", "()Ljava/util/Map;", "<K:Ljava/lang/Object;V:Ljava/lang/Object;>()Ljava/util/Map<TK;TV;>;", $STATIC, $staticMethod(Util, newSynchronizedMap, $Map*)},
	{"wildmatch", "(Ljava/lang/String;Ljava/lang/String;IIII)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Util, wildmatch, bool, $String*, $String*, int32_t, int32_t, int32_t, int32_t)},
	{"wildmatch", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Util, wildmatch, bool, $String*, $String*)},
	{}
};

$ClassInfo _Util_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.jmx.mbeanserver.Util",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Util_MethodInfo_
};

$Object* allocate$Util($Class* clazz) {
	return $of($alloc(Util));
}

void Util::init$() {
}

$ObjectName* Util::newObjectName($String* string) {
	try {
		return $new($ObjectName, string);
	} catch ($MalformedObjectNameException& e) {
		$throwNew($IllegalArgumentException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$Map* Util::newMap() {
	return $new($HashMap);
}

$Map* Util::newSynchronizedMap() {
	return $Collections::synchronizedMap($(Util::newMap()));
}

$IdentityHashMap* Util::newIdentityHashMap() {
	return $new($IdentityHashMap);
}

$Map* Util::newSynchronizedIdentityHashMap() {
	$var($Map, map, newIdentityHashMap());
	return $Collections::synchronizedMap(map);
}

$SortedMap* Util::newSortedMap() {
	return $new($TreeMap);
}

$SortedMap* Util::newSortedMap($Comparator* comp) {
	return $new($TreeMap, comp);
}

$Map* Util::newInsertionOrderMap() {
	return $new($LinkedHashMap);
}

$Set* Util::newSet() {
	return $new($HashSet);
}

$Set* Util::newSet($Collection* c) {
	return $new($HashSet, c);
}

$List* Util::newList() {
	return $new($ArrayList);
}

$List* Util::newList($Collection* c) {
	return $new($ArrayList, c);
}

$Object* Util::cast(Object$* x) {
	return $of(x);
}

int32_t Util::hashCode($StringArray* names, $ObjectArray* values) {
	$useLocalCurrentObjectStackCache();
	int32_t hash = 0;
	for (int32_t i = 0; i < $nc(names)->length; ++i) {
		$var($Object0, v, $nc(values)->get(i));
		int32_t h = 0;
		if (v == nullptr) {
			h = 0;
		} else if ($instanceOf($ObjectArray, v)) {
			h = $Arrays::deepHashCode($cast($ObjectArray, v));
		} else if ($nc($of(v))->getClass()->isArray()) {
			h = $Arrays::deepHashCode($$new($ObjectArray, {v})) - 31;
		} else {
			h = $of(v)->hashCode();
		}
		hash += $($nc(names->get(i))->toLowerCase())->hashCode() ^ h;
	}
	return hash;
}

bool Util::wildmatch($String* str, $String* pat, int32_t stri, int32_t strend, int32_t pati, int32_t patend) {
	int32_t starstri = 0;
	int32_t starpati = 0;
	starstri = (starpati = -1);
	while (true) {
		if (pati < patend) {
			char16_t patc = $nc(pat)->charAt(pati);
			switch (patc) {
			case u'?':
				{
					if (stri == strend) {
						break;
					}
					++stri;
					++pati;
					continue;
				}
			case u'*':
				{
					++pati;
					starpati = pati;
					starstri = stri;
					continue;
				}
			default:
				{
					if (stri < strend && $nc(str)->charAt(stri) == patc) {
						++stri;
						++pati;
						continue;
					}
					break;
				}
			}
		} else if (stri == strend) {
			return true;
		}
		if (starpati < 0 || starstri == strend) {
			return false;
		}
		pati = starpati;
		++starstri;
		stri = starstri;
	}
}

bool Util::wildmatch($String* str, $String* pat) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, str);
	$var($String, var$1, pat);
	int32_t var$2 = $nc(str)->length();
	return wildmatch(var$0, var$1, 0, var$2, 0, $nc(pat)->length());
}

Util::Util() {
}

$Class* Util::load$($String* name, bool initialize) {
	$loadClass(Util, name, initialize, &_Util_ClassInfo_, allocate$Util);
	return class$;
}

$Class* Util::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com