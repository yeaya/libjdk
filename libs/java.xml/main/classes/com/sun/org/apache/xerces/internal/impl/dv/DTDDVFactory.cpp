#include <com/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/DVFactoryException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/DTDDVFactoryImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/XML11DTDDVFactoryImpl.h>
#include <com/sun/org/apache/xerces/internal/utils/ObjectFactory.h>
#include <java/lang/ClassCastException.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef DEFAULT_FACTORY_CLASS
#undef XML11_DATATYPE_VALIDATOR_FACTORY

using $DVFactoryException = ::com::sun::org::apache::xerces::internal::impl::dv::DVFactoryException;
using $DatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator;
using $DTDDVFactoryImpl = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::DTDDVFactoryImpl;
using $XML11DTDDVFactoryImpl = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::XML11DTDDVFactoryImpl;
using $ObjectFactory = ::com::sun::org::apache::xerces::internal::utils::ObjectFactory;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

$FieldInfo _DTDDVFactory_FieldInfo_[] = {
	{"DEFAULT_FACTORY_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DTDDVFactory, DEFAULT_FACTORY_CLASS)},
	{"XML11_DATATYPE_VALIDATOR_FACTORY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DTDDVFactory, XML11_DATATYPE_VALIDATOR_FACTORY)},
	{}
};

$MethodInfo _DTDDVFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(DTDDVFactory, init$, void)},
	{"getBuiltInDV", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DTDDVFactory, getBuiltInDV, $DatatypeValidator*, $String*)},
	{"getBuiltInTypes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;>;", $PUBLIC | $ABSTRACT, $virtualMethod(DTDDVFactory, getBuiltInTypes, $Map*)},
	{"getInstance", "()Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(DTDDVFactory, getInstance, DTDDVFactory*), "com.sun.org.apache.xerces.internal.impl.dv.DVFactoryException"},
	{"getInstance", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(DTDDVFactory, getInstance, DTDDVFactory*, $String*), "com.sun.org.apache.xerces.internal.impl.dv.DVFactoryException"},
	{}
};

$ClassInfo _DTDDVFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.impl.dv.DTDDVFactory",
	"java.lang.Object",
	nullptr,
	_DTDDVFactory_FieldInfo_,
	_DTDDVFactory_MethodInfo_
};

$Object* allocate$DTDDVFactory($Class* clazz) {
	return $of($alloc(DTDDVFactory));
}

$String* DTDDVFactory::DEFAULT_FACTORY_CLASS = nullptr;
$String* DTDDVFactory::XML11_DATATYPE_VALIDATOR_FACTORY = nullptr;

DTDDVFactory* DTDDVFactory::getInstance() {
	$init(DTDDVFactory);
	return getInstance(DTDDVFactory::DEFAULT_FACTORY_CLASS);
}

DTDDVFactory* DTDDVFactory::getInstance($String* factoryClass) {
	$init(DTDDVFactory);
	try {
		if ($nc(DTDDVFactory::DEFAULT_FACTORY_CLASS)->equals(factoryClass)) {
			return $new($DTDDVFactoryImpl);
		} else {
			if ($nc(DTDDVFactory::XML11_DATATYPE_VALIDATOR_FACTORY)->equals(factoryClass)) {
				return $new($XML11DTDDVFactoryImpl);
			} else {
				return ($cast(DTDDVFactory, $ObjectFactory::newInstance(factoryClass, true)));
			}
		}
	} catch ($ClassCastException& e) {
		$throwNew($DVFactoryException, $$str({"DTD factory class "_s, factoryClass, " does not extend from DTDDVFactory."_s}));
	}
	$shouldNotReachHere();
}

void DTDDVFactory::init$() {
}

DTDDVFactory::DTDDVFactory() {
}

void clinit$DTDDVFactory($Class* class$) {
	$assignStatic(DTDDVFactory::DEFAULT_FACTORY_CLASS, "com.sun.org.apache.xerces.internal.impl.dv.dtd.DTDDVFactoryImpl"_s);
	$assignStatic(DTDDVFactory::XML11_DATATYPE_VALIDATOR_FACTORY, "com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11DTDDVFactoryImpl"_s);
}

$Class* DTDDVFactory::load$($String* name, bool initialize) {
	$loadClass(DTDDVFactory, name, initialize, &_DTDDVFactory_ClassInfo_, clinit$DTDDVFactory, allocate$DTDDVFactory);
	return class$;
}

$Class* DTDDVFactory::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com