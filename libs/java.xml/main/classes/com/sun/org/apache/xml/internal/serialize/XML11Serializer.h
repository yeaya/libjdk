#ifndef _com_sun_org_apache_xml_internal_serialize_XML11Serializer_h_
#define _com_sun_org_apache_xml_internal_serialize_XML11Serializer_h_
//$ class com.sun.org.apache.xml.internal.serialize.XML11Serializer
//$ extends com.sun.org.apache.xml.internal.serialize.XMLSerializer

#include <com/sun/org/apache/xml/internal/serialize/XMLSerializer.h>
#include <java/lang/Array.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("PREFIX")
#undef PREFIX

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class NamespaceSupport;
							class SymbolTable;
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
						namespace serialize {
							class OutputFormat;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
		class Writer;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serialize {

class XML11Serializer : public ::com::sun::org::apache::xml::internal::serialize::XMLSerializer {
	$class(XML11Serializer, 0, ::com::sun::org::apache::xml::internal::serialize::XMLSerializer)
public:
	XML11Serializer();
	using ::com::sun::org::apache::xml::internal::serialize::XMLSerializer::characters;
	void init$();
	void init$(::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	void init$(::java::io::Writer* writer, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	void init$(::java::io::OutputStream* output, ::com::sun::org::apache::xml::internal::serialize::OutputFormat* format);
	virtual void characters($chars* chars, int32_t start, int32_t length) override;
	virtual void printCDATAText($String* text) override;
	using ::com::sun::org::apache::xml::internal::serialize::XMLSerializer::printEscaped;
	virtual void printEscaped($String* source) override;
	virtual void printText($String* text, bool preserveSpace, bool unescaped) override;
	virtual void printText($chars* chars, int32_t start, int32_t length, bool preserveSpace, bool unescaped) override;
	virtual void printXMLChar(int32_t ch) override;
	virtual bool reset() override;
	using ::com::sun::org::apache::xml::internal::serialize::XMLSerializer::startDocument;
	virtual void surrogates(int32_t high, int32_t low, bool inContent) override;
	static const bool DEBUG = false;
	::com::sun::org::apache::xerces::internal::util::NamespaceSupport* fNSBinder = nullptr;
	::com::sun::org::apache::xerces::internal::util::NamespaceSupport* fLocalNSBinder = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	bool fDOML1 = false;
	int32_t fNamespaceCounter = 0;
	static $String* PREFIX;
	bool fNamespaces = false;
};

						} // serialize
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("PREFIX")

#endif // _com_sun_org_apache_xml_internal_serialize_XML11Serializer_h_