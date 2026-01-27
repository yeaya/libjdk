#ifndef _com_sun_org_apache_xerces_internal_xpointer_XPointerHandler_h_
#define _com_sun_org_apache_xerces_internal_xpointer_XPointerHandler_h_
//$ class com.sun.org.apache.xerces.internal.xpointer.XPointerHandler
//$ extends com.sun.org.apache.xerces.internal.xinclude.XIncludeHandler
//$ implements com.sun.org.apache.xerces.internal.xpointer.XPointerProcessor

#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler.h>
#include <com/sun/org/apache/xerces/internal/xpointer/XPointerProcessor.h>
#include <java/lang/Array.h>

#pragma push_macro("ELEMENT_SCHEME_NAME")
#undef ELEMENT_SCHEME_NAME

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
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
							class QName;
							class XMLAttributes;
							class XMLDocumentHandler;
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
								class XMLErrorHandler;
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
						namespace xpointer {
							class XPointerPart;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class ArrayList;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xpointer {

class XPointerHandler : public ::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler, public ::com::sun::org::apache::xerces::internal::xpointer::XPointerProcessor {
	$class(XPointerHandler, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler, ::com::sun::org::apache::xerces::internal::xpointer::XPointerProcessor)
public:
	XPointerHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* errorHandler, ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* errorReporter);
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	::java::util::ArrayList* getPointerParts();
	::com::sun::org::apache::xerces::internal::xpointer::XPointerPart* getXPointerPart();
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void init();
	void initErrorReporter();
	bool isChildFragmentResolved();
	virtual bool isFragmentResolved() override;
	virtual bool isXPointerResolved() override;
	virtual void parseXPointer($String* xpointer) override;
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	void reportError($String* key, $ObjectArray* arguments);
	void reportWarning($String* key, $ObjectArray* arguments);
	virtual bool resolveXPointer(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs, int32_t event) override;
	virtual void setDocumentHandler(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* handler) override;
	virtual void setProperty($String* propertyId, Object$* value) override;
	virtual void startCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual $String* toString() override;
	::java::util::ArrayList* fXPointerParts = nullptr;
	::com::sun::org::apache::xerces::internal::xpointer::XPointerPart* fXPointerPart = nullptr;
	bool fFoundMatchingPtrPart = false;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fXPointerErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLErrorHandler* fErrorHandler = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	$String* ELEMENT_SCHEME_NAME = nullptr;
	bool fIsXPointerResolved = false;
	bool fFixupBase = false;
	bool fFixupLang = false;
};

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ELEMENT_SCHEME_NAME")

#endif // _com_sun_org_apache_xerces_internal_xpointer_XPointerHandler_h_