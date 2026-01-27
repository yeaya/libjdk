#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl
//$ extends javax.xml.transform.Templates
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <javax/xml/transform/Templates.h>

#pragma push_macro("ABSTRACT_TRANSLET")
#undef ABSTRACT_TRANSLET
#pragma push_macro("DESERIALIZE_TRANSLET")
#undef DESERIALIZE_TRANSLET

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
							class Translet;
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {
								class TransformerFactoryImpl;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class Module;
		class ModuleLayer;
		class ThreadLocal;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class Configuration;
			class ModuleDescriptor;
		}
	}
}
namespace java {
	namespace security {
		class PermissionCollection;
	}
}
namespace java {
	namespace util {
		class Map;
		class Properties;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Transformer;
			class URIResolver;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

class TemplatesImpl : public ::javax::xml::transform::Templates, public ::java::io::Serializable {
	$class(TemplatesImpl, 0, ::javax::xml::transform::Templates, ::java::io::Serializable)
public:
	TemplatesImpl();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($Array<int8_t, 2>* bytecodes, $String* transletName, ::java::util::Properties* outputProperties, int32_t indentNumber, ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl* tfactory);
	void init$($ClassArray* transletClasses, $String* transletName, ::java::util::Properties* outputProperties, int32_t indentNumber, ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl* tfactory);
	void init$();
	::java::lang::Module* createModule(::java::lang::module::ModuleDescriptor* descriptor, ::java::lang::ClassLoader* loader);
	void defineTransletClasses();
	virtual ::java::util::Properties* getOutputProperties() override;
	::com::sun::org::apache::xalan::internal::xsltc::DOM* getStylesheetDOM();
	$Array<int8_t, 2>* getTransletBytecodes();
	$ClassArray* getTransletClasses();
	int32_t getTransletIndex();
	::com::sun::org::apache::xalan::internal::xsltc::Translet* getTransletInstance();
	$String* getTransletName();
	void init($String* transletName, ::java::util::Properties* outputProperties, int32_t indentNumber, ::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl* tfactory);
	static ::java::lang::ClassLoader* lambda$createModule$0(::java::lang::ClassLoader* loader, $String* name);
	static ::java::lang::ModuleLayer* lambda$createModule$1(::java::lang::ModuleLayer* bootLayer, ::java::lang::module::Configuration* cf, ::java::lang::ClassLoader* loader);
	static void lambda$defineTransletClasses$2(::java::lang::Module* thisModule, ::java::lang::Module* m, ::java::security::PermissionCollection* perms, $String* p);
	virtual ::javax::xml::transform::Transformer* newTransformer() override;
	bool overrideDefaultParser();
	void readObject(::java::io::ObjectInputStream* is);
	void setStylesheetDOM(::com::sun::org::apache::xalan::internal::xsltc::DOM* sdom);
	void setTransletBytecodes($Array<int8_t, 2>* bytecodes);
	void setTransletName($String* name);
	void setURIResolver(::javax::xml::transform::URIResolver* resolver);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* os);
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0x09574FC16EACAB33;
	static $String* DESERIALIZE_TRANSLET;
	static $String* ABSTRACT_TRANSLET;
	$String* _name = nullptr;
	$Array<int8_t, 2>* _bytecodes = nullptr;
	$ClassArray* _class = nullptr;
	int32_t _transletIndex = 0;
	::java::util::Map* _auxClasses = nullptr;
	::java::util::Properties* _outputProperties = nullptr;
	int32_t _indentNumber = 0;
	::javax::xml::transform::URIResolver* _uriResolver = nullptr;
	::java::lang::ThreadLocal* _sdom = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::trax::TransformerFactoryImpl* _tfactory = nullptr;
	bool _overrideDefaultParser = false;
	$String* _accessExternalStylesheet = nullptr;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ABSTRACT_TRANSLET")
#pragma pop_macro("DESERIALIZE_TRANSLET")

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl_h_