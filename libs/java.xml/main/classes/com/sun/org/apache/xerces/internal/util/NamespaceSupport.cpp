#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>

#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport$IteratorPrefixes.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport$Prefixes.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef PREFIX_XML
#undef PREFIX_XMLNS
#undef XMLNS_URI
#undef XML_URI

using $NamespaceSupport$IteratorPrefixes = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport$IteratorPrefixes;
using $NamespaceSupport$Prefixes = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport$Prefixes;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _NamespaceSupport_FieldInfo_[] = {
	{"fNamespace", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(NamespaceSupport, fNamespace)},
	{"fNamespaceSize", "I", nullptr, $PROTECTED, $field(NamespaceSupport, fNamespaceSize)},
	{"fContext", "[I", nullptr, $PROTECTED, $field(NamespaceSupport, fContext)},
	{"fCurrentContext", "I", nullptr, $PROTECTED, $field(NamespaceSupport, fCurrentContext)},
	{"fPrefixes", "[Ljava/lang/String;", nullptr, $PROTECTED, $field(NamespaceSupport, fPrefixes)},
	{}
};

$MethodInfo _NamespaceSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(NamespaceSupport, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)V", nullptr, $PUBLIC, $method(NamespaceSupport, init$, void, $NamespaceContext*)},
	{"containsPrefix", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, containsPrefix, bool, $String*)},
	{"containsPrefixInCurrentContext", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, containsPrefixInCurrentContext, bool, $String*)},
	{"declarePrefix", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, declarePrefix, bool, $String*, $String*)},
	{"getAllPrefixes", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(NamespaceSupport, getAllPrefixes, $Enumeration*)},
	{"getDeclaredPrefixAt", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, getDeclaredPrefixAt, $String*, int32_t)},
	{"getDeclaredPrefixCount", "()I", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, getDeclaredPrefixCount, int32_t)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, getPrefix, $String*, $String*)},
	{"getPrefixes", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(NamespaceSupport, getPrefixes, $Iterator*)},
	{"getPrefixes", "(Ljava/lang/String;)Ljava/util/List;", "(Ljava/lang/String;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(NamespaceSupport, getPrefixes, $List*, $String*)},
	{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, getURI, $String*, $String*)},
	{"popContext", "()V", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, popContext, void)},
	{"pushContext", "()V", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, pushContext, void)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(NamespaceSupport, reset, void)},
	{}
};

$InnerClassInfo _NamespaceSupport_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.NamespaceSupport$Prefixes", "com.sun.org.apache.xerces.internal.util.NamespaceSupport", "Prefixes", $PROTECTED | $FINAL},
	{"com.sun.org.apache.xerces.internal.util.NamespaceSupport$IteratorPrefixes", "com.sun.org.apache.xerces.internal.util.NamespaceSupport", "IteratorPrefixes", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _NamespaceSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.NamespaceSupport",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xni.NamespaceContext",
	_NamespaceSupport_FieldInfo_,
	_NamespaceSupport_MethodInfo_,
	nullptr,
	nullptr,
	_NamespaceSupport_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.NamespaceSupport$Prefixes,com.sun.org.apache.xerces.internal.util.NamespaceSupport$IteratorPrefixes"
};

$Object* allocate$NamespaceSupport($Class* clazz) {
	return $of($alloc(NamespaceSupport));
}

void NamespaceSupport::init$() {
	$set(this, fNamespace, $new($StringArray, 16 * 2));
	$set(this, fContext, $new($ints, 8));
	$set(this, fPrefixes, $new($StringArray, 16));
}

void NamespaceSupport::init$($NamespaceContext* context) {
	$useLocalCurrentObjectStackCache();
	$set(this, fNamespace, $new($StringArray, 16 * 2));
	$set(this, fContext, $new($ints, 8));
	$set(this, fPrefixes, $new($StringArray, 16));
	pushContext();
	$var($Enumeration, prefixes, $nc(context)->getAllPrefixes());
	while ($nc(prefixes)->hasMoreElements()) {
		$var($String, prefix, $cast($String, prefixes->nextElement()));
		$var($String, uri, context->getURI(prefix));
		declarePrefix(prefix, uri);
	}
}

void NamespaceSupport::reset() {
	this->fNamespaceSize = 0;
	this->fCurrentContext = 0;
	$init($XMLSymbols);
	$nc(this->fNamespace)->set(this->fNamespaceSize++, $XMLSymbols::PREFIX_XML);
	$init($NamespaceContext);
	$nc(this->fNamespace)->set(this->fNamespaceSize++, $NamespaceContext::XML_URI);
	$nc(this->fNamespace)->set(this->fNamespaceSize++, $XMLSymbols::PREFIX_XMLNS);
	$nc(this->fNamespace)->set(this->fNamespaceSize++, $NamespaceContext::XMLNS_URI);
	$nc(this->fContext)->set(this->fCurrentContext, this->fNamespaceSize);
}

void NamespaceSupport::pushContext() {
	if (this->fCurrentContext + 1 == $nc(this->fContext)->length) {
		$var($ints, contextarray, $new($ints, $nc(this->fContext)->length * 2));
		$System::arraycopy(this->fContext, 0, contextarray, 0, $nc(this->fContext)->length);
		$set(this, fContext, contextarray);
	}
	$nc(this->fContext)->set(++this->fCurrentContext, this->fNamespaceSize);
}

void NamespaceSupport::popContext() {
	this->fNamespaceSize = $nc(this->fContext)->get(this->fCurrentContext--);
}

bool NamespaceSupport::declarePrefix($String* prefix, $String* uri) {
	$init($XMLSymbols);
	if (prefix == $XMLSymbols::PREFIX_XML || prefix == $XMLSymbols::PREFIX_XMLNS) {
		return false;
	}
	for (int32_t i = this->fNamespaceSize; i > $nc(this->fContext)->get(this->fCurrentContext); i -= 2) {
		if ($nc(this->fNamespace)->get(i - 2) == prefix) {
			$nc(this->fNamespace)->set(i - 1, uri);
			return true;
		}
	}
	if (this->fNamespaceSize == $nc(this->fNamespace)->length) {
		$var($StringArray, namespacearray, $new($StringArray, this->fNamespaceSize * 2));
		$System::arraycopy(this->fNamespace, 0, namespacearray, 0, this->fNamespaceSize);
		$set(this, fNamespace, namespacearray);
	}
	$nc(this->fNamespace)->set(this->fNamespaceSize++, prefix);
	$nc(this->fNamespace)->set(this->fNamespaceSize++, uri);
	return true;
}

$String* NamespaceSupport::getURI($String* prefix) {
	for (int32_t i = this->fNamespaceSize; i > 0; i -= 2) {
		if ($nc(this->fNamespace)->get(i - 2) == prefix) {
			return $nc(this->fNamespace)->get(i - 1);
		}
	}
	return nullptr;
}

$String* NamespaceSupport::getPrefix($String* uri) {
	for (int32_t i = this->fNamespaceSize; i > 0; i -= 2) {
		if ($nc(this->fNamespace)->get(i - 1) == uri) {
			if (getURI($nc(this->fNamespace)->get(i - 2)) == uri) {
				return $nc(this->fNamespace)->get(i - 2);
			}
		}
	}
	return nullptr;
}

int32_t NamespaceSupport::getDeclaredPrefixCount() {
	return (this->fNamespaceSize - $nc(this->fContext)->get(this->fCurrentContext)) / 2;
}

$String* NamespaceSupport::getDeclaredPrefixAt(int32_t index) {
	return $nc(this->fNamespace)->get($nc(this->fContext)->get(this->fCurrentContext) + index * 2);
}

$Iterator* NamespaceSupport::getPrefixes() {
	$useLocalCurrentObjectStackCache();
	int32_t count = 0;
	if ($nc(this->fPrefixes)->length < ($nc(this->fNamespace)->length / 2)) {
		$var($StringArray, prefixes, $new($StringArray, this->fNamespaceSize));
		$set(this, fPrefixes, prefixes);
	}
	$var($String, prefix, nullptr);
	bool unique = true;
	for (int32_t i = 2; i < (this->fNamespaceSize - 2); i += 2) {
		$assign(prefix, $nc(this->fNamespace)->get(i + 2));
		for (int32_t k = 0; k < count; ++k) {
			if ($nc(this->fPrefixes)->get(k) == prefix) {
				unique = false;
				break;
			}
		}
		if (unique) {
			$nc(this->fPrefixes)->set(count++, prefix);
		}
		unique = true;
	}
	return $new($NamespaceSupport$IteratorPrefixes, this, this->fPrefixes, count);
}

$Enumeration* NamespaceSupport::getAllPrefixes() {
	$useLocalCurrentObjectStackCache();
	int32_t count = 0;
	if ($nc(this->fPrefixes)->length < ($nc(this->fNamespace)->length / 2)) {
		$var($StringArray, prefixes, $new($StringArray, this->fNamespaceSize));
		$set(this, fPrefixes, prefixes);
	}
	$var($String, prefix, nullptr);
	bool unique = true;
	for (int32_t i = 2; i < (this->fNamespaceSize - 2); i += 2) {
		$assign(prefix, $nc(this->fNamespace)->get(i + 2));
		for (int32_t k = 0; k < count; ++k) {
			if ($nc(this->fPrefixes)->get(k) == prefix) {
				unique = false;
				break;
			}
		}
		if (unique) {
			$nc(this->fPrefixes)->set(count++, prefix);
		}
		unique = true;
	}
	return $new($NamespaceSupport$Prefixes, this, this->fPrefixes, count);
}

$List* NamespaceSupport::getPrefixes($String* uri) {
	$useLocalCurrentObjectStackCache();
	int32_t count = 0;
	$var($String, prefix, nullptr);
	bool unique = true;
	$var($List, prefixList, $new($ArrayList));
	for (int32_t i = this->fNamespaceSize; i > 0; i -= 2) {
		if ($nc(this->fNamespace)->get(i - 1) == uri) {
			if (!prefixList->contains($nc(this->fNamespace)->get(i - 2))) {
				prefixList->add($nc(this->fNamespace)->get(i - 2));
			}
		}
	}
	return prefixList;
}

bool NamespaceSupport::containsPrefix($String* prefix) {
	for (int32_t i = this->fNamespaceSize; i > 0; i -= 2) {
		if ($nc(this->fNamespace)->get(i - 2) == prefix) {
			return true;
		}
	}
	return false;
}

bool NamespaceSupport::containsPrefixInCurrentContext($String* prefix) {
	for (int32_t i = $nc(this->fContext)->get(this->fCurrentContext); i < this->fNamespaceSize; i += 2) {
		if ($nc(this->fNamespace)->get(i) == prefix) {
			return true;
		}
	}
	return false;
}

NamespaceSupport::NamespaceSupport() {
}

$Class* NamespaceSupport::load$($String* name, bool initialize) {
	$loadClass(NamespaceSupport, name, initialize, &_NamespaceSupport_ClassInfo_, allocate$NamespaceSupport);
	return class$;
}

$Class* NamespaceSupport::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com