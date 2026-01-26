#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>

#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer11_OmitComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315OmitComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/CanonicalizerBase.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityRuntimeException.h>
#include <com/sun/org/apache/xml/internal/security/signature/NodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInputDebugger.h>
#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/HashSet.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $CanonicalizationException = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizationException;
using $Canonicalizer11_OmitComments = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer11_OmitComments;
using $Canonicalizer20010315 = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315;
using $Canonicalizer20010315OmitComments = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315OmitComments;
using $CanonicalizerBase = ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase;
using $XMLSecurityRuntimeException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityRuntimeException;
using $NodeFilter = ::com::sun::org::apache::xml::internal::security::signature::NodeFilter;
using $XMLSignatureInputDebugger = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInputDebugger;
using $JavaUtils = ::com::sun::org::apache::xml::internal::security::utils::JavaUtils;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

$FieldInfo _XMLSignatureInput_FieldInfo_[] = {
	{"inputOctetStreamProxy", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(XMLSignatureInput, inputOctetStreamProxy)},
	{"inputNodeSet", "Ljava/util/Set;", "Ljava/util/Set<Lorg/w3c/dom/Node;>;", $PRIVATE, $field(XMLSignatureInput, inputNodeSet)},
	{"subNode", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(XMLSignatureInput, subNode)},
	{"excludeNode", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(XMLSignatureInput, excludeNode)},
	{"excludeComments", "Z", nullptr, $PRIVATE, $field(XMLSignatureInput, excludeComments)},
	{"isNodeSet", "Z", nullptr, $PRIVATE, $field(XMLSignatureInput, isNodeSet$)},
	{"bytes", "[B", nullptr, $PRIVATE, $field(XMLSignatureInput, bytes)},
	{"secureValidation", "Z", nullptr, $PRIVATE, $field(XMLSignatureInput, secureValidation)},
	{"mimeType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLSignatureInput, mimeType)},
	{"sourceURI", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLSignatureInput, sourceURI)},
	{"nodeFilters", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/signature/NodeFilter;>;", $PRIVATE, $field(XMLSignatureInput, nodeFilters)},
	{"needsToBeExpanded", "Z", nullptr, $PRIVATE, $field(XMLSignatureInput, needsToBeExpanded)},
	{"outputStream", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(XMLSignatureInput, outputStream)},
	{"preCalculatedDigest", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLSignatureInput, preCalculatedDigest)},
	{}
};

$MethodInfo _XMLSignatureInput_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(XMLSignatureInput, init$, void, $bytes*)},
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(XMLSignatureInput, init$, void, $InputStream*)},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(XMLSignatureInput, init$, void, $Node*)},
	{"<init>", "(Ljava/util/Set;)V", "(Ljava/util/Set<Lorg/w3c/dom/Node;>;)V", $PUBLIC, $method(XMLSignatureInput, init$, void, $Set*)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(XMLSignatureInput, init$, void, $String*)},
	{"addNodeFilter", "(Lcom/sun/org/apache/xml/internal/security/signature/NodeFilter;)V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, addNodeFilter, void, $NodeFilter*)},
	{"convertToNodes", "()V", nullptr, $PRIVATE, $method(XMLSignatureInput, convertToNodes, void), "com.sun.org.apache.xml.internal.security.parser.XMLParserException,java.io.IOException"},
	{"getBytes", "()[B", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, getBytes, $bytes*), "java.io.IOException,com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"getBytesFromInputStream", "()[B", nullptr, $PRIVATE, $method(XMLSignatureInput, getBytesFromInputStream, $bytes*), "java.io.IOException"},
	{"getExcludeNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, getExcludeNode, $Node*)},
	{"getHTMLRepresentation", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, getHTMLRepresentation, $String*), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getHTMLRepresentation", "(Ljava/util/Set;)Ljava/lang/String;", "(Ljava/util/Set<Ljava/lang/String;>;)Ljava/lang/String;", $PUBLIC, $virtualMethod(XMLSignatureInput, getHTMLRepresentation, $String*, $Set*), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getInputNodeSet", "()Ljava/util/Set;", "()Ljava/util/Set<Lorg/w3c/dom/Node;>;", $PUBLIC, $virtualMethod(XMLSignatureInput, getInputNodeSet, $Set*)},
	{"getMIMEType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, getMIMEType, $String*)},
	{"getNodeFilters", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/signature/NodeFilter;>;", $PUBLIC, $virtualMethod(XMLSignatureInput, getNodeFilters, $List*)},
	{"getNodeSet", "()Ljava/util/Set;", "()Ljava/util/Set<Lorg/w3c/dom/Node;>;", $PUBLIC, $virtualMethod(XMLSignatureInput, getNodeSet, $Set*), "com.sun.org.apache.xml.internal.security.parser.XMLParserException,java.io.IOException"},
	{"getNodeSet", "(Z)Ljava/util/Set;", "(Z)Ljava/util/Set<Lorg/w3c/dom/Node;>;", $PUBLIC, $virtualMethod(XMLSignatureInput, getNodeSet, $Set*, bool), "com.sun.org.apache.xml.internal.security.parser.XMLParserException,java.io.IOException"},
	{"getOctetStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, getOctetStream, $InputStream*), "java.io.IOException"},
	{"getOctetStreamReal", "()Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, getOctetStreamReal, $InputStream*)},
	{"getPreCalculatedDigest", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, getPreCalculatedDigest, $String*)},
	{"getSourceURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, getSourceURI, $String*)},
	{"getSubNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, getSubNode, $Node*)},
	{"isByteArray", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, isByteArray, bool)},
	{"isElement", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, isElement, bool)},
	{"isExcludeComments", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, isExcludeComments, bool)},
	{"isInitialized", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, isInitialized, bool)},
	{"isNeedsToBeExpanded", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, isNeedsToBeExpanded, bool)},
	{"isNodeSet", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, isNodeSet, bool)},
	{"isOctetStream", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, isOctetStream, bool)},
	{"isOutputStreamSet", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, isOutputStreamSet, bool)},
	{"isPreCalculatedDigest", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, isPreCalculatedDigest, bool)},
	{"isSecureValidation", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, isSecureValidation, bool)},
	{"setExcludeComments", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, setExcludeComments, void, bool)},
	{"setExcludeNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, setExcludeNode, void, $Node*)},
	{"setMIMEType", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, setMIMEType, void, $String*)},
	{"setNeedsToBeExpanded", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, setNeedsToBeExpanded, void, bool)},
	{"setNodeSet", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, setNodeSet, void, bool)},
	{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, setOutputStream, void, $OutputStream*)},
	{"setSecureValidation", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, setSecureValidation, void, bool)},
	{"setSourceURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, setSourceURI, void, $String*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, toString, $String*)},
	{"updateOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, updateOutputStream, void, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,java.io.IOException"},
	{"updateOutputStream", "(Ljava/io/OutputStream;Z)V", nullptr, $PUBLIC, $virtualMethod(XMLSignatureInput, updateOutputStream, void, $OutputStream*, bool), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,java.io.IOException"},
	{}
};

$ClassInfo _XMLSignatureInput_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.XMLSignatureInput",
	"java.lang.Object",
	nullptr,
	_XMLSignatureInput_FieldInfo_,
	_XMLSignatureInput_MethodInfo_
};

$Object* allocate$XMLSignatureInput($Class* clazz) {
	return $of($alloc(XMLSignatureInput));
}

void XMLSignatureInput::init$($bytes* inputOctets) {
	this->excludeComments = false;
	this->isNodeSet$ = false;
	$set(this, nodeFilters, $new($ArrayList));
	this->needsToBeExpanded = false;
	$set(this, bytes, inputOctets);
}

void XMLSignatureInput::init$($InputStream* inputOctetStream) {
	this->excludeComments = false;
	this->isNodeSet$ = false;
	$set(this, nodeFilters, $new($ArrayList));
	this->needsToBeExpanded = false;
	$set(this, inputOctetStreamProxy, inputOctetStream);
}

void XMLSignatureInput::init$($Node* rootNode) {
	this->excludeComments = false;
	this->isNodeSet$ = false;
	$set(this, nodeFilters, $new($ArrayList));
	this->needsToBeExpanded = false;
	$set(this, subNode, rootNode);
}

void XMLSignatureInput::init$($Set* inputNodeSet) {
	this->excludeComments = false;
	this->isNodeSet$ = false;
	$set(this, nodeFilters, $new($ArrayList));
	this->needsToBeExpanded = false;
	$set(this, inputNodeSet, inputNodeSet);
}

void XMLSignatureInput::init$($String* preCalculatedDigest) {
	this->excludeComments = false;
	this->isNodeSet$ = false;
	$set(this, nodeFilters, $new($ArrayList));
	this->needsToBeExpanded = false;
	$set(this, preCalculatedDigest, preCalculatedDigest);
}

bool XMLSignatureInput::isNeedsToBeExpanded() {
	return this->needsToBeExpanded;
}

void XMLSignatureInput::setNeedsToBeExpanded(bool needsToBeExpanded) {
	this->needsToBeExpanded = needsToBeExpanded;
}

$Set* XMLSignatureInput::getNodeSet() {
	return getNodeSet(false);
}

$Set* XMLSignatureInput::getInputNodeSet() {
	return this->inputNodeSet;
}

$Set* XMLSignatureInput::getNodeSet(bool circumvent) {
	$useLocalCurrentObjectStackCache();
	if (this->inputNodeSet != nullptr) {
		return this->inputNodeSet;
	}
	if (this->inputOctetStreamProxy == nullptr && this->subNode != nullptr) {
		if (circumvent) {
			$XMLUtils::circumventBug2650($($XMLUtils::getOwnerDocument(this->subNode)));
		}
		$set(this, inputNodeSet, $new($LinkedHashSet));
		$XMLUtils::getSet(this->subNode, this->inputNodeSet, this->excludeNode, this->excludeComments);
		return this->inputNodeSet;
	} else if (isOctetStream()) {
		convertToNodes();
		$var($Set, result, $new($LinkedHashSet));
		$XMLUtils::getSet(this->subNode, result, nullptr, false);
		return result;
	}
	$throwNew($RuntimeException, "getNodeSet() called but no input data present"_s);
}

$InputStream* XMLSignatureInput::getOctetStream() {
	if (this->inputOctetStreamProxy != nullptr) {
		return this->inputOctetStreamProxy;
	}
	if (this->bytes != nullptr) {
		$set(this, inputOctetStreamProxy, $new($ByteArrayInputStream, this->bytes));
		return this->inputOctetStreamProxy;
	}
	return nullptr;
}

$InputStream* XMLSignatureInput::getOctetStreamReal() {
	return this->inputOctetStreamProxy;
}

$bytes* XMLSignatureInput::getBytes() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, inputBytes, getBytesFromInputStream());
	if (inputBytes != nullptr) {
		return inputBytes;
	}
	bool var$1 = isOctetStream();
	bool var$0 = var$1 || isElement();
	if (var$0 || isNodeSet()) {
		$var($Canonicalizer20010315OmitComments, c14nizer, $new($Canonicalizer20010315OmitComments));
		{
			$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
			{
				$var($Throwable, var$2, nullptr);
				try {
					try {
						c14nizer->engineCanonicalize(this, static_cast<$OutputStream*>(baos), this->secureValidation);
						$set(this, bytes, baos->toByteArray());
					} catch ($Throwable& t$) {
						try {
							baos->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$2, var$3);
				} /*finally*/ {
					baos->close();
				}
				if (var$2 != nullptr) {
					$throw(var$2);
				}
			}
		}
	}
	return this->bytes;
}

bool XMLSignatureInput::isNodeSet() {
	return this->inputOctetStreamProxy == nullptr && this->inputNodeSet != nullptr || this->isNodeSet$;
}

bool XMLSignatureInput::isElement() {
	return this->inputOctetStreamProxy == nullptr && this->subNode != nullptr && this->inputNodeSet == nullptr && !this->isNodeSet$;
}

bool XMLSignatureInput::isOctetStream() {
	return (this->inputOctetStreamProxy != nullptr || this->bytes != nullptr) && this->inputNodeSet == nullptr && this->subNode == nullptr;
}

bool XMLSignatureInput::isOutputStreamSet() {
	return this->outputStream != nullptr;
}

bool XMLSignatureInput::isByteArray() {
	return this->bytes != nullptr && this->inputNodeSet == nullptr && this->subNode == nullptr;
}

bool XMLSignatureInput::isPreCalculatedDigest() {
	return this->preCalculatedDigest != nullptr;
}

bool XMLSignatureInput::isInitialized() {
	bool var$0 = isOctetStream();
	return var$0 || isNodeSet();
}

$String* XMLSignatureInput::getMIMEType() {
	return this->mimeType;
}

void XMLSignatureInput::setMIMEType($String* mimeType) {
	$set(this, mimeType, mimeType);
}

$String* XMLSignatureInput::getSourceURI() {
	return this->sourceURI;
}

void XMLSignatureInput::setSourceURI($String* sourceURI) {
	$set(this, sourceURI, sourceURI);
}

$String* XMLSignatureInput::toString() {
	$useLocalCurrentObjectStackCache();
	if (isNodeSet()) {
		$var($String, var$0, $$str({"XMLSignatureInput/NodeSet/"_s, $$str($nc(this->inputNodeSet)->size()), " nodes/"_s}));
		return $concat(var$0, $(getSourceURI()));
	}
	if (isElement()) {
		$var($String, var$1, $$str({"XMLSignatureInput/Element/"_s, this->subNode, " exclude "_s, this->excludeNode, " comments:"_s, $$str(this->excludeComments), "/"_s}));
		return $concat(var$1, $(getSourceURI()));
	}
	try {
		$var($bytes, bytes, getBytes());
		return $str({"XMLSignatureInput/OctetStream/"_s, $$str((bytes != nullptr ? $nc(bytes)->length : 0)), " octets/"_s, $(getSourceURI())});
	} catch ($IOException& ex) {
		return $str({"XMLSignatureInput/OctetStream//"_s, $(getSourceURI())});
	} catch ($CanonicalizationException& ex) {
		return $str({"XMLSignatureInput/OctetStream//"_s, $(getSourceURI())});
	}
	$shouldNotReachHere();
}

$String* XMLSignatureInput::getHTMLRepresentation() {
	$var($XMLSignatureInputDebugger, db, $new($XMLSignatureInputDebugger, this));
	return db->getHTMLRepresentation();
}

$String* XMLSignatureInput::getHTMLRepresentation($Set* inclusiveNamespaces) {
	$var($XMLSignatureInputDebugger, db, $new($XMLSignatureInputDebugger, this, inclusiveNamespaces));
	return db->getHTMLRepresentation();
}

$Node* XMLSignatureInput::getExcludeNode() {
	return this->excludeNode;
}

void XMLSignatureInput::setExcludeNode($Node* excludeNode) {
	$set(this, excludeNode, excludeNode);
}

$Node* XMLSignatureInput::getSubNode() {
	return this->subNode;
}

bool XMLSignatureInput::isExcludeComments() {
	return this->excludeComments;
}

void XMLSignatureInput::setExcludeComments(bool excludeComments) {
	this->excludeComments = excludeComments;
}

void XMLSignatureInput::updateOutputStream($OutputStream* diOs) {
	updateOutputStream(diOs, false);
}

void XMLSignatureInput::updateOutputStream($OutputStream* diOs, bool c14n11) {
	$useLocalCurrentObjectStackCache();
	if (diOs == this->outputStream) {
		return;
	}
	if (this->bytes != nullptr) {
		$nc(diOs)->write(this->bytes);
	} else if (this->inputOctetStreamProxy == nullptr) {
		$var($CanonicalizerBase, c14nizer, nullptr);
		if (c14n11) {
			$assign(c14nizer, $new($Canonicalizer11_OmitComments));
		} else {
			$assign(c14nizer, $new($Canonicalizer20010315OmitComments));
		}
		$nc(c14nizer)->engineCanonicalize(this, diOs, this->secureValidation);
	} else {
		$var($bytes, buffer, $new($bytes, 4 * 1024));
		int32_t bytesread = 0;
		try {
			while ((bytesread = $nc(this->inputOctetStreamProxy)->read(buffer)) != -1) {
				$nc(diOs)->write(buffer, 0, bytesread);
			}
		} catch ($IOException& ex) {
			$nc(this->inputOctetStreamProxy)->close();
			$throw(ex);
		}
	}
}

void XMLSignatureInput::setOutputStream($OutputStream* os) {
	$set(this, outputStream, os);
}

$bytes* XMLSignatureInput::getBytesFromInputStream() {
	if (this->bytes != nullptr) {
		return this->bytes;
	}
	if (this->inputOctetStreamProxy == nullptr) {
		return nullptr;
	}
	{
		$var($Throwable, var$0, nullptr);
		try {
			$set(this, bytes, $JavaUtils::getBytesFromStream(this->inputOctetStreamProxy));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->inputOctetStreamProxy)->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return this->bytes;
}

void XMLSignatureInput::addNodeFilter($NodeFilter* filter) {
	if (isOctetStream()) {
		try {
			convertToNodes();
		} catch ($Exception& e) {
			$throwNew($XMLSecurityRuntimeException, "signature.XMLSignatureInput.nodesetReference"_s, $cast($Exception, e));
		}
	}
	$nc(this->nodeFilters)->add(filter);
}

$List* XMLSignatureInput::getNodeFilters() {
	return this->nodeFilters;
}

void XMLSignatureInput::setNodeSet(bool b) {
	this->isNodeSet$ = b;
}

void XMLSignatureInput::convertToNodes() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($Document, doc, $XMLUtils::read($(this->getOctetStream()), this->secureValidation));
			$set(this, subNode, doc);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			if (this->inputOctetStreamProxy != nullptr) {
				$nc(this->inputOctetStreamProxy)->close();
			}
			$set(this, inputOctetStreamProxy, nullptr);
			$set(this, bytes, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

bool XMLSignatureInput::isSecureValidation() {
	return this->secureValidation;
}

void XMLSignatureInput::setSecureValidation(bool secureValidation) {
	this->secureValidation = secureValidation;
}

$String* XMLSignatureInput::getPreCalculatedDigest() {
	return this->preCalculatedDigest;
}

XMLSignatureInput::XMLSignatureInput() {
}

$Class* XMLSignatureInput::load$($String* name, bool initialize) {
	$loadClass(XMLSignatureInput, name, initialize, &_XMLSignatureInput_ClassInfo_, allocate$XMLSignatureInput);
	return class$;
}

$Class* XMLSignatureInput::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com