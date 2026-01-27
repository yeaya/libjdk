#include <com/sun/org/apache/xerces/internal/util/JAXPNamespaceContextWrapper.h>

#include <com/sun/org/apache/xerces/internal/util/SymbolTable.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/TreeSet.h>
#include <java/util/Vector.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <jcpp.h>

#undef DEFAULT_NS_PREFIX
#undef NULL_NS_URI

using $SymbolTable = ::com::sun::org::apache::xerces::internal::util::SymbolTable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $TreeSet = ::java::util::TreeSet;
using $Vector = ::java::util::Vector;
using $XMLConstants = ::javax::xml::XMLConstants;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _JAXPNamespaceContextWrapper_FieldInfo_[] = {
	{"fNamespaceContext", "Ljavax/xml/namespace/NamespaceContext;", nullptr, $PRIVATE, $field(JAXPNamespaceContextWrapper, fNamespaceContext)},
	{"fSymbolTable", "Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PRIVATE, $field(JAXPNamespaceContextWrapper, fSymbolTable)},
	{"fPrefixes", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(JAXPNamespaceContextWrapper, fPrefixes)},
	{"fAllPrefixes", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(JAXPNamespaceContextWrapper, fAllPrefixes)},
	{"fContext", "[I", nullptr, $PRIVATE, $field(JAXPNamespaceContextWrapper, fContext)},
	{"fCurrentContext", "I", nullptr, $PRIVATE, $field(JAXPNamespaceContextWrapper, fCurrentContext)},
	{}
};

$MethodInfo _JAXPNamespaceContextWrapper_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(JAXPNamespaceContextWrapper, init$, void, $SymbolTable*)},
	{"declarePrefix", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(JAXPNamespaceContextWrapper, declarePrefix, bool, $String*, $String*)},
	{"getAllPrefixes", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(JAXPNamespaceContextWrapper, getAllPrefixes, $Enumeration*)},
	{"getDeclaredPrefixAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JAXPNamespaceContextWrapper, getDeclaredPrefixAt, $String*, int32_t)},
	{"getDeclaredPrefixCount", "()I", nullptr, $PUBLIC, $virtualMethod(JAXPNamespaceContextWrapper, getDeclaredPrefixCount, int32_t)},
	{"getDeclaredPrefixes", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $method(JAXPNamespaceContextWrapper, getDeclaredPrefixes, $List*)},
	{"getNamespaceContext", "()Ljavax/xml/namespace/NamespaceContext;", nullptr, $PUBLIC, $method(JAXPNamespaceContextWrapper, getNamespaceContext, $NamespaceContext*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JAXPNamespaceContextWrapper, getPrefix, $String*, $String*)},
	{"getSymbolTable", "()Lcom/sun/org/apache/xerces/internal/util/SymbolTable;", nullptr, $PUBLIC, $method(JAXPNamespaceContextWrapper, getSymbolTable, $SymbolTable*)},
	{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(JAXPNamespaceContextWrapper, getURI, $String*, $String*)},
	{"popContext", "()V", nullptr, $PUBLIC, $virtualMethod(JAXPNamespaceContextWrapper, popContext, void)},
	{"pushContext", "()V", nullptr, $PUBLIC, $virtualMethod(JAXPNamespaceContextWrapper, pushContext, void)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(JAXPNamespaceContextWrapper, reset, void)},
	{"setDeclaredPrefixes", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $method(JAXPNamespaceContextWrapper, setDeclaredPrefixes, void, $List*)},
	{"setNamespaceContext", "(Ljavax/xml/namespace/NamespaceContext;)V", nullptr, $PUBLIC, $method(JAXPNamespaceContextWrapper, setNamespaceContext, void, $NamespaceContext*)},
	{"setSymbolTable", "(Lcom/sun/org/apache/xerces/internal/util/SymbolTable;)V", nullptr, $PUBLIC, $method(JAXPNamespaceContextWrapper, setSymbolTable, void, $SymbolTable*)},
	{}
};

$ClassInfo _JAXPNamespaceContextWrapper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.JAXPNamespaceContextWrapper",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.NamespaceContext",
	_JAXPNamespaceContextWrapper_FieldInfo_,
	_JAXPNamespaceContextWrapper_MethodInfo_
};

$Object* allocate$JAXPNamespaceContextWrapper($Class* clazz) {
	return $of($alloc(JAXPNamespaceContextWrapper));
}

void JAXPNamespaceContextWrapper::init$($SymbolTable* symbolTable) {
	$set(this, fAllPrefixes, $new($Vector));
	$set(this, fContext, $new($ints, 8));
	setSymbolTable(symbolTable);
}

void JAXPNamespaceContextWrapper::setNamespaceContext($NamespaceContext* context) {
	$set(this, fNamespaceContext, context);
}

$NamespaceContext* JAXPNamespaceContextWrapper::getNamespaceContext() {
	return this->fNamespaceContext;
}

void JAXPNamespaceContextWrapper::setSymbolTable($SymbolTable* symbolTable) {
	$set(this, fSymbolTable, symbolTable);
}

$SymbolTable* JAXPNamespaceContextWrapper::getSymbolTable() {
	return this->fSymbolTable;
}

void JAXPNamespaceContextWrapper::setDeclaredPrefixes($List* prefixes) {
	$set(this, fPrefixes, prefixes);
}

$List* JAXPNamespaceContextWrapper::getDeclaredPrefixes() {
	return this->fPrefixes;
}

$String* JAXPNamespaceContextWrapper::getURI($String* prefix) {
	if (this->fNamespaceContext != nullptr) {
		$var($String, uri, $nc(this->fNamespaceContext)->getNamespaceURI(prefix));
		$init($XMLConstants);
		if (uri != nullptr && !$nc($XMLConstants::NULL_NS_URI)->equals(uri)) {
			return (this->fSymbolTable != nullptr) ? $nc(this->fSymbolTable)->addSymbol(uri) : uri->intern();
		}
	}
	return nullptr;
}

$String* JAXPNamespaceContextWrapper::getPrefix($String* uri$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, uri, uri$renamed);
	if (this->fNamespaceContext != nullptr) {
		if (uri == nullptr) {
			$init($XMLConstants);
			$assign(uri, $XMLConstants::NULL_NS_URI);
		}
		$var($String, prefix, $nc(this->fNamespaceContext)->getPrefix(uri));
		if (prefix == nullptr) {
			$init($XMLConstants);
			$assign(prefix, $XMLConstants::DEFAULT_NS_PREFIX);
		}
		return (this->fSymbolTable != nullptr) ? $nc(this->fSymbolTable)->addSymbol(prefix) : $nc(prefix)->intern();
	}
	return nullptr;
}

$Enumeration* JAXPNamespaceContextWrapper::getAllPrefixes() {
	return $Collections::enumeration(static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractSet*>($$new($TreeSet, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(this->fAllPrefixes))))))));
}

void JAXPNamespaceContextWrapper::pushContext() {
	if (this->fCurrentContext + 1 == $nc(this->fContext)->length) {
		$var($ints, contextarray, $new($ints, $nc(this->fContext)->length * 2));
		$System::arraycopy(this->fContext, 0, contextarray, 0, $nc(this->fContext)->length);
		$set(this, fContext, contextarray);
	}
	$nc(this->fContext)->set(++this->fCurrentContext, $nc(this->fAllPrefixes)->size());
	if (this->fPrefixes != nullptr) {
		$nc(this->fAllPrefixes)->addAll(this->fPrefixes);
	}
}

void JAXPNamespaceContextWrapper::popContext() {
	$nc(this->fAllPrefixes)->setSize($nc(this->fContext)->get(this->fCurrentContext--));
}

bool JAXPNamespaceContextWrapper::declarePrefix($String* prefix, $String* uri) {
	return true;
}

int32_t JAXPNamespaceContextWrapper::getDeclaredPrefixCount() {
	return (this->fPrefixes != nullptr) ? $nc(this->fPrefixes)->size() : 0;
}

$String* JAXPNamespaceContextWrapper::getDeclaredPrefixAt(int32_t index) {
	return $cast($String, $nc(this->fPrefixes)->get(index));
}

void JAXPNamespaceContextWrapper::reset() {
	this->fCurrentContext = 0;
	$nc(this->fContext)->set(this->fCurrentContext, 0);
	$nc(this->fAllPrefixes)->clear();
}

JAXPNamespaceContextWrapper::JAXPNamespaceContextWrapper() {
}

$Class* JAXPNamespaceContextWrapper::load$($String* name, bool initialize) {
	$loadClass(JAXPNamespaceContextWrapper, name, initialize, &_JAXPNamespaceContextWrapper_ClassInfo_, allocate$JAXPNamespaceContextWrapper);
	return class$;
}

$Class* JAXPNamespaceContextWrapper::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com