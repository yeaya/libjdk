#include <com/sun/org/apache/xerces/internal/impl/dv/xs/SchemaDVFactoryImpl.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/XSSimpleType.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/BaseSchemaDVFactory.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <jcpp.h>

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

$FieldInfo _SchemaDVFactoryImpl_FieldInfo_[] = {
	{"fBuiltInTypes", "Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $STATIC | $FINAL, $staticField(SchemaDVFactoryImpl, fBuiltInTypes)},
	{}
};

$MethodInfo _SchemaDVFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SchemaDVFactoryImpl, init$, void)},
	{"createBuiltInTypes", "()V", nullptr, $STATIC, $staticMethod(SchemaDVFactoryImpl, createBuiltInTypes, void)},
	{"getBuiltInType", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/impl/dv/XSSimpleType;", nullptr, $PUBLIC, $virtualMethod(SchemaDVFactoryImpl, getBuiltInType, $XSSimpleType*, $String*)},
	{"getBuiltInTypes", "()Lcom/sun/org/apache/xerces/internal/util/SymbolHash;", nullptr, $PUBLIC, $virtualMethod(SchemaDVFactoryImpl, getBuiltInTypes, $SymbolHash*)},
	{}
};

$ClassInfo _SchemaDVFactoryImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.SchemaDVFactoryImpl",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.BaseSchemaDVFactory",
	nullptr,
	_SchemaDVFactoryImpl_FieldInfo_,
	_SchemaDVFactoryImpl_MethodInfo_
};

$Object* allocate$SchemaDVFactoryImpl($Class* clazz) {
	return $of($alloc(SchemaDVFactoryImpl));
}

$SymbolHash* SchemaDVFactoryImpl::fBuiltInTypes = nullptr;

void SchemaDVFactoryImpl::init$() {
	$BaseSchemaDVFactory::init$();
}

void SchemaDVFactoryImpl::createBuiltInTypes() {
	$init(SchemaDVFactoryImpl);
	$init($XSSimpleTypeDecl);
	$BaseSchemaDVFactory::createBuiltInTypes(SchemaDVFactoryImpl::fBuiltInTypes, $XSSimpleTypeDecl::fAnySimpleType);
}

$XSSimpleType* SchemaDVFactoryImpl::getBuiltInType($String* name) {
	return $cast($XSSimpleType, $nc(SchemaDVFactoryImpl::fBuiltInTypes)->get(name));
}

$SymbolHash* SchemaDVFactoryImpl::getBuiltInTypes() {
	return $nc(SchemaDVFactoryImpl::fBuiltInTypes)->makeClone();
}

void clinit$SchemaDVFactoryImpl($Class* class$) {
	$assignStatic(SchemaDVFactoryImpl::fBuiltInTypes, $new($SymbolHash));
	{
		SchemaDVFactoryImpl::createBuiltInTypes();
	}
}

SchemaDVFactoryImpl::SchemaDVFactoryImpl() {
}

$Class* SchemaDVFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(SchemaDVFactoryImpl, name, initialize, &_SchemaDVFactoryImpl_ClassInfo_, clinit$SchemaDVFactoryImpl, allocate$SchemaDVFactoryImpl);
	return class$;
}

$Class* SchemaDVFactoryImpl::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com