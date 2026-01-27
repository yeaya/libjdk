#ifndef _com_sun_xml_internal_stream_XMLEntityStorage_h_
#define _com_sun_xml_internal_stream_XMLEntityStorage_h_
//$ class com.sun.xml.internal.stream.XMLEntityStorage
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("WARN_ON_DUPLICATE_ENTITYDEF")
#undef WARN_ON_DUPLICATE_ENTITYDEF

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							class PropertyManager;
							class XMLEntityManager;
							class XMLErrorReporter;
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
								class XMLComponentManager;
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					class Entity;
					class Entity$ScannedEntity;
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {

class XMLEntityStorage : public ::java::lang::Object {
	$class(XMLEntityStorage, 0, ::java::lang::Object)
public:
	XMLEntityStorage();
	void init$(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager);
	void init$(::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* entityManager);
	virtual void addExternalEntity($String* name, $String* publicId, $String* literalSystemId, $String* baseSystemId);
	virtual void addInternalEntity($String* name, $String* text);
	virtual void addUnparsedEntity($String* name, $String* publicId, $String* systemId, $String* baseSystemId, $String* notation);
	virtual void endExternalSubset();
	static $String* expandSystemId($String* systemId);
	static $String* expandSystemId($String* systemId, $String* baseSystemId);
	static $String* fixURI($String* str);
	virtual ::java::util::Map* getEntities();
	virtual ::com::sun::xml::internal::stream::Entity* getEntity($String* name);
	static $String* getUserDir();
	virtual bool isDeclaredEntity($String* entityName);
	virtual bool isEntityDeclInExternalSubset($String* entityName);
	virtual bool isExternalEntity($String* entityName);
	virtual bool isUnparsedEntity($String* entityName);
	virtual void reset(::com::sun::org::apache::xerces::internal::impl::PropertyManager* propertyManager);
	virtual void reset();
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager);
	virtual void startExternalSubset();
	static $String* ERROR_REPORTER;
	static $String* WARN_ON_DUPLICATE_ENTITYDEF;
	bool fWarnDuplicateEntityDef = false;
	::java::util::Map* fEntities = nullptr;
	::com::sun::xml::internal::stream::Entity$ScannedEntity* fCurrentEntity = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLEntityManager* fEntityManager = nullptr;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::impl::PropertyManager* fPropertyManager = nullptr;
	bool fInExternalSubset = false;
	static $String* gUserDir;
	static $String* gEscapedUserDir;
	static $booleans* gNeedEscaping;
	static $chars* gAfterEscaping1;
	static $chars* gAfterEscaping2;
	static $chars* gHexChs;
};

				} // stream
			} // internal
		} // xml
	} // sun
} // com

#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("WARN_ON_DUPLICATE_ENTITYDEF")

#endif // _com_sun_xml_internal_stream_XMLEntityStorage_h_