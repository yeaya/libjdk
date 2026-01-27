#include <com/sun/org/apache/xerces/internal/impl/xs/util/XSGrammarPool.h>

#include <com/sun/org/apache/xerces/internal/impl/Constants.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelImpl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl$Entry.h>
#include <com/sun/org/apache/xerces/internal/util/XMLGrammarPoolImpl.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/Grammar.h>
#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLGrammarDescription.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef SCHEMA_VERSION_1_0
#undef XML_SCHEMA

using $SchemaGrammarArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::SchemaGrammar>;
using $Constants = ::com::sun::org::apache::xerces::internal::impl::Constants;
using $XSModelImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelImpl;
using $XMLGrammarPoolImpl = ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl;
using $XMLGrammarPoolImpl$Entry = ::com::sun::org::apache::xerces::internal::util::XMLGrammarPoolImpl$Entry;
using $XMLGrammarDescription = ::com::sun::org::apache::xerces::internal::xni::grammars::XMLGrammarDescription;
using $XSModel = ::com::sun::org::apache::xerces::internal::xs::XSModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

$MethodInfo _XSGrammarPool_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSGrammarPool, init$, void)},
	{"toXSModel", "()Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC, $virtualMethod(XSGrammarPool, toXSModel, $XSModel*)},
	{"toXSModel", "(S)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC, $virtualMethod(XSGrammarPool, toXSModel, $XSModel*, int16_t)},
	{"toXSModel", "([Lcom/sun/org/apache/xerces/internal/impl/xs/SchemaGrammar;S)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PROTECTED, $virtualMethod(XSGrammarPool, toXSModel, $XSModel*, $SchemaGrammarArray*, int16_t)},
	{}
};

$ClassInfo _XSGrammarPool_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.util.XSGrammarPool",
	"com.sun.org.apache.xerces.internal.util.XMLGrammarPoolImpl",
	nullptr,
	nullptr,
	_XSGrammarPool_MethodInfo_
};

$Object* allocate$XSGrammarPool($Class* clazz) {
	return $of($alloc(XSGrammarPool));
}

void XSGrammarPool::init$() {
	$XMLGrammarPoolImpl::init$();
}

$XSModel* XSGrammarPool::toXSModel() {
	return toXSModel($Constants::SCHEMA_VERSION_1_0);
}

$XSModel* XSGrammarPool::toXSModel(int16_t schemaVersion) {
	$useLocalCurrentObjectStackCache();
	$var($List, list, $new($ArrayList));
	for (int32_t i = 0; i < $nc(this->fGrammars)->length; ++i) {
		{
			$var($XMLGrammarPoolImpl$Entry, entry, $nc(this->fGrammars)->get(i));
			for (; entry != nullptr; $assign(entry, $nc(entry)->next)) {
				$init($XMLGrammarDescription);
				if ($nc($($nc(entry->desc)->getGrammarType()))->equals($XMLGrammarDescription::XML_SCHEMA)) {
					list->add(entry->grammar);
				}
			}
		}
	}
	int32_t size = list->size();
	if (size == 0) {
		return toXSModel($$new($SchemaGrammarArray, 0), schemaVersion);
	}
	$var($SchemaGrammarArray, gs, $fcast($SchemaGrammarArray, list->toArray($$new($SchemaGrammarArray, size))));
	return toXSModel(gs, schemaVersion);
}

$XSModel* XSGrammarPool::toXSModel($SchemaGrammarArray* grammars, int16_t schemaVersion) {
	return $new($XSModelImpl, grammars, schemaVersion);
}

XSGrammarPool::XSGrammarPool() {
}

$Class* XSGrammarPool::load$($String* name, bool initialize) {
	$loadClass(XSGrammarPool, name, initialize, &_XSGrammarPool_ClassInfo_, allocate$XSGrammarPool);
	return class$;
}

$Class* XSGrammarPool::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com