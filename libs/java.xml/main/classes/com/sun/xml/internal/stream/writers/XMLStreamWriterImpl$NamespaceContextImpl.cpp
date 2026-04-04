#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl$NamespaceContextImpl.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/xml/internal/stream/util/ReadOnlyIterator.h>
#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <jcpp.h>

using $ReadOnlyIterator = ::com::sun::xml::internal::stream::util::ReadOnlyIterator;
using $XMLStreamWriterImpl = ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

void XMLStreamWriterImpl$NamespaceContextImpl::init$($XMLStreamWriterImpl* this$0) {
	$set(this, this$0, this$0);
	$set(this, userContext, nullptr);
	$set(this, internalContext, nullptr);
}

$String* XMLStreamWriterImpl$NamespaceContextImpl::getNamespaceURI($String* prefix$renamed) {
	$useLocalObjectStack();
	$var($String, prefix, prefix$renamed);
	$var($String, uri, nullptr);
	if (prefix != nullptr) {
		$assign(prefix, $nc(this->this$0->fSymbolTable)->addSymbol(prefix));
	}
	if (this->internalContext != nullptr) {
		$assign(uri, this->internalContext->getURI(prefix));
		if (uri != nullptr) {
			return uri;
		}
	}
	if (this->userContext != nullptr) {
		$assign(uri, this->userContext->getNamespaceURI(prefix));
		return uri;
	}
	return nullptr;
}

$String* XMLStreamWriterImpl$NamespaceContextImpl::getPrefix($String* uri$renamed) {
	$useLocalObjectStack();
	$var($String, uri, uri$renamed);
	$var($String, prefix, nullptr);
	if (uri != nullptr) {
		$assign(uri, $nc(this->this$0->fSymbolTable)->addSymbol(uri));
	}
	if (this->internalContext != nullptr) {
		$assign(prefix, this->internalContext->getPrefix(uri));
		if (prefix != nullptr) {
			return prefix;
		}
	}
	if (this->userContext != nullptr) {
		return this->userContext->getPrefix(uri);
	}
	return nullptr;
}

$Iterator* XMLStreamWriterImpl$NamespaceContextImpl::getPrefixes($String* uri$renamed) {
	$useLocalObjectStack();
	$var($String, uri, uri$renamed);
	$var($List, prefixes, nullptr);
	$var($Iterator, itr, nullptr);
	if (uri != nullptr) {
		$assign(uri, $nc(this->this$0->fSymbolTable)->addSymbol(uri));
	}
	if (this->userContext != nullptr) {
		$assign(itr, this->userContext->getPrefixes(uri));
	}
	if (this->internalContext != nullptr) {
		$assign(prefixes, this->internalContext->getPrefixes(uri));
	}
	if ((prefixes == nullptr) && (itr != nullptr)) {
		return itr;
	} else if ((prefixes != nullptr) && (itr == nullptr)) {
		return $new($ReadOnlyIterator, $(prefixes->iterator()));
	} else if ((prefixes != nullptr) && (itr != nullptr)) {
		$var($String, ob, nullptr);
		while (itr->hasNext()) {
			$assign(ob, $cast($String, itr->next()));
			if (ob != nullptr) {
				$assign(ob, $nc(this->this$0->fSymbolTable)->addSymbol(ob));
			}
			if (!prefixes->contains(ob)) {
				prefixes->add(ob);
			}
		}
		return $new($ReadOnlyIterator, $(prefixes->iterator()));
	}
	return this->this$0->fReadOnlyIterator;
}

XMLStreamWriterImpl$NamespaceContextImpl::XMLStreamWriterImpl$NamespaceContextImpl() {
}

$Class* XMLStreamWriterImpl$NamespaceContextImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLStreamWriterImpl$NamespaceContextImpl, this$0)},
		{"userContext", "Ljavax/xml/namespace/NamespaceContext;", nullptr, 0, $field(XMLStreamWriterImpl$NamespaceContextImpl, userContext)},
		{"internalContext", "Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;", nullptr, 0, $field(XMLStreamWriterImpl$NamespaceContextImpl, internalContext)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;)V", nullptr, 0, $method(XMLStreamWriterImpl$NamespaceContextImpl, init$, void, $XMLStreamWriterImpl*)},
		{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl$NamespaceContextImpl, getNamespaceURI, $String*, $String*)},
		{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl$NamespaceContextImpl, getPrefix, $String*, $String*)},
		{"getPrefixes", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(XMLStreamWriterImpl$NamespaceContextImpl, getPrefixes, $Iterator*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$NamespaceContextImpl", "com.sun.xml.internal.stream.writers.XMLStreamWriterImpl", "NamespaceContextImpl", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$NamespaceContextImpl",
		"java.lang.Object",
		"javax.xml.namespace.NamespaceContext",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl"
	};
	$loadClass(XMLStreamWriterImpl$NamespaceContextImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLStreamWriterImpl$NamespaceContextImpl);
	});
	return class$;
}

$Class* XMLStreamWriterImpl$NamespaceContextImpl::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com