#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDocumentInfo_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDocumentInfo_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.XSDocumentInfo
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace validation {
								class ValidationState;
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
								class SchemaNamespaceSupport;
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
								namespace traversers {
									class XSAnnotationInfo;
									class XSAttributeChecker;
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
							class SymbolTable;
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
		class Stack;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Element;
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

class XSDocumentInfo : public ::java::lang::Object {
	$class(XSDocumentInfo, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XSDocumentInfo();
	void init$(::org::w3c::dom::Element* schemaRoot, ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* attrChecker, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	virtual void addAllowedNS($String* namespace$);
	virtual void addAnnotation(::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAnnotationInfo* info);
	virtual void backupNSSupport(::com::sun::org::apache::xerces::internal::impl::xs::SchemaNamespaceSupport* nsSupport);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAnnotationInfo* getAnnotations();
	virtual $ObjectArray* getSchemaAttrs();
	void initNamespaceSupport(::org::w3c::dom::Element* schemaRoot);
	virtual bool isAllowedNS($String* namespace$);
	bool needReportTNSError($String* uri);
	virtual void removeAnnotations();
	virtual void restoreNSSupport();
	virtual void returnSchemaAttrs();
	virtual $String* toString() override;
	::com::sun::org::apache::xerces::internal::impl::xs::SchemaNamespaceSupport* fNamespaceSupport = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::SchemaNamespaceSupport* fNamespaceSupportRoot = nullptr;
	::java::util::Stack* SchemaNamespaceSupportStack = nullptr;
	bool fAreLocalAttributesQualified = false;
	bool fAreLocalElementsQualified = false;
	int16_t fBlockDefault = 0;
	int16_t fFinalDefault = 0;
	$String* fTargetNamespace = nullptr;
	bool fIsChameleonSchema = false;
	::org::w3c::dom::Element* fSchemaElement = nullptr;
	::java::util::List* fImportedNS = nullptr;
	::com::sun::org::apache::xerces::internal::impl::validation::ValidationState* fValidationContext = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAttributeChecker* fAttrChecker = nullptr;
	$ObjectArray* fSchemaAttrs = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::traversers::XSAnnotationInfo* fAnnotations = nullptr;
	::java::util::List* fReportedTNS = nullptr;
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

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_XSDocumentInfo_h_