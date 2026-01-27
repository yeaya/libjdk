#include <com/sun/org/apache/xerces/internal/impl/dv/xs/ExtendedSchemaDVFactoryImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/BaseSchemaDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <jcpp.h>

#undef ANYATOMICTYPE
#undef DAYTIMEDURATION
#undef DAYTIMEDURATION_DT
#undef DURATION
#undef DV_DAYTIMEDURATION
#undef DV_YEARMONTHDURATION
#undef ORDERED_PARTIAL
#undef YEARMONTHDURATION
#undef YEARMONTHDURATION_DT

using $XSSimpleType = ::com::sun::org::apache::xerces::internal::impl::dv::XSSimpleType;
using $BaseSchemaDVFactory = ::com::sun::org::apache::xerces::internal::impl::dv::xs::BaseSchemaDVFactory;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $SymbolHash = ::com::sun::org::apache::xerces::internal::util::SymbolHash;
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
								namespace xs {

$FieldInfo _ExtendedSchemaDVFactoryImpl_FieldInfo_[] = {
	{"fBuiltInTypes", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $STATIC, $staticField(ExtendedSchemaDVFactoryImpl, fBuiltInTypes)},
	{}
};

$MethodInfo _ExtendedSchemaDVFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ExtendedSchemaDVFactoryImpl, init$, void)},
	{"createBuiltInTypes", "()V", nullptr, $STATIC, $staticMethod(ExtendedSchemaDVFactoryImpl, createBuiltInTypes, void)},
	{"getBuiltInType", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $virtualMethod(ExtendedSchemaDVFactoryImpl, getBuiltInType, $XSSimpleType*, $String*)},
	{"getBuiltInTypes", "()Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $PUBLIC, $virtualMethod(ExtendedSchemaDVFactoryImpl, getBuiltInTypes, $SymbolHash*)},
	{}
};

$ClassInfo _ExtendedSchemaDVFactoryImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.ExtendedSchemaDVFactoryImpl",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.BaseSchemaDVFactory",
	nullptr,
	_ExtendedSchemaDVFactoryImpl_FieldInfo_,
	_ExtendedSchemaDVFactoryImpl_MethodInfo_
};

$Object* allocate$ExtendedSchemaDVFactoryImpl($Class* clazz) {
	return $of($alloc(ExtendedSchemaDVFactoryImpl));
}

$SymbolHash* ExtendedSchemaDVFactoryImpl::fBuiltInTypes = nullptr;

void ExtendedSchemaDVFactoryImpl::init$() {
	$BaseSchemaDVFactory::init$();
}

void ExtendedSchemaDVFactoryImpl::createBuiltInTypes() {
	$init(ExtendedSchemaDVFactoryImpl);
	$useLocalCurrentObjectStackCache();
	$var($String, ANYATOMICTYPE, "anyAtomicType"_s);
	$var($String, DURATION, "duration"_s);
	$var($String, YEARMONTHDURATION, "yearMonthDuration"_s);
	$var($String, DAYTIMEDURATION, "dayTimeDuration"_s);
	$init($XSSimpleTypeDecl);
	$BaseSchemaDVFactory::createBuiltInTypes(ExtendedSchemaDVFactoryImpl::fBuiltInTypes, $XSSimpleTypeDecl::fAnyAtomicType);
	$nc(ExtendedSchemaDVFactoryImpl::fBuiltInTypes)->put(ANYATOMICTYPE, $XSSimpleTypeDecl::fAnyAtomicType);
	$var($XSSimpleTypeDecl, durationDV, $cast($XSSimpleTypeDecl, $nc(ExtendedSchemaDVFactoryImpl::fBuiltInTypes)->get(DURATION)));
	$nc(ExtendedSchemaDVFactoryImpl::fBuiltInTypes)->put(YEARMONTHDURATION, $$new($XSSimpleTypeDecl, durationDV, YEARMONTHDURATION, $XSSimpleTypeDecl::DV_YEARMONTHDURATION, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSSimpleTypeDecl::YEARMONTHDURATION_DT));
	$nc(ExtendedSchemaDVFactoryImpl::fBuiltInTypes)->put(DAYTIMEDURATION, $$new($XSSimpleTypeDecl, durationDV, DAYTIMEDURATION, $XSSimpleTypeDecl::DV_DAYTIMEDURATION, $XSSimpleType::ORDERED_PARTIAL, false, false, false, true, $XSSimpleTypeDecl::DAYTIMEDURATION_DT));
}

$XSSimpleType* ExtendedSchemaDVFactoryImpl::getBuiltInType($String* name) {
	return $cast($XSSimpleType, $nc(ExtendedSchemaDVFactoryImpl::fBuiltInTypes)->get(name));
}

$SymbolHash* ExtendedSchemaDVFactoryImpl::getBuiltInTypes() {
	return $nc(ExtendedSchemaDVFactoryImpl::fBuiltInTypes)->makeClone();
}

void clinit$ExtendedSchemaDVFactoryImpl($Class* class$) {
	$assignStatic(ExtendedSchemaDVFactoryImpl::fBuiltInTypes, $new($SymbolHash));
	{
		ExtendedSchemaDVFactoryImpl::createBuiltInTypes();
	}
}

ExtendedSchemaDVFactoryImpl::ExtendedSchemaDVFactoryImpl() {
}

$Class* ExtendedSchemaDVFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(ExtendedSchemaDVFactoryImpl, name, initialize, &_ExtendedSchemaDVFactoryImpl_ClassInfo_, clinit$ExtendedSchemaDVFactoryImpl, allocate$ExtendedSchemaDVFactoryImpl);
	return class$;
}

$Class* ExtendedSchemaDVFactoryImpl::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com