#ifndef _com_sun_org_apache_xerces_internal_util_SecurityManager_h_
#define _com_sun_org_apache_xerces_internal_util_SecurityManager_h_
//$ class com.sun.org.apache.xerces.internal.util.SecurityManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_ELEMENT_ATTRIBUTE_LIMIT")
#undef DEFAULT_ELEMENT_ATTRIBUTE_LIMIT
#pragma push_macro("DEFAULT_ENTITY_EXPANSION_LIMIT")
#undef DEFAULT_ENTITY_EXPANSION_LIMIT
#pragma push_macro("DEFAULT_MAX_OCCUR_NODE_LIMIT")
#undef DEFAULT_MAX_OCCUR_NODE_LIMIT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class SecurityManager : public ::java::lang::Object {
	$class(SecurityManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SecurityManager();
	void init$();
	int32_t getElementAttrLimit();
	int32_t getEntityExpansionLimit();
	int32_t getMaxOccurNodeLimit();
	void readSystemProperties();
	void setElementAttrLimit(int32_t limit);
	void setEntityExpansionLimit(int32_t limit);
	void setMaxOccurNodeLimit(int32_t limit);
	static const int32_t DEFAULT_ENTITY_EXPANSION_LIMIT = 0x0000FA00;
	static const int32_t DEFAULT_MAX_OCCUR_NODE_LIMIT = 5000;
	static const int32_t DEFAULT_ELEMENT_ATTRIBUTE_LIMIT = 10000;
	int32_t entityExpansionLimit = 0;
	int32_t maxOccurLimit = 0;
	int32_t fElementAttributeLimit = 0;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEFAULT_ELEMENT_ATTRIBUTE_LIMIT")
#pragma pop_macro("DEFAULT_ENTITY_EXPANSION_LIMIT")
#pragma pop_macro("DEFAULT_MAX_OCCUR_NODE_LIMIT")

#endif // _com_sun_org_apache_xerces_internal_util_SecurityManager_h_