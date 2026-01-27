#ifndef _com_sun_org_apache_xerces_internal_parsers_DTDParser_h_
#define _com_sun_org_apache_xerces_internal_parsers_DTDParser_h_
//$ class com.sun.org.apache.xerces.internal.parsers.DTDParser
//$ extends com.sun.org.apache.xerces.internal.parsers.XMLGrammarParser
//$ implements com.sun.org.apache.xerces.internal.xni.XMLDTDHandler,com.sun.org.apache.xerces.internal.xni.XMLDTDContentModelHandler

#include <com/sun/org/apache/xerces/internal/parsers/XMLGrammarParser.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								class DTDGrammar;
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
				namespace xerces {
					namespace internal {
						namespace xni {
							class Augmentations;
							class XMLLocator;
							class XMLResourceIdentifier;
							class XMLString;
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
								class XMLDTDScanner;
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
						namespace parsers {

class DTDParser : public ::com::sun::org::apache::xerces::internal::parsers::XMLGrammarParser, public ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler, public ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler {
	$class(DTDParser, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::parsers::XMLGrammarParser, ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler, ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler)
public:
	DTDParser();
	using ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler::endContentModel;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	virtual void attributeDecl($String* elementName, $String* attributeName, $String* type, $StringArray* enumeration, $String* defaultType, ::com::sun::org::apache::xerces::internal::xni::XMLString* defaultValue, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedDefaultValue, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void childrenElement($String* elementName);
	virtual void childrenEndGroup();
	virtual void childrenOccurrence(int16_t occurrence);
	virtual void childrenSeparator(int16_t separator);
	virtual void childrenStartGroup();
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void elementDecl($String* name, $String* contentModel, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void endAttlist(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void endConditional(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void endContentModel();
	virtual void endDTD(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void endEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations);
	virtual void endExternalSubset(::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void externalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual ::com::sun::org::apache::xerces::internal::impl::dtd::DTDGrammar* getDTDGrammar();
	virtual void internalEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::XMLString* nonNormalizedText, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void mixedElement($String* elementName);
	virtual void notationDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void startAttlist($String* elementName, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void startConditional(int16_t type, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	using ::com::sun::org::apache::xerces::internal::xni::XMLDTDContentModelHandler::startContentModel;
	virtual void startContentModel($String* elementName, int16_t type);
	virtual void startDTD(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	virtual void startEntity($String* name, $String* publicId, $String* systemId, $String* encoding);
	virtual void startExternalSubset(::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	using ::com::sun::org::apache::xerces::internal::xni::XMLDTDHandler::textDecl;
	virtual void textDecl($String* version, $String* encoding);
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* notation, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augmentations) override;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDScanner* fDTDScanner = nullptr;
};

						} // parsers
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_parsers_DTDParser_h_