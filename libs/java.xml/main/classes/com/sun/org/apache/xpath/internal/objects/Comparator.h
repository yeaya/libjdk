#ifndef _com_sun_org_apache_xpath_internal_objects_Comparator_h_
#define _com_sun_org_apache_xpath_internal_objects_Comparator_h_
//$ class com.sun.org.apache.xpath.internal.objects.Comparator
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class Comparator : public ::java::lang::Object {
	$class(Comparator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Comparator();
	void init$();
	virtual bool compareNumbers(double n1, double n2) {return false;}
	virtual bool compareStrings(::com::sun::org::apache::xml::internal::utils::XMLString* s1, ::com::sun::org::apache::xml::internal::utils::XMLString* s2) {return false;}
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_objects_Comparator_h_