#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_CaseInsensitiveMap_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_CaseInsensitiveMap_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.CaseInsensitiveMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHUNK_MASK")
#undef CHUNK_MASK
#pragma push_macro("CHUNK_SHIFT")
#undef CHUNK_SHIFT
#pragma push_macro("CHUNK_SIZE")
#undef CHUNK_SIZE
#pragma push_macro("INITIAL_CHUNK_COUNT")
#undef INITIAL_CHUNK_COUNT
#pragma push_macro("LOWER_CASE_MATCH")
#undef LOWER_CASE_MATCH
#pragma push_macro("UPPER_CASE_MATCH")
#undef UPPER_CASE_MATCH

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

class CaseInsensitiveMap : public ::java::lang::Object {
	$class(CaseInsensitiveMap, 0, ::java::lang::Object)
public:
	CaseInsensitiveMap();
	void init$();
	static void buildCaseInsensitiveMap();
	static bool contains($ints* map, int32_t codePoint);
	static bool contains($ints* map, int32_t codePoint, int32_t matchType);
	static $ints* expandAndAdd($ints* srcMap, int32_t codePoint, int32_t matchType);
	static $ints* expandMap($ints* srcMap, int32_t expandBy);
	static $ints* get(int32_t codePoint);
	static $ints* getMapping(int32_t codePoint);
	static void set(int32_t codePoint, $ints* map);
	static $ints* updateMap(int32_t codePoint, $ints* codePointMap, int32_t ciCodePoint, $ints* ciCodePointMap, int32_t matchType);
	static const int32_t CHUNK_SHIFT = 10;
	static const int32_t CHUNK_SIZE = 1024; // (1 << CHUNK_SHIFT)
	static const int32_t CHUNK_MASK = 1023; // (CHUNK_SIZE - 1)
	static const int32_t INITIAL_CHUNK_COUNT = 64;
	static $Array<int32_t, 3>* caseInsensitiveMap;
	static const int32_t LOWER_CASE_MATCH = 1;
	static const int32_t UPPER_CASE_MATCH = 2;
};

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CHUNK_MASK")
#pragma pop_macro("CHUNK_SHIFT")
#pragma pop_macro("CHUNK_SIZE")
#pragma pop_macro("INITIAL_CHUNK_COUNT")
#pragma pop_macro("LOWER_CASE_MATCH")
#pragma pop_macro("UPPER_CASE_MATCH")

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_CaseInsensitiveMap_h_