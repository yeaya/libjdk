#ifndef _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaDOM_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaDOM_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.opti.SchemaDOM
//$ extends com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultDocument

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultDocument.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {
									class ElementImpl;
									class NodeImpl;
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
						namespace xni {
							class NamespaceContext;
							class QName;
							class XMLAttributes;
							class XMLString;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuffer;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class DOMImplementation;
			class Element;
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
						namespace impl {
							namespace xs {
								namespace opti {

class SchemaDOM : public ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultDocument {
	$class(SchemaDOM, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultDocument)
public:
	SchemaDOM();
	void init$();
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text);
	virtual void charactersRaw($String* text);
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::opti::ElementImpl* emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, int32_t line, int32_t column, int32_t offset);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::opti::ElementImpl* emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, int32_t line, int32_t column);
	virtual void endAnnotation(::com::sun::org::apache::xerces::internal::xni::QName* elemName, ::com::sun::org::apache::xerces::internal::impl::xs::opti::ElementImpl* annotation);
	virtual void endAnnotationCDATA();
	virtual void endAnnotationElement(::com::sun::org::apache::xerces::internal::xni::QName* elemName);
	virtual void endAnnotationElement($String* elemRawName);
	virtual void endElement();
	virtual void endSyntheticAnnotationElement(::com::sun::org::apache::xerces::internal::xni::QName* elemName, bool complete);
	virtual void endSyntheticAnnotationElement($String* elemRawName, bool complete);
	static $String* escapeAttValue($String* original, int32_t from);
	virtual ::org::w3c::dom::Element* getDocumentElement() override;
	virtual ::org::w3c::dom::DOMImplementation* getImplementation() override;
	static void indent(int32_t amount);
	virtual void printDOM();
	static $String* processAttValue($String* original);
	void processElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::impl::xs::opti::ElementImpl* node);
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data);
	virtual void reset();
	void resizeRelations();
	void resizeRelations(int32_t i);
	virtual void startAnnotation(::com::sun::org::apache::xerces::internal::xni::QName* elemName, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext);
	virtual void startAnnotation($String* elemRawName, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext);
	virtual void startAnnotationCDATA();
	virtual void startAnnotationElement(::com::sun::org::apache::xerces::internal::xni::QName* elemName, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual void startAnnotationElement($String* elemRawName, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::opti::ElementImpl* startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, int32_t line, int32_t column, int32_t offset);
	virtual ::com::sun::org::apache::xerces::internal::impl::xs::opti::ElementImpl* startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, int32_t line, int32_t column);
	static void traverse(::org::w3c::dom::Node* node, int32_t depth);
	static const int32_t relationsRowResizeFactor = 15;
	static const int32_t relationsColResizeFactor = 10;
	$Array<::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl, 2>* relations = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::opti::ElementImpl* parent = nullptr;
	int32_t currLoc = 0;
	int32_t nextFreeLoc = 0;
	bool hidden = false;
	bool inCDATA = false;
	::java::lang::StringBuffer* fAnnotationBuffer = nullptr;
};

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_opti_SchemaDOM_h_