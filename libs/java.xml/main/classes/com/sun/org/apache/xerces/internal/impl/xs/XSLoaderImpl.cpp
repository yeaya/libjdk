#include <com/sun/org/apache/xerces/internal/impl/xs/XSLoaderImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSLoaderImpl$XSGrammarMerger.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XSGrammar.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <com/sun/org/apache/xerces/internal/xs/LSInputList.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSLoader.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/DOMStringList.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <jcpp.h>

#undef XMLGRAMMAR_POOL

using $XMLSchemaLoader = ::com::sun::org::apache::xerces::internal::impl::xs::XMLSchemaLoader;
using $XSLoaderImpl$XSGrammarMerger = ::com::sun::org::apache::xerces::internal::impl::xs::XSLoaderImpl$XSGrammarMerger;
using $XSGrammarPool = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSGrammarPool;
using $XSGrammar = ::com::sun::org::apache::xerces::internal::xni::grammars::XSGrammar;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $LSInputList = ::com::sun::org::apache::xerces::internal::xs::LSInputList;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSLoader = ::com::sun::org::apache::xerces::internal::xs::XSLoader;
using $XSModel = ::com::sun::org::apache::xerces::internal::xs::XSModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $DOMStringList = ::org::w3c::dom::DOMStringList;
using $LSInput = ::org::w3c::dom::ls::LSInput;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$FieldInfo _XSLoaderImpl_FieldInfo_[] = {
	{"fGrammarPool", "Lcom/sun/org/apache/xerces/internal/impl/xs/util/XSGrammarPool;", nullptr, $PRIVATE | $FINAL, $field(XSLoaderImpl, fGrammarPool)},
	{"fSchemaLoader", "Lcom/sun/org/apache/xerces/internal/impl/xs/XMLSchemaLoader;", nullptr, $PRIVATE | $FINAL, $field(XSLoaderImpl, fSchemaLoader)},
	{}
};

$MethodInfo _XSLoaderImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSLoaderImpl, init$, void)},
	{"canSetParameter", "(Ljava/lang/String;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl, canSetParameter, bool, $String*, Object$*)},
	{"getConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl, getConfig, $DOMConfiguration*)},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl, getParameter, $Object*, $String*), "org.w3c.dom.DOMException"},
	{"getParameterNames", "()Lorg/w3c/dom/DOMStringList;", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl, getParameterNames, $DOMStringList*)},
	{"load", "(Lorg/w3c/dom/ls/LSInput;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl, load, $XSModel*, $LSInput*)},
	{"loadInputList", "(Lcom/sun/org/apache/xerces/internal/xs/LSInputList;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl, loadInputList, $XSModel*, $LSInputList*)},
	{"loadURI", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl, loadURI, $XSModel*, $String*)},
	{"loadURIList", "(Lcom/sun/org/apache/xerces/internal/xs/StringList;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl, loadURIList, $XSModel*, $StringList*)},
	{"setParameter", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl, setParameter, void, $String*, Object$*), "org.w3c.dom.DOMException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XSLoaderImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XSLoaderImpl$XSGrammarMerger", "com.sun.org.apache.xerces.internal.impl.xs.XSLoaderImpl", "XSGrammarMerger", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _XSLoaderImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSLoaderImpl",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.xs.XSLoader,org.w3c.dom.DOMConfiguration",
	_XSLoaderImpl_FieldInfo_,
	_XSLoaderImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XSLoaderImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XSLoaderImpl$XSGrammarMerger"
};

$Object* allocate$XSLoaderImpl($Class* clazz) {
	return $of($alloc(XSLoaderImpl));
}

int32_t XSLoaderImpl::hashCode() {
	 return this->$XSLoader::hashCode();
}

bool XSLoaderImpl::equals(Object$* arg0) {
	 return this->$XSLoader::equals(arg0);
}

$Object* XSLoaderImpl::clone() {
	 return this->$XSLoader::clone();
}

$String* XSLoaderImpl::toString() {
	 return this->$XSLoader::toString();
}

void XSLoaderImpl::finalize() {
	this->$XSLoader::finalize();
}

void XSLoaderImpl::init$() {
	$set(this, fGrammarPool, $new($XSLoaderImpl$XSGrammarMerger));
	$set(this, fSchemaLoader, $new($XMLSchemaLoader));
	$init($XMLSchemaLoader);
	$nc(this->fSchemaLoader)->setProperty($XMLSchemaLoader::XMLGRAMMAR_POOL, this->fGrammarPool);
}

$DOMConfiguration* XSLoaderImpl::getConfig() {
	return this;
}

$XSModel* XSLoaderImpl::loadURIList($StringList* uriList) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(uriList)->getLength();
	try {
		$nc(this->fGrammarPool)->clear();
		for (int32_t i = 0; i < length; ++i) {
			$nc(this->fSchemaLoader)->loadGrammar($$new($XMLInputSource, nullptr, $(uriList->item(i)), nullptr, false));
		}
		return $nc(this->fGrammarPool)->toXSModel();
	} catch ($Exception& e) {
		$nc(this->fSchemaLoader)->reportDOMFatalError(e);
		return nullptr;
	}
	$shouldNotReachHere();
}

$XSModel* XSLoaderImpl::loadInputList($LSInputList* is) {
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(is)->getLength();
	try {
		$nc(this->fGrammarPool)->clear();
		for (int32_t i = 0; i < length; ++i) {
			$nc(this->fSchemaLoader)->loadGrammar($($nc(this->fSchemaLoader)->dom2xmlInputSource($(is->item(i)))));
		}
		return $nc(this->fGrammarPool)->toXSModel();
	} catch ($Exception& e) {
		$nc(this->fSchemaLoader)->reportDOMFatalError(e);
		return nullptr;
	}
	$shouldNotReachHere();
}

$XSModel* XSLoaderImpl::loadURI($String* uri) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->fGrammarPool)->clear();
		return $nc(($cast($XSGrammar, $($nc(this->fSchemaLoader)->loadGrammar($$new($XMLInputSource, nullptr, uri, nullptr, false))))))->toXSModel();
	} catch ($Exception& e) {
		$nc(this->fSchemaLoader)->reportDOMFatalError(e);
		return nullptr;
	}
	$shouldNotReachHere();
}

$XSModel* XSLoaderImpl::load($LSInput* is) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->fGrammarPool)->clear();
		return $nc(($cast($XSGrammar, $($nc(this->fSchemaLoader)->loadGrammar($($nc(this->fSchemaLoader)->dom2xmlInputSource(is)))))))->toXSModel();
	} catch ($Exception& e) {
		$nc(this->fSchemaLoader)->reportDOMFatalError(e);
		return nullptr;
	}
	$shouldNotReachHere();
}

void XSLoaderImpl::setParameter($String* name, Object$* value) {
	$nc(this->fSchemaLoader)->setParameter(name, value);
}

$Object* XSLoaderImpl::getParameter($String* name) {
	return $of($nc(this->fSchemaLoader)->getParameter(name));
}

bool XSLoaderImpl::canSetParameter($String* name, Object$* value) {
	return $nc(this->fSchemaLoader)->canSetParameter(name, value);
}

$DOMStringList* XSLoaderImpl::getParameterNames() {
	return $nc(this->fSchemaLoader)->getParameterNames();
}

XSLoaderImpl::XSLoaderImpl() {
}

$Class* XSLoaderImpl::load$($String* name, bool initialize) {
	$loadClass(XSLoaderImpl, name, initialize, &_XSLoaderImpl_ClassInfo_, allocate$XSLoaderImpl);
	return class$;
}

$Class* XSLoaderImpl::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com