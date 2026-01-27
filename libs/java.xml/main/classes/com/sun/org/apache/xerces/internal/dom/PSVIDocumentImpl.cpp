#include <com/sun/org/apache/xerces/internal/dom/PSVIDocumentImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/AttrNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMConfigurationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIAttrNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIDOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/PSVIElementNSImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <java/io/NotSerializableException.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

#undef NODE_CLONED

using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $AttrNSImpl = ::com::sun::org::apache::xerces::internal::dom::AttrNSImpl;
using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $ElementImpl = ::com::sun::org::apache::xerces::internal::dom::ElementImpl;
using $ElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::ElementNSImpl;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $PSVIAttrNSImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIAttrNSImpl;
using $PSVIDOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIDOMImplementationImpl;
using $PSVIElementNSImpl = ::com::sun::org::apache::xerces::internal::dom::PSVIElementNSImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $NotSerializableException = ::java::io::NotSerializableException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _PSVIDocumentImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(PSVIDocumentImpl, serialVersionUID)},
	{}
};

$MethodInfo _PSVIDocumentImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(PSVIDocumentImpl, init$, void)},
	{"<init>", "(Lorg/w3c/dom/DocumentType;)V", nullptr, $PUBLIC, $method(PSVIDocumentImpl, init$, void, $DocumentType*)},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(PSVIDocumentImpl, cloneNode, $Node*, bool)},
	{"createAttributeNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(PSVIDocumentImpl, createAttributeNS, $Attr*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createAttributeNS", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC, $virtualMethod(PSVIDocumentImpl, createAttributeNS, $Attr*, $String*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createElementNS", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(PSVIDocumentImpl, createElementNS, $Element*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"createElementNS", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC, $virtualMethod(PSVIDocumentImpl, createElementNS, $Element*, $String*, $String*, $String*), "org.w3c.dom.DOMException"},
	{"getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC, $virtualMethod(PSVIDocumentImpl, getDomConfig, $DOMConfiguration*)},
	{"getImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $virtualMethod(PSVIDocumentImpl, getImplementation, $DOMImplementation*)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(PSVIDocumentImpl, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(PSVIDocumentImpl, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$ClassInfo _PSVIDocumentImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.PSVIDocumentImpl",
	"com.sun.org.apache.xerces.internal.dom.DocumentImpl",
	nullptr,
	_PSVIDocumentImpl_FieldInfo_,
	_PSVIDocumentImpl_MethodInfo_
};

$Object* allocate$PSVIDocumentImpl($Class* clazz) {
	return $of($alloc(PSVIDocumentImpl));
}

void PSVIDocumentImpl::init$() {
	$DocumentImpl::init$();
}

void PSVIDocumentImpl::init$($DocumentType* doctype) {
	$DocumentImpl::init$(doctype);
}

$Node* PSVIDocumentImpl::cloneNode(bool deep) {
	$var(PSVIDocumentImpl, newdoc, $new(PSVIDocumentImpl));
	callUserDataHandlers(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(static_cast<$CoreDocumentImpl*>(static_cast<$DocumentImpl*>(this)))))), static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(static_cast<$CoreDocumentImpl*>(static_cast<$DocumentImpl*>(newdoc)))))), $UserDataHandler::NODE_CLONED);
	cloneNode(newdoc, deep);
	newdoc->mutationEvents = this->mutationEvents;
	return static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(static_cast<$CoreDocumentImpl*>(static_cast<$DocumentImpl*>(newdoc))))));
}

$DOMImplementation* PSVIDocumentImpl::getImplementation() {
	return $PSVIDOMImplementationImpl::getDOMImplementation();
}

$Element* PSVIDocumentImpl::createElementNS($String* namespaceURI, $String* qualifiedName) {
	return $new($PSVIElementNSImpl, this, namespaceURI, qualifiedName);
}

$Element* PSVIDocumentImpl::createElementNS($String* namespaceURI, $String* qualifiedName, $String* localpart) {
	return $new($PSVIElementNSImpl, this, namespaceURI, qualifiedName, localpart);
}

$Attr* PSVIDocumentImpl::createAttributeNS($String* namespaceURI, $String* qualifiedName) {
	return $new($PSVIAttrNSImpl, this, namespaceURI, qualifiedName);
}

$Attr* PSVIDocumentImpl::createAttributeNS($String* namespaceURI, $String* qualifiedName, $String* localName) {
	return $new($PSVIAttrNSImpl, this, namespaceURI, qualifiedName, localName);
}

$DOMConfiguration* PSVIDocumentImpl::getDomConfig() {
	$DocumentImpl::getDomConfig();
	return this->fConfiguration;
}

void PSVIDocumentImpl::writeObject($ObjectOutputStream* out) {
	$throwNew($NotSerializableException, $($of(this)->getClass()->getName()));
}

void PSVIDocumentImpl::readObject($ObjectInputStream* in) {
	$throwNew($NotSerializableException, $($of(this)->getClass()->getName()));
}

PSVIDocumentImpl::PSVIDocumentImpl() {
}

$Class* PSVIDocumentImpl::load$($String* name, bool initialize) {
	$loadClass(PSVIDocumentImpl, name, initialize, &_PSVIDocumentImpl_ClassInfo_, allocate$PSVIDocumentImpl);
	return class$;
}

$Class* PSVIDocumentImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com