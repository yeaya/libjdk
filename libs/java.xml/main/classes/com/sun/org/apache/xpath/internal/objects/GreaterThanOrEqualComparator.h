#ifndef _com_sun_org_apache_xpath_internal_objects_GreaterThanOrEqualComparator_h_
#define _com_sun_org_apache_xpath_internal_objects_GreaterThanOrEqualComparator_h_
//$ class com.sun.org.apache.xpath.internal.objects.GreaterThanOrEqualComparator
//$ extends com.sun.org.apache.xpath.internal.objects.Comparator

#include <com/sun/org/apache/xpath/internal/objects/Comparator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class XMLString;
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

class GreaterThanOrEqualComparator : public ::com::sun::org::apache::xpath::internal::objects::Comparator {
	$class(GreaterThanOrEqualComparator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::objects::Comparator)
public:
	GreaterThanOrEqualComparator();
	void init$();
	virtual bool compareNumbers(double n1, double n2) override;
	virtual bool compareStrings(::com::sun::org::apache::xml::internal::utils::XMLString* s1, ::com::sun::org::apache::xml::internal::utils::XMLString* s2) override;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_objects_GreaterThanOrEqualComparator_h_