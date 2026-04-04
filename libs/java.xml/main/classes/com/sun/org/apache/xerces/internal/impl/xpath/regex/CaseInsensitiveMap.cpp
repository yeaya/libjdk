#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/CaseInsensitiveMap.h>
#include <jcpp.h>

#undef CHUNK_MASK
#undef CHUNK_SHIFT
#undef CHUNK_SIZE
#undef INITIAL_CHUNK_COUNT
#undef LOWER_CASE_MATCH
#undef UPPER_CASE_MATCH

using $intArray3 = $Array<int32_t, 3>;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$intArray3* CaseInsensitiveMap::caseInsensitiveMap = nullptr;

void CaseInsensitiveMap::init$() {
}

$ints* CaseInsensitiveMap::get(int32_t codePoint) {
	$init(CaseInsensitiveMap);
	return (codePoint < 0x00010000) ? getMapping(codePoint) : ($ints*)nullptr;
}

$ints* CaseInsensitiveMap::getMapping(int32_t codePoint) {
	$init(CaseInsensitiveMap);
	int32_t chunk = $usr(codePoint, CaseInsensitiveMap::CHUNK_SHIFT);
	int32_t offset = codePoint & CaseInsensitiveMap::CHUNK_MASK;
	return $nc($nc(CaseInsensitiveMap::caseInsensitiveMap)->get(chunk))->get(offset);
}

void CaseInsensitiveMap::buildCaseInsensitiveMap() {
	$init(CaseInsensitiveMap);
	$useLocalObjectStack();
	$assignStatic(CaseInsensitiveMap::caseInsensitiveMap, $new($intArray3, CaseInsensitiveMap::INITIAL_CHUNK_COUNT, CaseInsensitiveMap::CHUNK_SIZE));
	int32_t lc = 0;
	int32_t uc = 0;
	for (int32_t i = 0; i < 0x00010000; ++i) {
		lc = $Character::toLowerCase(i);
		uc = $Character::toUpperCase(i);
		if (lc != uc || lc != i) {
			$var($ints, map, $new($ints, 2));
			int32_t index = 0;
			if (lc != i) {
				map->set(index++, lc);
				map->set(index++, CaseInsensitiveMap::LOWER_CASE_MATCH);
				$var($ints, lcMap, getMapping(lc));
				if (lcMap != nullptr) {
					$assign(map, updateMap(i, map, lc, lcMap, CaseInsensitiveMap::LOWER_CASE_MATCH));
				}
			}
			if (uc != i) {
				if (index == $nc(map)->length) {
					$assign(map, expandMap(map, 2));
				}
				$nc(map)->set(index++, uc);
				map->set(index++, CaseInsensitiveMap::UPPER_CASE_MATCH);
				$var($ints, ucMap, getMapping(uc));
				if (ucMap != nullptr) {
					$assign(map, updateMap(i, map, uc, ucMap, CaseInsensitiveMap::UPPER_CASE_MATCH));
				}
			}
			set(i, map);
		}
	}
}

$ints* CaseInsensitiveMap::expandMap($ints* srcMap, int32_t expandBy) {
	$init(CaseInsensitiveMap);
	int32_t oldLen = $nc(srcMap)->length;
	$var($ints, newMap, $new($ints, oldLen + expandBy));
	$System::arraycopy(srcMap, 0, newMap, 0, oldLen);
	return newMap;
}

void CaseInsensitiveMap::set(int32_t codePoint, $ints* map) {
	$init(CaseInsensitiveMap);
	int32_t chunk = $usr(codePoint, CaseInsensitiveMap::CHUNK_SHIFT);
	int32_t offset = codePoint & CaseInsensitiveMap::CHUNK_MASK;
	$nc($nc(CaseInsensitiveMap::caseInsensitiveMap)->get(chunk))->set(offset, map);
}

$ints* CaseInsensitiveMap::updateMap(int32_t codePoint, $ints* codePointMap$renamed, int32_t ciCodePoint, $ints* ciCodePointMap$renamed, int32_t matchType) {
	$init(CaseInsensitiveMap);
	$useLocalObjectStack();
	$var($ints, ciCodePointMap, ciCodePointMap$renamed);
	$var($ints, codePointMap, codePointMap$renamed);
	for (int32_t i = 0; i < $nc(ciCodePointMap)->length; i += 2) {
		int32_t c = ciCodePointMap->get(i);
		$var($ints, cMap, getMapping(c));
		if (cMap != nullptr) {
			if (contains(cMap, ciCodePoint, matchType)) {
				if (!contains(cMap, codePoint)) {
					$assign(cMap, expandAndAdd(cMap, codePoint, matchType));
					set(c, cMap);
				}
				if (!contains(codePointMap, c)) {
					$assign(codePointMap, expandAndAdd(codePointMap, c, matchType));
				}
			}
		}
	}
	if (!contains(ciCodePointMap, codePoint)) {
		$assign(ciCodePointMap, expandAndAdd(ciCodePointMap, codePoint, matchType));
		set(ciCodePoint, ciCodePointMap);
	}
	return codePointMap;
}

bool CaseInsensitiveMap::contains($ints* map, int32_t codePoint) {
	$init(CaseInsensitiveMap);
	for (int32_t i = 0; i < $nc(map)->length; i += 2) {
		if (map->get(i) == codePoint) {
			return true;
		}
	}
	return false;
}

bool CaseInsensitiveMap::contains($ints* map, int32_t codePoint, int32_t matchType) {
	$init(CaseInsensitiveMap);
	for (int32_t i = 0; i < $nc(map)->length; i += 2) {
		if (map->get(i) == codePoint && map->get(i + 1) == matchType) {
			return true;
		}
	}
	return false;
}

$ints* CaseInsensitiveMap::expandAndAdd($ints* srcMap, int32_t codePoint, int32_t matchType) {
	$init(CaseInsensitiveMap);
	int32_t oldLen = $nc(srcMap)->length;
	$var($ints, newMap, $new($ints, oldLen + 2));
	$System::arraycopy(srcMap, 0, newMap, 0, oldLen);
	newMap->set(oldLen, codePoint);
	newMap->set(oldLen + 1, matchType);
	return newMap;
}

void CaseInsensitiveMap::clinit$($Class* clazz) {
	{
		CaseInsensitiveMap::buildCaseInsensitiveMap();
	}
}

CaseInsensitiveMap::CaseInsensitiveMap() {
}

$Class* CaseInsensitiveMap::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CHUNK_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CaseInsensitiveMap, CHUNK_SHIFT)},
		{"CHUNK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CaseInsensitiveMap, CHUNK_SIZE)},
		{"CHUNK_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CaseInsensitiveMap, CHUNK_MASK)},
		{"INITIAL_CHUNK_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CaseInsensitiveMap, INITIAL_CHUNK_COUNT)},
		{"caseInsensitiveMap", "[[[I", nullptr, $PRIVATE | $STATIC, $staticField(CaseInsensitiveMap, caseInsensitiveMap)},
		{"LOWER_CASE_MATCH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CaseInsensitiveMap, LOWER_CASE_MATCH)},
		{"UPPER_CASE_MATCH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CaseInsensitiveMap, UPPER_CASE_MATCH)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CaseInsensitiveMap, init$, void)},
		{"buildCaseInsensitiveMap", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(CaseInsensitiveMap, buildCaseInsensitiveMap, void)},
		{"contains", "([II)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(CaseInsensitiveMap, contains, bool, $ints*, int32_t)},
		{"contains", "([III)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(CaseInsensitiveMap, contains, bool, $ints*, int32_t, int32_t)},
		{"expandAndAdd", "([III)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(CaseInsensitiveMap, expandAndAdd, $ints*, $ints*, int32_t, int32_t)},
		{"expandMap", "([II)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(CaseInsensitiveMap, expandMap, $ints*, $ints*, int32_t)},
		{"get", "(I)[I", nullptr, $PUBLIC | $STATIC, $staticMethod(CaseInsensitiveMap, get, $ints*, int32_t)},
		{"getMapping", "(I)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(CaseInsensitiveMap, getMapping, $ints*, int32_t)},
		{"set", "(I[I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(CaseInsensitiveMap, set, void, int32_t, $ints*)},
		{"updateMap", "(I[II[II)[I", nullptr, $PRIVATE | $STATIC, $staticMethod(CaseInsensitiveMap, updateMap, $ints*, int32_t, $ints*, int32_t, $ints*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.CaseInsensitiveMap",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CaseInsensitiveMap, name, initialize, &classInfo$$, CaseInsensitiveMap::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CaseInsensitiveMap);
	});
	return class$;
}

$Class* CaseInsensitiveMap::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com