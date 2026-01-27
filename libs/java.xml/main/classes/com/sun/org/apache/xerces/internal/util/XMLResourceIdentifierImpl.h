#ifndef _com_sun_org_apache_xerces_internal_util_XMLResourceIdentifierImpl_h_
#define _com_sun_org_apache_xerces_internal_util_XMLResourceIdentifierImpl_h_
//$ class com.sun.org.apache.xerces.internal.util.XMLResourceIdentifierImpl
//$ extends com.sun.org.apache.xerces.internal.xni.XMLResourceIdentifier

#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class XMLResourceIdentifierImpl : public ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier {
	$class(XMLResourceIdentifierImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier)
public:
	XMLResourceIdentifierImpl();
	void init$();
	void init$($String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId);
	void init$($String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId, $String* namespace$);
	virtual void clear();
	virtual $String* getBaseSystemId() override;
	virtual $String* getExpandedSystemId() override;
	virtual $String* getLiteralSystemId() override;
	virtual $String* getNamespace() override;
	virtual $String* getPublicId() override;
	virtual int32_t hashCode() override;
	virtual void setBaseSystemId($String* baseSystemId) override;
	virtual void setExpandedSystemId($String* expandedSystemId) override;
	virtual void setLiteralSystemId($String* literalSystemId) override;
	virtual void setNamespace($String* namespace$) override;
	virtual void setPublicId($String* publicId) override;
	virtual void setValues($String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId);
	virtual void setValues($String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId, $String* namespace$);
	virtual $String* toString() override;
	$String* fPublicId = nullptr;
	$String* fLiteralSystemId = nullptr;
	$String* fBaseSystemId = nullptr;
	$String* fExpandedSystemId = nullptr;
	$String* fNamespace = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_XMLResourceIdentifierImpl_h_