#include <com/sun/org/apache/xerces/internal/xinclude/MultipleScopeNamespaceSupport.h>

#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport$Prefixes.h>
#include <com/sun/org/apache/xerces/internal/util/NamespaceSupport.h>
#include <com/sun/org/apache/xerces/internal/util/XMLSymbols.h>
#include <com/sun/org/apache/xerces/internal/xni/NamespaceContext.h>
#include <java/util/Enumeration.h>
#include <jcpp.h>

#undef PREFIX_XML
#undef PREFIX_XMLNS
#undef XMLNS_URI
#undef XML_URI

using $NamespaceSupport = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport;
using $NamespaceSupport$Prefixes = ::com::sun::org::apache::xerces::internal::util::NamespaceSupport$Prefixes;
using $XMLSymbols = ::com::sun::org::apache::xerces::internal::util::XMLSymbols;
using $NamespaceContext = ::com::sun::org::apache::xerces::internal::xni::NamespaceContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xinclude {

$FieldInfo _MultipleScopeNamespaceSupport_FieldInfo_[] = {
	{"fScope", "[I", nullptr, $PROTECTED, $field(MultipleScopeNamespaceSupport, fScope)},
	{"fCurrentScope", "I", nullptr, $PROTECTED, $field(MultipleScopeNamespaceSupport, fCurrentScope)},
	{}
};

$MethodInfo _MultipleScopeNamespaceSupport_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(MultipleScopeNamespaceSupport, init$, void)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/NamespaceContext;)V", nullptr, $PUBLIC, $method(MultipleScopeNamespaceSupport, init$, void, $NamespaceContext*)},
	{"getAllPrefixes", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(MultipleScopeNamespaceSupport, getAllPrefixes, $Enumeration*)},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultipleScopeNamespaceSupport, getPrefix, $String*, $String*)},
	{"getPrefix", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultipleScopeNamespaceSupport, getPrefix, $String*, $String*, int32_t)},
	{"getPrefix", "(Ljava/lang/String;II)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultipleScopeNamespaceSupport, getPrefix, $String*, $String*, int32_t, int32_t)},
	{"getScopeForContext", "(I)I", nullptr, $PUBLIC, $virtualMethod(MultipleScopeNamespaceSupport, getScopeForContext, int32_t, int32_t)},
	{"getURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultipleScopeNamespaceSupport, getURI, $String*, $String*)},
	{"getURI", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultipleScopeNamespaceSupport, getURI, $String*, $String*, int32_t)},
	{"getURI", "(Ljava/lang/String;II)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MultipleScopeNamespaceSupport, getURI, $String*, $String*, int32_t, int32_t)},
	{"popScope", "()V", nullptr, $PUBLIC, $virtualMethod(MultipleScopeNamespaceSupport, popScope, void)},
	{"pushScope", "()V", nullptr, $PUBLIC, $virtualMethod(MultipleScopeNamespaceSupport, pushScope, void)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(MultipleScopeNamespaceSupport, reset, void)},
	{}
};

$ClassInfo _MultipleScopeNamespaceSupport_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xinclude.MultipleScopeNamespaceSupport",
	"com.sun.org.apache.xerces.internal.util.NamespaceSupport",
	nullptr,
	_MultipleScopeNamespaceSupport_FieldInfo_,
	_MultipleScopeNamespaceSupport_MethodInfo_
};

$Object* allocate$MultipleScopeNamespaceSupport($Class* clazz) {
	return $of($alloc(MultipleScopeNamespaceSupport));
}

void MultipleScopeNamespaceSupport::init$() {
	$NamespaceSupport::init$();
	$set(this, fScope, $new($ints, 8));
	this->fCurrentScope = 0;
	$nc(this->fScope)->set(0, 0);
}

void MultipleScopeNamespaceSupport::init$($NamespaceContext* context) {
	$NamespaceSupport::init$(context);
	$set(this, fScope, $new($ints, 8));
	this->fCurrentScope = 0;
	$nc(this->fScope)->set(0, 0);
}

$Enumeration* MultipleScopeNamespaceSupport::getAllPrefixes() {
	$useLocalCurrentObjectStackCache();
	int32_t count = 0;
	if ($nc(this->fPrefixes)->length < ($nc(this->fNamespace)->length / 2)) {
		$var($StringArray, prefixes, $new($StringArray, this->fNamespaceSize));
		$set(this, fPrefixes, prefixes);
	}
	$var($String, prefix, nullptr);
	bool unique = true;
	for (int32_t i = $nc(this->fContext)->get($nc(this->fScope)->get(this->fCurrentScope)); i <= (this->fNamespaceSize - 2); i += 2) {
		$assign(prefix, $nc(this->fNamespace)->get(i));
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

int32_t MultipleScopeNamespaceSupport::getScopeForContext(int32_t context) {
	int32_t scope = this->fCurrentScope;
	while (context < $nc(this->fScope)->get(scope)) {
		--scope;
	}
	return scope;
}

$String* MultipleScopeNamespaceSupport::getPrefix($String* uri) {
	return getPrefix(uri, this->fNamespaceSize, $nc(this->fContext)->get($nc(this->fScope)->get(this->fCurrentScope)));
}

$String* MultipleScopeNamespaceSupport::getURI($String* prefix) {
	return getURI(prefix, this->fNamespaceSize, $nc(this->fContext)->get($nc(this->fScope)->get(this->fCurrentScope)));
}

$String* MultipleScopeNamespaceSupport::getPrefix($String* uri, int32_t context) {
	return getPrefix(uri, $nc(this->fContext)->get(context + 1), $nc(this->fContext)->get($nc(this->fScope)->get(getScopeForContext(context))));
}

$String* MultipleScopeNamespaceSupport::getURI($String* prefix, int32_t context) {
	return getURI(prefix, $nc(this->fContext)->get(context + 1), $nc(this->fContext)->get($nc(this->fScope)->get(getScopeForContext(context))));
}

$String* MultipleScopeNamespaceSupport::getPrefix($String* uri, int32_t start, int32_t end) {
	$init($NamespaceContext);
	if (uri == $NamespaceContext::XML_URI) {
		$init($XMLSymbols);
		return $XMLSymbols::PREFIX_XML;
	}
	if (uri == $NamespaceContext::XMLNS_URI) {
		$init($XMLSymbols);
		return $XMLSymbols::PREFIX_XMLNS;
	}
	for (int32_t i = start; i > end; i -= 2) {
		if ($nc(this->fNamespace)->get(i - 1) == uri) {
			if (getURI($nc(this->fNamespace)->get(i - 2)) == uri) {
				return $nc(this->fNamespace)->get(i - 2);
			}
		}
	}
	return nullptr;
}

$String* MultipleScopeNamespaceSupport::getURI($String* prefix, int32_t start, int32_t end) {
	$init($XMLSymbols);
	if (prefix == $XMLSymbols::PREFIX_XML) {
		$init($NamespaceContext);
		return $NamespaceContext::XML_URI;
	}
	if (prefix == $XMLSymbols::PREFIX_XMLNS) {
		$init($NamespaceContext);
		return $NamespaceContext::XMLNS_URI;
	}
	for (int32_t i = start; i > end; i -= 2) {
		if ($nc(this->fNamespace)->get(i - 2) == prefix) {
			return $nc(this->fNamespace)->get(i - 1);
		}
	}
	return nullptr;
}

void MultipleScopeNamespaceSupport::reset() {
	this->fCurrentContext = $nc(this->fScope)->get(this->fCurrentScope);
	this->fNamespaceSize = $nc(this->fContext)->get(this->fCurrentContext);
}

void MultipleScopeNamespaceSupport::pushScope() {
	if (this->fCurrentScope + 1 == $nc(this->fScope)->length) {
		$var($ints, contextarray, $new($ints, $nc(this->fScope)->length * 2));
		$System::arraycopy(this->fScope, 0, contextarray, 0, $nc(this->fScope)->length);
		$set(this, fScope, contextarray);
	}
	pushContext();
	$nc(this->fScope)->set(++this->fCurrentScope, this->fCurrentContext);
}

void MultipleScopeNamespaceSupport::popScope() {
	this->fCurrentContext = $nc(this->fScope)->get(this->fCurrentScope--);
	popContext();
}

MultipleScopeNamespaceSupport::MultipleScopeNamespaceSupport() {
}

$Class* MultipleScopeNamespaceSupport::load$($String* name, bool initialize) {
	$loadClass(MultipleScopeNamespaceSupport, name, initialize, &_MultipleScopeNamespaceSupport_ClassInfo_, allocate$MultipleScopeNamespaceSupport);
	return class$;
}

$Class* MultipleScopeNamespaceSupport::class$ = nullptr;

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com