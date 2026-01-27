#include <com/sun/org/apache/xerces/internal/impl/xs/XSLoaderImpl$XSGrammarMerger.h>

#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAnnotationImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSGroupDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSLoaderImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSNotationDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSGrammarPool.h>
#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xs/XSConstants.h>
#include <com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSTypeDefinition.h>
#include <jcpp.h>

#undef ATTRIBUTE_DECLARATION
#undef ATTRIBUTE_GROUP
#undef ELEMENT_DECLARATION
#undef MODEL_GROUP
#undef NOTATION_DECLARATION
#undef TYPE_DEFINITION

using $GrammarArray = $Array<::com::sun::org::apache::xerces::internal::xni::grammars::Grammar>;
using $SchemaGrammar = ::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar;
using $XSAnnotationImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAnnotationImpl;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSAttributeGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeGroupDecl;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSGroupDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSGroupDecl;
using $XSNotationDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSNotationDecl;
using $XSGrammarPool = ::com::sun::org::apache::xerces::internal::impl::xs::util::XSGrammarPool;
using $Grammar = ::com::sun::org::apache::xerces::internal::xni::grammars::Grammar;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XSConstants = ::com::sun::org::apache::xerces::internal::xs::XSConstants;
using $XSNamedMap = ::com::sun::org::apache::xerces::internal::xs::XSNamedMap;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $XSTypeDefinition = ::com::sun::org::apache::xerces::internal::xs::XSTypeDefinition;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

$MethodInfo _XSLoaderImpl$XSGrammarMerger_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSLoaderImpl$XSGrammarMerger, init$, void)},
	{"containsGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Z", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl$XSGrammarMerger, containsGrammar, bool, $XMLGrammarDescription*)},
	{"getGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl$XSGrammarMerger, getGrammar, $Grammar*, $XMLGrammarDescription*)},
	{"mergeSchemaGrammars", "(Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;)V", nullptr, $PRIVATE, $method(XSLoaderImpl$XSGrammarMerger, mergeSchemaGrammars, void, $SchemaGrammar*, $SchemaGrammar*)},
	{"putGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)V", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl$XSGrammarMerger, putGrammar, void, $Grammar*)},
	{"retrieveGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription;)Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl$XSGrammarMerger, retrieveGrammar, $Grammar*, $XMLGrammarDescription*)},
	{"retrieveInitialGrammarSet", "(Ljava/lang/String;)[Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;", nullptr, $PUBLIC, $virtualMethod(XSLoaderImpl$XSGrammarMerger, retrieveInitialGrammarSet, $GrammarArray*, $String*)},
	{"toSchemaGrammar", "(Lcom/sun/org/apache/xerces/internal/xni/grammars/Grammar;)Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;", nullptr, $PRIVATE, $method(XSLoaderImpl$XSGrammarMerger, toSchemaGrammar, $SchemaGrammar*, $Grammar*)},
	{}
};

$InnerClassInfo _XSLoaderImpl$XSGrammarMerger_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xs.XSLoaderImpl$XSGrammarMerger", "com.sun.org.apache.xerces.internal.impl.xs.XSLoaderImpl", "XSGrammarMerger", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _XSLoaderImpl$XSGrammarMerger_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSLoaderImpl$XSGrammarMerger",
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSGrammarPool",
	nullptr,
	nullptr,
	_XSLoaderImpl$XSGrammarMerger_MethodInfo_,
	nullptr,
	nullptr,
	_XSLoaderImpl$XSGrammarMerger_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xs.XSLoaderImpl"
};

$Object* allocate$XSLoaderImpl$XSGrammarMerger($Class* clazz) {
	return $of($alloc(XSLoaderImpl$XSGrammarMerger));
}

void XSLoaderImpl$XSGrammarMerger::init$() {
	$XSGrammarPool::init$();
}

void XSLoaderImpl$XSGrammarMerger::putGrammar($Grammar* grammar) {
	$useLocalCurrentObjectStackCache();
	$var($SchemaGrammar, cachedGrammar, toSchemaGrammar($($XSGrammarPool::getGrammar($($nc(grammar)->getGrammarDescription())))));
	if (cachedGrammar != nullptr) {
		$var($SchemaGrammar, newGrammar, toSchemaGrammar(grammar));
		if (newGrammar != nullptr) {
			mergeSchemaGrammars(cachedGrammar, newGrammar);
		}
	} else {
		$XSGrammarPool::putGrammar(grammar);
	}
}

$SchemaGrammar* XSLoaderImpl$XSGrammarMerger::toSchemaGrammar($Grammar* grammar) {
	return ($instanceOf($SchemaGrammar, grammar)) ? $cast($SchemaGrammar, grammar) : ($SchemaGrammar*)nullptr;
}

void XSLoaderImpl$XSGrammarMerger::mergeSchemaGrammars($SchemaGrammar* cachedGrammar, $SchemaGrammar* newGrammar) {
	$useLocalCurrentObjectStackCache();
	$var($XSNamedMap, map, $nc(newGrammar)->getComponents($XSConstants::ELEMENT_DECLARATION));
	int32_t length = $nc(map)->getLength();
	for (int32_t i = 0; i < length; ++i) {
		$var($XSElementDecl, decl, $cast($XSElementDecl, map->item(i)));
		if ($nc(cachedGrammar)->getGlobalElementDecl($($nc(decl)->getName())) == nullptr) {
			cachedGrammar->addGlobalElementDecl(decl);
		}
	}
	$assign(map, newGrammar->getComponents($XSConstants::ATTRIBUTE_DECLARATION));
	length = map->getLength();
	for (int32_t i = 0; i < length; ++i) {
		$var($XSAttributeDecl, decl, $cast($XSAttributeDecl, map->item(i)));
		if ($nc(cachedGrammar)->getGlobalAttributeDecl($($nc(decl)->getName())) == nullptr) {
			cachedGrammar->addGlobalAttributeDecl(decl);
		}
	}
	$assign(map, newGrammar->getComponents($XSConstants::TYPE_DEFINITION));
	length = map->getLength();
	for (int32_t i = 0; i < length; ++i) {
		$var($XSTypeDefinition, decl, $cast($XSTypeDefinition, map->item(i)));
		if ($nc(cachedGrammar)->getGlobalTypeDecl($($nc(decl)->getName())) == nullptr) {
			cachedGrammar->addGlobalTypeDecl(decl);
		}
	}
	$assign(map, newGrammar->getComponents($XSConstants::ATTRIBUTE_GROUP));
	length = map->getLength();
	for (int32_t i = 0; i < length; ++i) {
		$var($XSAttributeGroupDecl, decl, $cast($XSAttributeGroupDecl, map->item(i)));
		if ($nc(cachedGrammar)->getGlobalAttributeGroupDecl($($nc(decl)->getName())) == nullptr) {
			cachedGrammar->addGlobalAttributeGroupDecl(decl);
		}
	}
	$assign(map, newGrammar->getComponents($XSConstants::MODEL_GROUP));
	length = map->getLength();
	for (int32_t i = 0; i < length; ++i) {
		$var($XSGroupDecl, decl, $cast($XSGroupDecl, map->item(i)));
		if ($nc(cachedGrammar)->getGlobalGroupDecl($($nc(decl)->getName())) == nullptr) {
			cachedGrammar->addGlobalGroupDecl(decl);
		}
	}
	$assign(map, newGrammar->getComponents($XSConstants::NOTATION_DECLARATION));
	length = map->getLength();
	for (int32_t i = 0; i < length; ++i) {
		$var($XSNotationDecl, decl, $cast($XSNotationDecl, map->item(i)));
		if ($nc(cachedGrammar)->getGlobalNotationDecl($($nc(decl)->getName())) == nullptr) {
			cachedGrammar->addGlobalNotationDecl(decl);
		}
	}
	$var($XSObjectList, annotations, newGrammar->getAnnotations());
	length = $nc(annotations)->getLength();
	for (int32_t i = 0; i < length; ++i) {
		$nc(cachedGrammar)->addAnnotation($cast($XSAnnotationImpl, $(annotations->item(i))));
	}
}

bool XSLoaderImpl$XSGrammarMerger::containsGrammar($XMLGrammarDescription* desc) {
	return false;
}

$Grammar* XSLoaderImpl$XSGrammarMerger::getGrammar($XMLGrammarDescription* desc) {
	return nullptr;
}

$Grammar* XSLoaderImpl$XSGrammarMerger::retrieveGrammar($XMLGrammarDescription* desc) {
	return nullptr;
}

$GrammarArray* XSLoaderImpl$XSGrammarMerger::retrieveInitialGrammarSet($String* grammarType) {
	return $new($GrammarArray, 0);
}

XSLoaderImpl$XSGrammarMerger::XSLoaderImpl$XSGrammarMerger() {
}

$Class* XSLoaderImpl$XSGrammarMerger::load$($String* name, bool initialize) {
	$loadClass(XSLoaderImpl$XSGrammarMerger, name, initialize, &_XSLoaderImpl$XSGrammarMerger_ClassInfo_, allocate$XSLoaderImpl$XSGrammarMerger);
	return class$;
}

$Class* XSLoaderImpl$XSGrammarMerger::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com