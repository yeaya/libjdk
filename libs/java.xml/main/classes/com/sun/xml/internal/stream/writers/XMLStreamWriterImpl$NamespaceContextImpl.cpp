#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl$NamespaceContextImpl.h>

#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <com/sun/xml/internal/stream/util/ReadOnlyIterator.h>
#include <com/sun/xml/internal/stream/writers/XMLStreamWriterImpl.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <jcpp.h>

using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $ReadOnlyIterator = ::com::sun::xml::internal::stream::util::ReadOnlyIterator;
using $XMLStreamWriterImpl = ::com::sun::xml::internal::stream::writers::XMLStreamWriterImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

$FieldInfo _XMLStreamWriterImpl$NamespaceContextImpl_FieldInfo_[] = {
	{"this$0", "Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;", nullptr, $FINAL | $SYNTHETIC, $field(XMLStreamWriterImpl$NamespaceContextImpl, this$0)},
	{"userContext", "Ljavax/xml/namespace/NamespaceContext;", nullptr, 0, $field(XMLStreamWriterImpl$NamespaceContextImpl, userContext)},
	{"internalContext", "Lcom/sun/org/apache/xerces/internal/util/NamespaceSupport;", nullptr, 0, $field(XMLStreamWriterImpl$NamespaceContextImpl, internalContext)},
	{}
};

$MethodInfo _XMLStreamWriterImpl$NamespaceContextImpl_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/xml/internal/stream/writers/XMLStreamWriterImpl;)V", nullptr, 0, $method(XMLStreamWriterImpl$NamespaceContextImpl, init$, void, $XMLStreamWriterImpl*)},
	{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl$NamespaceContextImpl, getNamespaceURI, $String*, $String*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLStreamWriterImpl$NamespaceContextImpl, getPrefix, $String*, $String*)},
	{"getPrefixes", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(XMLStreamWriterImpl$NamespaceContextImpl, getPrefixes, $Iterator*, $String*)},
	{}
};

$InnerClassInfo _XMLStreamWriterImpl$NamespaceContextImpl_InnerClassesInfo_[] = {
	{"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$NamespaceContextImpl", "com.sun.xml.internal.stream.writers.XMLStreamWriterImpl", "NamespaceContextImpl", 0},
	{}
};

$ClassInfo _XMLStreamWriterImpl$NamespaceContextImpl_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl$NamespaceContextImpl",
	"java.lang.Object",
	"javax.xml.namespace.NamespaceContext",
	_XMLStreamWriterImpl$NamespaceContextImpl_FieldInfo_,
	_XMLStreamWriterImpl$NamespaceContextImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XMLStreamWriterImpl$NamespaceContextImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.xml.internal.stream.writers.XMLStreamWriterImpl"
};

$Object* allocate$XMLStreamWriterImpl$NamespaceContextImpl($Class* clazz) {
	return $of($alloc(XMLStreamWriterImpl$NamespaceContextImpl));
}

void XMLStreamWriterImpl$NamespaceContextImpl::init$($XMLStreamWriterImpl* this$0) {
	$set(this, this$0, this$0);
	$set(this, userContext, nullptr);
	$set(this, internalContext, nullptr);
}

$String* XMLStreamWriterImpl$NamespaceContextImpl::getNamespaceURI($String* prefix$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, prefix$renamed);
	$var($String, uri, nullptr);
	if (prefix != nullptr) {
		$assign(prefix, $nc(this->this$0->fSymbolTable)->addSymbol(prefix));
	}
	if (this->internalContext != nullptr) {
		$assign(uri, $nc(this->internalContext)->getURI(prefix));
		if (uri != nullptr) {
			return uri;
		}
	}
	if (this->userContext != nullptr) {
		$assign(uri, $nc(this->userContext)->getNamespaceURI(prefix));
		return uri;
	}
	return nullptr;
}

$String* XMLStreamWriterImpl$NamespaceContextImpl::getPrefix($String* uri$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, uri, uri$renamed);
	$var($String, prefix, nullptr);
	if (uri != nullptr) {
		$assign(uri, $nc(this->this$0->fSymbolTable)->addSymbol(uri));
	}
	if (this->internalContext != nullptr) {
		$assign(prefix, $nc(this->internalContext)->getPrefix(uri));
		if (prefix != nullptr) {
			return prefix;
		}
	}
	if (this->userContext != nullptr) {
		return $nc(this->userContext)->getPrefix(uri);
	}
	return nullptr;
}

$Iterator* XMLStreamWriterImpl$NamespaceContextImpl::getPrefixes($String* uri$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, uri, uri$renamed);
	$var($List, prefixes, nullptr);
	$var($Iterator, itr, nullptr);
	if (uri != nullptr) {
		$assign(uri, $nc(this->this$0->fSymbolTable)->addSymbol(uri));
	}
	if (this->userContext != nullptr) {
		$assign(itr, $nc(this->userContext)->getPrefixes(uri));
	}
	if (this->internalContext != nullptr) {
		$assign(prefixes, $nc(this->internalContext)->getPrefixes(uri));
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
	$loadClass(XMLStreamWriterImpl$NamespaceContextImpl, name, initialize, &_XMLStreamWriterImpl$NamespaceContextImpl_ClassInfo_, allocate$XMLStreamWriterImpl$NamespaceContextImpl);
	return class$;
}

$Class* XMLStreamWriterImpl$NamespaceContextImpl::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com