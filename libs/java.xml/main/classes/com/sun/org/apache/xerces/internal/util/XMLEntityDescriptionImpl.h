#ifndef _com_sun_org_apache_xerces_internal_util_XMLEntityDescriptionImpl_h_
#define _com_sun_org_apache_xerces_internal_util_XMLEntityDescriptionImpl_h_
//$ class com.sun.org.apache.xerces.internal.util.XMLEntityDescriptionImpl
//$ extends com.sun.org.apache.xerces.internal.util.XMLResourceIdentifierImpl
//$ implements com.sun.org.apache.xerces.internal.impl.XMLEntityDescription

#include <com/sun/org/apache/xerces/internal/impl/XMLEntityDescription.h>
#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class XMLEntityDescriptionImpl : public ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl, public ::com::sun::org::apache::xerces::internal::impl::XMLEntityDescription {
	$class(XMLEntityDescriptionImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl, ::com::sun::org::apache::xerces::internal::impl::XMLEntityDescription)
public:
	XMLEntityDescriptionImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getBaseSystemId() override;
	virtual $String* getExpandedSystemId() override;
	virtual $String* getLiteralSystemId() override;
	virtual $String* getNamespace() override;
	virtual $String* getPublicId() override;
	void init$();
	void init$($String* entityName, $String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId);
	void init$($String* entityName, $String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId, $String* namespace$);
	virtual void clear() override;
	virtual $String* getEntityName() override;
	virtual int32_t hashCode() override;
	virtual void setBaseSystemId($String* baseSystemId) override;
	virtual void setDescription($String* entityName, $String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId);
	virtual void setDescription($String* entityName, $String* publicId, $String* literalSystemId, $String* baseSystemId, $String* expandedSystemId, $String* namespace$);
	virtual void setEntityName($String* name) override;
	virtual void setExpandedSystemId($String* expandedSystemId) override;
	virtual void setLiteralSystemId($String* literalSystemId) override;
	virtual void setNamespace($String* namespace$) override;
	virtual void setPublicId($String* publicId) override;
	virtual $String* toString() override;
	$String* fEntityName = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_XMLEntityDescriptionImpl_h_