#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XSAnnotationImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XSAnnotationImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XSAnnotationImpl
//$ extends com.sun.org.apache.xerces.internal.xs.XSAnnotation

#include <com/sun/org/apache/xerces/internal/xs/XSAnnotation.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								class SchemaGrammar;
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
						namespace xs {
							class XSNamespaceItem;
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
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

class XSAnnotationImpl : public ::com::sun::org::apache::xerces::internal::xs::XSAnnotation {
	$class(XSAnnotationImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xs::XSAnnotation)
public:
	XSAnnotationImpl();
	void init$($String* contents, ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* grammar);
	virtual $String* getAnnotationString() override;
	virtual $String* getName() override;
	virtual $String* getNamespace() override;
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* getNamespaceItem() override;
	virtual int16_t getType() override;
	virtual bool writeAnnotation(Object$* target, int16_t targetType) override;
	void writeToDOM(::org::w3c::dom::Node* target, int16_t type);
	void writeToSAX(::org::xml::sax::ContentHandler* handler);
	$String* fData = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar* fGrammar = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XSAnnotationImpl_h_