#include <com/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/DVFactoryException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <com/sun/org/apache/xerces/internal/utils/ObjectFactory.h>
#include <com/sun/org/apache/xerces/internal/xs/XSObjectList.h>
#include <java/lang/ClassCastException.h>
#include <jcpp.h>

#undef DEFAULT_FACTORY_CLASS

using $XSSimpleTypeArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType>;
using $DVFactoryException = ::com::sun::org::apache::xerces::internal::impl::dv::DVFactoryException;
using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $SymbolHash = ::com::sun::org::apache::xerces::internal::util::SymbolHash;
using $ObjectFactory = ::com::sun::org::apache::xerces::internal::utils::ObjectFactory;
using $XSObjectList = ::com::sun::org::apache::xerces::internal::xs::XSObjectList;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

$FieldInfo _SchemaDVFactory_FieldInfo_[] = {
	{"DEFAULT_FACTORY_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SchemaDVFactory, DEFAULT_FACTORY_CLASS)},
	{}
};

$MethodInfo _SchemaDVFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(SchemaDVFactory, init$, void)},
	{"createTypeList", "(Ljava/lang/String;Ljava/lang/String;SLcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SchemaDVFactory, createTypeList, $XSSimpleType*, $String*, $String*, int16_t, $XSSimpleType*, $XSObjectList*)},
	{"createTypeRestriction", "(Ljava/lang/String;Ljava/lang/String;SLcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SchemaDVFactory, createTypeRestriction, $XSSimpleType*, $String*, $String*, int16_t, $XSSimpleType*, $XSObjectList*)},
	{"createTypeUnion", "(Ljava/lang/String;Ljava/lang/String;S[Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;Lcom/sun/org/apache/xerces/internal/xs/XSObjectList;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SchemaDVFactory, createTypeUnion, $XSSimpleType*, $String*, $String*, int16_t, $XSSimpleTypeArray*, $XSObjectList*)},
	{"getBuiltInType", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SchemaDVFactory, getBuiltInType, $XSSimpleType*, $String*)},
	{"getBuiltInTypes", "()Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SchemaDVFactory, getBuiltInTypes, $SymbolHash*)},
	{"getInstance", "()Lcom/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $SYNCHRONIZED, $staticMethod(SchemaDVFactory, getInstance, SchemaDVFactory*), "com.sun.org.apache.xerces.internal.impl.dv.DVFactoryException"},
	{"getInstance", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/SchemaDVFactory;", nullptr, $PUBLIC | $STATIC | $FINAL | $SYNCHRONIZED, $staticMethod(SchemaDVFactory, getInstance, SchemaDVFactory*, $String*), "com.sun.org.apache.xerces.internal.impl.dv.DVFactoryException"},
	{}
};

$ClassInfo _SchemaDVFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dv.SchemaDVFactory",
	"java.lang.Object",
	nullptr,
	_SchemaDVFactory_FieldInfo_,
	_SchemaDVFactory_MethodInfo_
};

$Object* allocate$SchemaDVFactory($Class* clazz) {
	return $of($alloc(SchemaDVFactory));
}

$String* SchemaDVFactory::DEFAULT_FACTORY_CLASS = nullptr;

SchemaDVFactory* SchemaDVFactory::getInstance() {
	$load(SchemaDVFactory);
	$synchronized(class$) {
		$init(SchemaDVFactory);
		return getInstance(SchemaDVFactory::DEFAULT_FACTORY_CLASS);
	}
}

SchemaDVFactory* SchemaDVFactory::getInstance($String* factoryClass) {
	$load(SchemaDVFactory);
	$synchronized(class$) {
		$init(SchemaDVFactory);
		try {
			return ($cast(SchemaDVFactory, $ObjectFactory::newInstance(factoryClass, true)));
		} catch ($ClassCastException& e4) {
			$throwNew($DVFactoryException, $$str({"Schema factory class "_s, factoryClass, " does not extend from SchemaDVFactory."_s}));
		}
	}
	$shouldNotReachHere();
}

void SchemaDVFactory::init$() {
}

SchemaDVFactory::SchemaDVFactory() {
}

void clinit$SchemaDVFactory($Class* class$) {
	$assignStatic(SchemaDVFactory::DEFAULT_FACTORY_CLASS, "com.sun.org.apache.xerces.internal.impl.dv.xs.SchemaDVFactoryImpl"_s);
}

$Class* SchemaDVFactory::load$($String* name, bool initialize) {
	$loadClass(SchemaDVFactory, name, initialize, &_SchemaDVFactory_ClassInfo_, clinit$SchemaDVFactory, allocate$SchemaDVFactory);
	return class$;
}

$Class* SchemaDVFactory::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com