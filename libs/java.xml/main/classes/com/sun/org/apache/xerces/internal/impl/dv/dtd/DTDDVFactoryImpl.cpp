#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/DTDDVFactoryImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/DTDDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/ENTITYDatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/IDDatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/IDREFDatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/ListDatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/NMTOKENDatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/NOTATIONDatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/StringDatatypeValidator.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $DTDDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::DTDDVFactory;
using $DatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::DatatypeValidator;
using $ENTITYDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::ENTITYDatatypeValidator;
using $IDDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::IDDatatypeValidator;
using $IDREFDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::IDREFDatatypeValidator;
using $ListDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::ListDatatypeValidator;
using $NMTOKENDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::NMTOKENDatatypeValidator;
using $NOTATIONDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::NOTATIONDatatypeValidator;
using $StringDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::StringDatatypeValidator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
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

$FieldInfo _DTDDVFactoryImpl_FieldInfo_[] = {
	{"fBuiltInTypes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;>;", $STATIC | $FINAL, $staticField(DTDDVFactoryImpl, fBuiltInTypes)},
	{}
};

$MethodInfo _DTDDVFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DTDDVFactoryImpl, init$, void)},
	{"getBuiltInDV", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;", nullptr, $PUBLIC, $virtualMethod(DTDDVFactoryImpl, getBuiltInDV, $DatatypeValidator*, $String*)},
	{"getBuiltInTypes", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/DatatypeValidator;>;", $PUBLIC, $virtualMethod(DTDDVFactoryImpl, getBuiltInTypes, $Map*)},
	{}
};

$ClassInfo _DTDDVFactoryImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.DTDDVFactoryImpl",
	"com.sun.org.apache.xerces.internal.impl.dv.DTDDVFactory",
	nullptr,
	_DTDDVFactoryImpl_FieldInfo_,
	_DTDDVFactoryImpl_MethodInfo_
};

$Object* allocate$DTDDVFactoryImpl($Class* clazz) {
	return $of($alloc(DTDDVFactoryImpl));
}

$Map* DTDDVFactoryImpl::fBuiltInTypes = nullptr;

void DTDDVFactoryImpl::init$() {
	$DTDDVFactory::init$();
}

$DatatypeValidator* DTDDVFactoryImpl::getBuiltInDV($String* name) {
	return $cast($DatatypeValidator, $nc(DTDDVFactoryImpl::fBuiltInTypes)->get(name));
}

$Map* DTDDVFactoryImpl::getBuiltInTypes() {
	return $new($HashMap, DTDDVFactoryImpl::fBuiltInTypes);
}

void clinit$DTDDVFactoryImpl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		$var($Map, builtInTypes, $new($HashMap));
		$var($DatatypeValidator, dvTemp, nullptr);
		builtInTypes->put("string"_s, $$new($StringDatatypeValidator));
		builtInTypes->put("ID"_s, $$new($IDDatatypeValidator));
		$assign(dvTemp, $new($IDREFDatatypeValidator));
		builtInTypes->put("IDREF"_s, dvTemp);
		builtInTypes->put("IDREFS"_s, $$new($ListDatatypeValidator, dvTemp));
		$assign(dvTemp, $new($ENTITYDatatypeValidator));
		builtInTypes->put("ENTITY"_s, $$new($ENTITYDatatypeValidator));
		builtInTypes->put("ENTITIES"_s, $$new($ListDatatypeValidator, dvTemp));
		builtInTypes->put("NOTATION"_s, $$new($NOTATIONDatatypeValidator));
		$assign(dvTemp, $new($NMTOKENDatatypeValidator));
		builtInTypes->put("NMTOKEN"_s, dvTemp);
		builtInTypes->put("NMTOKENS"_s, $$new($ListDatatypeValidator, dvTemp));
		$assignStatic(DTDDVFactoryImpl::fBuiltInTypes, $Collections::unmodifiableMap(builtInTypes));
	}
}

DTDDVFactoryImpl::DTDDVFactoryImpl() {
}

$Class* DTDDVFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(DTDDVFactoryImpl, name, initialize, &_DTDDVFactoryImpl_ClassInfo_, clinit$DTDDVFactoryImpl, allocate$DTDDVFactoryImpl);
	return class$;
}

$Class* DTDDVFactoryImpl::class$ = nullptr;

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com