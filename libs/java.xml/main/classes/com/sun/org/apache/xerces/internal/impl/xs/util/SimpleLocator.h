#ifndef _com_sun_org_apache_xerces_internal_impl_xs_util_SimpleLocator_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_util_SimpleLocator_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.util.SimpleLocator
//$ extends com.sun.org.apache.xerces.internal.xni.XMLLocator

#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

class SimpleLocator : public ::com::sun::org::apache::xerces::internal::xni::XMLLocator {
	$class(SimpleLocator, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLLocator)
public:
	SimpleLocator();
	void init$();
	void init$($String* lsid, $String* esid, int32_t line, int32_t column);
	void init$($String* lsid, $String* esid, int32_t line, int32_t column, int32_t offset);
	virtual $String* getBaseSystemId() override;
	virtual int32_t getCharacterOffset() override;
	virtual int32_t getColumnNumber() override;
	virtual $String* getEncoding() override;
	virtual $String* getExpandedSystemId() override;
	virtual int32_t getLineNumber() override;
	virtual $String* getLiteralSystemId() override;
	virtual $String* getPublicId() override;
	virtual $String* getXMLVersion() override;
	virtual void setBaseSystemId($String* systemId);
	virtual void setCharacterOffset(int32_t offset);
	virtual void setColumnNumber(int32_t col);
	virtual void setExpandedSystemId($String* systemId);
	virtual void setLineNumber(int32_t line);
	virtual void setLiteralSystemId($String* systemId);
	virtual void setPublicId($String* publicId);
	virtual void setValues($String* lsid, $String* esid, int32_t line, int32_t column);
	virtual void setValues($String* lsid, $String* esid, int32_t line, int32_t column, int32_t offset);
	$String* lsid = nullptr;
	$String* esid = nullptr;
	int32_t line = 0;
	int32_t column = 0;
	int32_t charOffset = 0;
};

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_util_SimpleLocator_h_