#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/XML11DTDDVFactoryImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/DTDDVFactoryImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/ListDatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/XML11IDDatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/XML11IDREFDatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/XML11NMTOKENDatatypeValidator.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef XML11BUILTINTYPES

using $DatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator;
using $DTDDVFactoryImpl = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::DTDDVFactoryImpl;
using $ListDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::ListDatatypeValidator;
using $XML11IDDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::XML11IDDatatypeValidator;
using $XML11IDREFDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::XML11IDREFDatatypeValidator;
using $XML11NMTOKENDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::XML11NMTOKENDatatypeValidator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace dtd {

$Map* XML11DTDDVFactoryImpl::XML11BUILTINTYPES = nullptr;

void XML11DTDDVFactoryImpl::init$() {
	$DTDDVFactoryImpl::init$();
}

$DatatypeValidator* XML11DTDDVFactoryImpl::getBuiltInDV($String* name) {
	if ($nc(XML11DTDDVFactoryImpl::XML11BUILTINTYPES)->get(name) != nullptr) {
		return $cast($DatatypeValidator, XML11DTDDVFactoryImpl::XML11BUILTINTYPES->get(name));
	}
	$init($DTDDVFactoryImpl);
	return $cast($DatatypeValidator, $nc($DTDDVFactoryImpl::fBuiltInTypes)->get(name));
}

$Map* XML11DTDDVFactoryImpl::getBuiltInTypes() {
	$init($DTDDVFactoryImpl);
	$var($HashMap, toReturn, $new($HashMap, $DTDDVFactoryImpl::fBuiltInTypes));
	toReturn->putAll(XML11DTDDVFactoryImpl::XML11BUILTINTYPES);
	return toReturn;
}

void XML11DTDDVFactoryImpl::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$var($Map, xml11BuiltInTypes, $new($HashMap));
		xml11BuiltInTypes->put("XML11ID"_s, $$new($XML11IDDatatypeValidator));
		$var($DatatypeValidator, dvTemp, $new($XML11IDREFDatatypeValidator));
		xml11BuiltInTypes->put("XML11IDREF"_s, dvTemp);
		xml11BuiltInTypes->put("XML11IDREFS"_s, $$new($ListDatatypeValidator, dvTemp));
		$assign(dvTemp, $new($XML11NMTOKENDatatypeValidator));
		xml11BuiltInTypes->put("XML11NMTOKEN"_s, dvTemp);
		xml11BuiltInTypes->put("XML11NMTOKENS"_s, $$new($ListDatatypeValidator, dvTemp));
		$assignStatic(XML11DTDDVFactoryImpl::XML11BUILTINTYPES, $Collections::unmodifiableMap(xml11BuiltInTypes));
	}
}

XML11DTDDVFactoryImpl::XML11DTDDVFactoryImpl() {
}

$Class* XML11DTDDVFactoryImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"XML11BUILTINTYPES", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;>;", $STATIC, $staticField(XML11DTDDVFactoryImpl, XML11BUILTINTYPES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XML11DTDDVFactoryImpl, init$, void)},
		{"getBuiltInDV", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PUBLIC, $virtualMethod(XML11DTDDVFactoryImpl, getBuiltInDV, $DatatypeValidator*, $String*)},
		{"getBuiltInTypes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;>;", $PUBLIC, $virtualMethod(XML11DTDDVFactoryImpl, getBuiltInTypes, $Map*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11DTDDVFactoryImpl",
		"com.sun.org.apache.xerces.internal.impl.dv.dtd.DTDDVFactoryImpl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XML11DTDDVFactoryImpl, name, initialize, &classInfo$$, XML11DTDDVFactoryImpl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XML11DTDDVFactoryImpl);
	});
	return class$;
}

$Class* XML11DTDDVFactoryImpl::class$ = nullptr;

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com