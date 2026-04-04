#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizerSpi.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/util/Set.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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
							namespace c14n {

void CanonicalizerSpi::init$() {
}

void CanonicalizerSpi::engineCanonicalize($bytes* inputBytes, $OutputStream* writer, bool secureValidation) {
	$useLocalObjectStack();
	$var($Document, document, nullptr);
	{
		$var($InputStream, bais, $new($ByteArrayInputStream, inputBytes));
		$var($Throwable, var$0, nullptr);
		try {
			try {
				$assign(document, $XMLUtils::read(bais, secureValidation));
			} catch ($Throwable& t$) {
				try {
					bais->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			bais->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	this->engineCanonicalizeSubTree(document, writer);
}

CanonicalizerSpi::CanonicalizerSpi() {
}

$Class* CanonicalizerSpi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CanonicalizerSpi, init$, void)},
		{"engineCanonicalize", "([BLjava/io/OutputStream;Z)V", nullptr, $PUBLIC, $virtualMethod(CanonicalizerSpi, engineCanonicalize, void, $bytes*, $OutputStream*, bool), "com.sun.org.apache.xml.internal.security.parser.XMLParserException,java.io.IOException,com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CanonicalizerSpi, engineCanonicalizeSubTree, void, $Node*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CanonicalizerSpi, engineCanonicalizeSubTree, void, $Node*, $String*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/lang/String;ZLjava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CanonicalizerSpi, engineCanonicalizeSubTree, void, $Node*, $String*, bool, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"engineCanonicalizeXPathNodeSet", "(Ljava/util/Set;Ljava/io/OutputStream;)V", "(Ljava/util/Set<Lorg/w3c/dom/Node;>;Ljava/io/OutputStream;)V", $PUBLIC | $ABSTRACT, $virtualMethod(CanonicalizerSpi, engineCanonicalizeXPathNodeSet, void, $Set*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"engineCanonicalizeXPathNodeSet", "(Ljava/util/Set;Ljava/lang/String;Ljava/io/OutputStream;)V", "(Ljava/util/Set<Lorg/w3c/dom/Node;>;Ljava/lang/String;Ljava/io/OutputStream;)V", $PUBLIC | $ABSTRACT, $virtualMethod(CanonicalizerSpi, engineCanonicalizeXPathNodeSet, void, $Set*, $String*, $OutputStream*), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
		{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(CanonicalizerSpi, engineGetURI, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xml.internal.security.c14n.CanonicalizerSpi",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CanonicalizerSpi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CanonicalizerSpi);
	});
	return class$;
}

$Class* CanonicalizerSpi::class$ = nullptr;

							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com