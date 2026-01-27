#ifndef _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$Context_h_
#define _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$Context_h_
//$ class com.sun.org.apache.xerces.internal.impl.xpath.regex.RegularExpression$Context
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {
									class Match;
									class RegularExpression$CharArrayTarget;
									class RegularExpression$CharacterIteratorTarget;
									class RegularExpression$ClosureContext;
									class RegularExpression$ExpressionTarget;
									class RegularExpression$StringTarget;
								}
							}
						}
					}
				}
			}
		}
	}
}
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

class RegularExpression$Context : public ::java::lang::Object {
	$class(RegularExpression$Context, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RegularExpression$Context();
	void init$();
	void reset(::java::text::CharacterIterator* target, int32_t start, int32_t limit, int32_t nofclosures);
	void reset($String* target, int32_t start, int32_t limit, int32_t nofclosures);
	void reset($chars* target, int32_t start, int32_t limit, int32_t nofclosures);
	void resetCommon(int32_t nofclosures);
	void setInUse(bool inUse);
	int32_t start = 0;
	int32_t limit = 0;
	int32_t length = 0;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::Match* match = nullptr;
	bool inuse = false;
	$Array<::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ClosureContext>* closureContexts = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$StringTarget* stringTarget = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$CharArrayTarget* charArrayTarget = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$CharacterIteratorTarget* characterIteratorTarget = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xpath::regex::RegularExpression$ExpressionTarget* target = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xpath_regex_RegularExpression$Context_h_