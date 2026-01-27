#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_BMPattern_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_BMPattern_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.BMPattern
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace text {
		class CharacterIterator;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

class BMPattern : public ::java::lang::Object {
	$class(BMPattern, $NO_CLASS_INIT, ::java::lang::Object)
public:
	BMPattern();
	void init$($String* pat, bool ignoreCase);
	void init$($String* pat, int32_t tableSize, bool ignoreCase);
	virtual int32_t matches(::java::text::CharacterIterator* iterator, int32_t start, int32_t limit);
	virtual int32_t matches($String* str, int32_t start, int32_t limit);
	virtual int32_t matches($chars* chars, int32_t start, int32_t limit);
	virtual int32_t matchesIgnoreCase(::java::text::CharacterIterator* iterator, int32_t start, int32_t limit);
	virtual int32_t matchesIgnoreCase($String* text, int32_t start, int32_t limit);
	virtual int32_t matchesIgnoreCase($chars* chars, int32_t start, int32_t limit);
	$chars* pattern = nullptr;
	$ints* shiftTable = nullptr;
	bool ignoreCase = false;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_BMPattern_h_