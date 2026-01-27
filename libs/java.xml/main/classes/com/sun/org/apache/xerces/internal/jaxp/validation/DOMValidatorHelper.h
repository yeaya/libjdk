#ifndef _com_sun_org_apache_xerces_internal_jaxp_validation_DOMValidatorHelper_h_
#define _com_sun_org_apache_xerces_internal_jaxp_validation_DOMValidatorHelper_h_
//$ class com.sun.org.apache.xerces.internal.jaxp.validation.DOMValidatorHelper
//$ extends com.sun.org.apache.xerces.internal.jaxp.validation.ValidatorHelper
//$ implements com.sun.org.apache.xerces.internal.impl.validation.EntityState

#include <com/sun/org/apache/xerces/internal/impl/validation/EntityState.h>
#include <com/sun/org/apache/xerces/internal/jaxp/validation/ValidatorHelper.h>
#include <java/lang/Array.h>

#pragma push_macro("CHUNK_MASK")
#undef CHUNK_MASK
#pragma push_macro("CHUNK_SIZE")
#undef CHUNK_SIZE
#pragma push_macro("ERROR_REPORTER")
#undef ERROR_REPORTER
#pragma push_macro("NAMESPACE_CONTEXT")
#undef NAMESPACE_CONTEXT
#pragma push_macro("SCHEMA_VALIDATOR")
#undef SCHEMA_VALIDATOR
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE
#pragma push_macro("VALIDATION_MANAGER")
#undef VALIDATION_MANAGER

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
						namespace impl {
							namespace validation {
								class ValidationManager;
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
						namespace impl {
							namespace xs {
								class XMLSchemaValidator;
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
						namespace impl {
							namespace xs {
								namespace util {
									class SimpleLocator;
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
						namespace jaxp {
							namespace validation {
								class DOMDocumentHandler;
								class DOMResultAugmentor;
								class DOMResultBuilder;
								class DOMValidatorHelper$DOMNamespaceContext;
								class XMLSchemaValidatorComponentManager;
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
							class NamespaceSupport;
							class SymbolTable;
							class XMLAttributesImpl;
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
namespace javax {
	namespace xml {
		namespace transform {
			class Result;
			class Source;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			namespace dom {
				class DOMResult;
				class DOMSource;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class NamedNodeMap;
			class Node;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

class DOMValidatorHelper : public ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHelper, public ::com::sun::org::apache::xerces::internal::impl::validation::EntityState {
	$class(DOMValidatorHelper, 0, ::com::sun::org::apache::xerces::internal::jaxp::validation::ValidatorHelper, ::com::sun::org::apache::xerces::internal::impl::validation::EntityState)
public:
	DOMValidatorHelper();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager* componentManager);
	void beginNode(::org::w3c::dom::Node* node);
	void fillQName(::com::sun::org::apache::xerces::internal::xni::QName* toFill, ::org::w3c::dom::Node* node);
	void finishNode(::org::w3c::dom::Node* node);
	::org::w3c::dom::Node* getCurrentElement();
	virtual bool isEntityDeclared($String* name) override;
	virtual bool isEntityUnparsed($String* name) override;
	void processAttributes(::org::w3c::dom::NamedNodeMap* attrMap);
	void sendCharactersToValidator($String* str);
	void setupDOMResultHandler(::javax::xml::transform::dom::DOMSource* source, ::javax::xml::transform::dom::DOMResult* result);
	void setupEntityMap(::org::w3c::dom::Document* doc);
	virtual $String* toString() override;
	virtual void validate(::javax::xml::transform::Source* source, ::javax::xml::transform::Result* result) override;
	void validate(::org::w3c::dom::Node* node);
	static const int32_t CHUNK_SIZE = 1024; // (1 << 10)
	static const int32_t CHUNK_MASK = 1023; // CHUNK_SIZE - 1
	static $String* ERROR_REPORTER;
	static $String* NAMESPACE_CONTEXT;
	static $String* SCHEMA_VALIDATOR;
	static $String* SYMBOL_TABLE;
	static $String* VALIDATION_MANAGER;
	::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter* fErrorReporter = nullptr;
	::com::sun::org::apache::xerces::internal::util::NamespaceSupport* fNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::DOMValidatorHelper$DOMNamespaceContext* fDOMNamespaceContext = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaValidator* fSchemaValidator = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationManager* fValidationManager = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::XMLSchemaValidatorComponentManager* fComponentManager = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::util::SimpleLocator* fXMLLocator = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::DOMDocumentHandler* fDOMValidatorHandler = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::DOMResultAugmentor* fDOMResultAugmentor = nullptr;
	::com::sun::org::apache::xerces::internal::jaxp::validation::DOMResultBuilder* fDOMResultBuilder = nullptr;
	::org::w3c::dom::NamedNodeMap* fEntities = nullptr;
	$chars* fCharBuffer = nullptr;
	::org::w3c::dom::Node* fRoot = nullptr;
	::org::w3c::dom::Node* fCurrentElement = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fElementQName = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fAttributeQName = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl* fAttributes = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fTempString = nullptr;
};

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CHUNK_MASK")
#pragma pop_macro("CHUNK_SIZE")
#pragma pop_macro("ERROR_REPORTER")
#pragma pop_macro("NAMESPACE_CONTEXT")
#pragma pop_macro("SCHEMA_VALIDATOR")
#pragma pop_macro("SYMBOL_TABLE")
#pragma pop_macro("VALIDATION_MANAGER")

#endif // _com_sun_org_apache_xerces_internal_jaxp_validation_DOMValidatorHelper_h_