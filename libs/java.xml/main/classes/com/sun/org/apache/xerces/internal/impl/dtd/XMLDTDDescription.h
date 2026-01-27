#ifndef _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDDescription_h_
#define _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDDescription_h_
//$ class com.sun.org.apache.xerces.internal.impl.dtd.XMLDTDDescription
//$ extends com.sun.org.apache.xerces.internal.util.XMLResourceIdentifierImpl
//$ implements com.sun.org.apache.xerces.internal.xni.grammars.XMLDTDDescription

#include <com/sun/org/apache/xerces/internal/util/XMLResourceIdentifierImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLDTDDescription.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							class XMLResourceIdentifier;
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
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLInputSource;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {

class XMLDTDDescription : public ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl, public ::com::sun::org::apache::xerces::internal::xni::grammars::XMLDTDDescription {
	$class(XMLDTDDescription, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::util::XMLResourceIdentifierImpl, ::com::sun::org::apache::xerces::internal::xni::grammars::XMLDTDDescription)
public:
	XMLDTDDescription();
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual $String* getBaseSystemId() override;
	virtual $String* getExpandedSystemId() override;
	virtual $String* getLiteralSystemId() override;
	virtual $String* getNamespace() override;
	virtual $String* getPublicId() override;
	void init$(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* id, $String* rootName);
	void init$($String* publicId, $String* literalId, $String* baseId, $String* expandedId, $String* rootName);
	void init$(::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource* source);
	virtual bool equals(Object$* desc) override;
	virtual $String* getGrammarType() override;
	virtual $String* getRootName() override;
	virtual int32_t hashCode() override;
	virtual void setBaseSystemId($String* baseSystemId) override;
	virtual void setExpandedSystemId($String* expandedSystemId) override;
	virtual void setLiteralSystemId($String* literalSystemId) override;
	virtual void setNamespace($String* namespace$) override;
	virtual void setPossibleRoots(::java::util::List* possibleRoots);
	virtual void setPublicId($String* publicId) override;
	virtual void setRootName($String* rootName);
	virtual $String* toString() override;
	$String* fRootName = nullptr;
	::java::util::List* fPossibleRoots = nullptr;
};

							} // dtd
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_dtd_XMLDTDDescription_h_