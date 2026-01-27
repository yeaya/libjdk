#ifndef _com_sun_org_apache_xerces_internal_util_ErrorHandlerWrapper$1_h_
#define _com_sun_org_apache_xerces_internal_util_ErrorHandlerWrapper$1_h_
//$ class com.sun.org.apache.xerces.internal.util.ErrorHandlerWrapper$1
//$ extends com.sun.org.apache.xerces.internal.xni.XMLLocator

#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class ErrorHandlerWrapper$1 : public ::com::sun::org::apache::xerces::internal::xni::XMLLocator {
	$class(ErrorHandlerWrapper$1, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLLocator)
public:
	ErrorHandlerWrapper$1();
	void init$($String* val$fPublicId, $String* val$fExpandedSystemId, int32_t val$fColumnNumber, int32_t val$fLineNumber);
	virtual $String* getBaseSystemId() override;
	virtual int32_t getCharacterOffset() override;
	virtual int32_t getColumnNumber() override;
	virtual $String* getEncoding() override;
	virtual $String* getExpandedSystemId() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getLiteralSystemId() override;
	virtual $String* getPublicId() override;
	virtual $String* getXMLVersion() override;
	int32_t val$fLineNumber = 0;
	int32_t val$fColumnNumber = 0;
	$String* val$fExpandedSystemId = nullptr;
	$String* val$fPublicId = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_ErrorHandlerWrapper$1_h_