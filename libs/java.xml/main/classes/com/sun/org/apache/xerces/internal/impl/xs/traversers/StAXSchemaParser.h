#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_StAXSchemaParser_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_StAXSchemaParser_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.StAXSchemaParser
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("CHUNK_MASK")
#undef CHUNK_MASK
#pragma push_macro("CHUNK_SIZE")
#undef CHUNK_SIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {
									class SchemaDOMParser;
								}
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
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class JAXPNamespaceContextWrapper;
							class StAXLocationWrapper;
							class SymbolTable;
							class XMLAttributesImpl;
							class XMLStringBuffer;
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
							class QName;
							class XMLString;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Iterator;
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace namespace$ {
			class QName;
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			class XMLEventReader;
			class XMLStreamReader;
		}
	}
}
namespace javax {
	namespace xml {
		namespace stream {
			namespace events {
				class EndElement;
				class StartElement;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

class StAXSchemaParser : public ::java::lang::Object {
	$class(StAXSchemaParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StAXSchemaParser();
	void init$();
	void addNamespaceDeclarations();
	void fillDeclaredPrefixes(::javax::xml::stream::events::StartElement* event);
	void fillDeclaredPrefixes(::javax::xml::stream::events::EndElement* event);
	void fillDeclaredPrefixes(::java::util::Iterator* namespaces);
	void fillDeclaredPrefixes(::javax::xml::stream::XMLStreamReader* reader);
	void fillProcessingInstruction($String* data);
	void fillQName(::com::sun::org::apache::xerces::internal::xni::QName* toFill, ::javax::xml::namespace$::QName* toCopy);
	void fillQName(::com::sun::org::apache::xerces::internal::xni::QName* toFill, $String* uri, $String* localpart, $String* prefix);
	void fillXMLAttributes(::javax::xml::stream::events::StartElement* event);
	void fillXMLAttributes(::javax::xml::stream::XMLStreamReader* input);
	::org::w3c::dom::Document* getDocument();
	void parse(::javax::xml::stream::XMLEventReader* input);
	void parse(::javax::xml::stream::XMLStreamReader* input);
	void reset(::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMParser* schemaDOMParser, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void sendCharactersToSchemaParser($String* str, bool whitespace);
	static const int32_t CHUNK_SIZE = 1024; // (1 << 10)
	static const int32_t CHUNK_MASK = 1023; // CHUNK_SIZE - 1
	$chars* fCharBuffer = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMParser* fSchemaDOMParser = nullptr;
	::com::sun::org::apache::xerces::internal::util::StAXLocationWrapper* fLocationWrapper = nullptr;
	::com::sun::org::apache::xerces::internal::util::JAXPNamespaceContextWrapper* fNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fElementQName = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fAttributeQName = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl* fAttributes = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fTempString = nullptr;
	::java::util::List* fDeclaredPrefixes = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fStringBuffer = nullptr;
	int32_t fDepth = 0;
};

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CHUNK_MASK")
#pragma pop_macro("CHUNK_SIZE")

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_StAXSchemaParser_h_