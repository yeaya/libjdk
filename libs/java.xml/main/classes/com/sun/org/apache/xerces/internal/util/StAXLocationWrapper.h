#ifndef _com_sun_org_apache_xerces_internal_util_StAXLocationWrapper_h_
#define _com_sun_org_apache_xerces_internal_util_StAXLocationWrapper_h_
//$ class com.sun.org.apache.xerces.internal.util.StAXLocationWrapper
//$ extends com.sun.org.apache.xerces.internal.xni.XMLLocator

#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>

namespace javax {
	namespace xml {
		namespace stream {
			class Location;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class StAXLocationWrapper : public ::com::sun::org::apache::xerces::internal::xni::XMLLocator {
	$class(StAXLocationWrapper, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLLocator)
public:
	StAXLocationWrapper();
	void init$();
	virtual $String* getBaseSystemId() override;
	virtual int32_t getCharacterOffset() override;
	virtual int32_t getColumnNumber() override;
	virtual $String* getEncoding() override;
	virtual $String* getExpandedSystemId() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getLiteralSystemId() override;
	::javax::xml::stream::Location* getLocation();
	virtual $String* getPublicId() override;
	virtual $String* getXMLVersion() override;
	void setLocation(::javax::xml::stream::Location* location);
	::javax::xml::stream::Location* fLocation = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_StAXLocationWrapper_h_