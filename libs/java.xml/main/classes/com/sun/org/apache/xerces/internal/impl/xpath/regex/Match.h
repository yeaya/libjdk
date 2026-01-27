#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_Match_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_Match_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.Match
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

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

class Match : public ::java::lang::Cloneable {
	$class(Match, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	Match();
	void init$();
	virtual $Object* clone() override;
	virtual int32_t getBeginning(int32_t index);
	virtual $String* getCapturedText(int32_t index);
	virtual int32_t getEnd(int32_t index);
	virtual int32_t getNumberOfGroups();
	virtual void setBeginning(int32_t index, int32_t v);
	virtual void setEnd(int32_t index, int32_t v);
	virtual void setNumberOfGroups(int32_t n);
	virtual void setSource(::java::text::CharacterIterator* ci);
	virtual void setSource($String* str);
	virtual void setSource($chars* chars);
	$ints* beginpos = nullptr;
	$ints* endpos = nullptr;
	int32_t nofgroups = 0;
	::java::text::CharacterIterator* ciSource = nullptr;
	$String* strSource = nullptr;
	$chars* charSource = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_Match_h_