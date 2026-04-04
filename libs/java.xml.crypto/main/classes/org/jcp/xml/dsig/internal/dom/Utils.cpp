#include <org/jcp/xml/dsig/internal/dom/Utils.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

void Utils::init$() {
}

$bytes* Utils::readBytesFromStream($InputStream* is) {
	$useLocalObjectStack();
	{
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		$var($Throwable, var$0, nullptr);
		$var($bytes, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$var($bytes, buf, $new($bytes, 1024));
				while (true) {
					int32_t read = $nc(is)->read(buf);
					if (read == -1) {
						break;
					}
					baos->write(buf, 0, read);
					if (read < 1024) {
						break;
					}
				}
				$assign(var$2, baos->toByteArray());
				return$1 = true;
				goto $finally;
			} catch ($Throwable& t$) {
				try {
					baos->close();
				} catch ($Throwable& x2) {
					t$->addSuppressed(x2);
				}
				$throw(t$);
			}
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			baos->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Set* Utils::toNodeSet($Iterator* i) {
	$useLocalObjectStack();
	$var($Set, nodeSet, $new($HashSet));
	while ($nc(i)->hasNext()) {
		$var($Node, n, $cast($Node, i->next()));
		nodeSet->add(n);
		if ($nc(n)->getNodeType() == $Node::ELEMENT_NODE) {
			$var($NamedNodeMap, nnm, n->getAttributes());
			for (int32_t j = 0, length = $nc(nnm)->getLength(); j < length; ++j) {
				nodeSet->add($(nnm->item(j)));
			}
		}
	}
	return nodeSet;
}

$String* Utils::parseIdFromSameDocumentURI($String* uri) {
	if ($nc(uri)->length() == 0) {
		return nullptr;
	}
	$var($String, id, uri->substring(1));
	if (id->startsWith("xpointer(id("_s)) {
		int32_t i1 = id->indexOf(u'\'');
		int32_t i2 = id->indexOf(u'\'', i1 + 1);
		$assign(id, id->substring(i1 + 1, i2));
	}
	return id;
}

bool Utils::sameDocumentURI($String* uri) {
	bool var$0 = uri != nullptr;
	if (var$0) {
		bool var$1 = uri->length() == 0;
		var$0 = var$1 || uri->charAt(0) == u'#';
	}
	return var$0;
}

bool Utils::secureValidation($XMLCryptoContext* xc) {
	if (xc == nullptr) {
		return false;
	}
	return getBoolean(xc, "org.jcp.xml.dsig.secureValidation"_s);
}

bool Utils::getBoolean($XMLCryptoContext* xc, $String* name) {
	$var($Boolean, value, $cast($Boolean, $nc(xc)->getProperty(name)));
	return value != nullptr && value->booleanValue();
}

Utils::Utils() {
}

$Class* Utils::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Utils, init$, void)},
		{"getBoolean", "(Ljavax/xml/crypto/XMLCryptoContext;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Utils, getBoolean, bool, $XMLCryptoContext*, $String*)},
		{"parseIdFromSameDocumentURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Utils, parseIdFromSameDocumentURI, $String*, $String*)},
		{"readBytesFromStream", "(Ljava/io/InputStream;)[B", nullptr, $PUBLIC | $STATIC, $staticMethod(Utils, readBytesFromStream, $bytes*, $InputStream*), "java.io.IOException"},
		{"sameDocumentURI", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Utils, sameDocumentURI, bool, $String*)},
		{"secureValidation", "(Ljavax/xml/crypto/XMLCryptoContext;)Z", nullptr, $STATIC, $staticMethod(Utils, secureValidation, bool, $XMLCryptoContext*)},
		{"toNodeSet", "(Ljava/util/Iterator;)Ljava/util/Set;", "(Ljava/util/Iterator<*>;)Ljava/util/Set<Lorg/w3c/dom/Node;>;", $STATIC, $staticMethod(Utils, toNodeSet, $Set*, $Iterator*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.Utils",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Utils, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Utils);
	});
	return class$;
}

$Class* Utils::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org