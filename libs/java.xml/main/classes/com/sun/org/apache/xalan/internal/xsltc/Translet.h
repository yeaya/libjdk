#ifndef _com_sun_org_apache_xalan_internal_xsltc_Translet_h_
#define _com_sun_org_apache_xalan_internal_xsltc_Translet_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.Translet
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
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
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisIterator;
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
				namespace xml {
					namespace internal {
						namespace serializer {
							class SerializationHandler;
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

class Translet : public ::java::lang::Object {
	$interface(Translet, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addAuxiliaryClass($Class* auxClass) {}
	virtual $Object* addParameter($String* name, Object$* value) {return nullptr;}
	virtual void buildKeys(::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler, int32_t root) {}
	virtual $Class* getAuxiliaryClass($String* className) {return nullptr;}
	virtual $StringArray* getNamesArray() {return nullptr;}
	virtual $StringArray* getNamespaceArray() {return nullptr;}
	virtual $ints* getTypesArray() {return nullptr;}
	virtual $StringArray* getUrisArray() {return nullptr;}
	virtual bool overrideDefaultParser() {return false;}
	virtual void setOverrideDefaultParser(bool flag) {}
	virtual void transform(::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) {}
	virtual void transform(::com::sun::org::apache::xalan::internal::xsltc::DOM* document, $Array<::com::sun::org::apache::xml::internal::serializer::SerializationHandler>* handlers) {}
	virtual void transform(::com::sun::org::apache::xalan::internal::xsltc::DOM* document, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iterator, ::com::sun::org::apache::xml::internal::serializer::SerializationHandler* handler) {}
};

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_Translet_h_