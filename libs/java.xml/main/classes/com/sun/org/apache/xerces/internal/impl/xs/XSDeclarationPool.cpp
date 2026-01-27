#include <com/sun/org/apache/xerces/internal/impl/xs/XSDeclarationPool.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/xs/SchemaDVFactoryImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSElementDecl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl.h>
#include <com/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl.h>
#include <jcpp.h>

#undef CHUNK_MASK
#undef CHUNK_SHIFT
#undef CHUNK_SIZE
#undef INITIAL_CHUNK_COUNT

using $XSSimpleTypeDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl>;
using $XSAttributeDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl>;
using $XSAttributeUseImplArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl>;
using $XSComplexTypeDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl>;
using $XSElementDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl>;
using $XSModelGroupImplArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl>;
using $XSParticleDeclArray = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl>;
using $XSSimpleTypeDeclArray2 = $Array<::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl, 2>;
using $XSAttributeDeclArray2 = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl, 2>;
using $XSAttributeUseImplArray2 = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl, 2>;
using $XSComplexTypeDeclArray2 = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl, 2>;
using $XSElementDeclArray2 = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl, 2>;
using $XSModelGroupImplArray2 = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl, 2>;
using $XSParticleDeclArray2 = $Array<::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl, 2>;
using $SchemaDVFactoryImpl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::SchemaDVFactoryImpl;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $XSAttributeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeDecl;
using $XSAttributeUseImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSAttributeUseImpl;
using $XSComplexTypeDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSComplexTypeDecl;
using $XSElementDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSElementDecl;
using $XSModelGroupImpl = ::com::sun::org::apache::xerces::internal::impl::xs::XSModelGroupImpl;
using $XSParticleDecl = ::com::sun::org::apache::xerces::internal::impl::xs::XSParticleDecl;
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
							namespace xs {

$FieldInfo _XSDeclarationPool_FieldInfo_[] = {
	{"CHUNK_SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDeclarationPool, CHUNK_SHIFT)},
	{"CHUNK_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDeclarationPool, CHUNK_SIZE)},
	{"CHUNK_MASK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDeclarationPool, CHUNK_MASK)},
	{"INITIAL_CHUNK_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XSDeclarationPool, INITIAL_CHUNK_COUNT)},
	{"fElementDecl", "[[Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PRIVATE, $field(XSDeclarationPool, fElementDecl)},
	{"fElementDeclIndex", "I", nullptr, $PRIVATE, $field(XSDeclarationPool, fElementDeclIndex)},
	{"fParticleDecl", "[[Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE, $field(XSDeclarationPool, fParticleDecl)},
	{"fParticleDeclIndex", "I", nullptr, $PRIVATE, $field(XSDeclarationPool, fParticleDeclIndex)},
	{"fModelGroup", "[[Lcom/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl;", nullptr, $PRIVATE, $field(XSDeclarationPool, fModelGroup)},
	{"fModelGroupIndex", "I", nullptr, $PRIVATE, $field(XSDeclarationPool, fModelGroupIndex)},
	{"fAttrDecl", "[[Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;", nullptr, $PRIVATE, $field(XSDeclarationPool, fAttrDecl)},
	{"fAttrDeclIndex", "I", nullptr, $PRIVATE, $field(XSDeclarationPool, fAttrDeclIndex)},
	{"fCTDecl", "[[Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;", nullptr, $PRIVATE, $field(XSDeclarationPool, fCTDecl)},
	{"fCTDeclIndex", "I", nullptr, $PRIVATE, $field(XSDeclarationPool, fCTDeclIndex)},
	{"fSTDecl", "[[Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $PRIVATE, $field(XSDeclarationPool, fSTDecl)},
	{"fSTDeclIndex", "I", nullptr, $PRIVATE, $field(XSDeclarationPool, fSTDeclIndex)},
	{"fAttributeUse", "[[Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl;", nullptr, $PRIVATE, $field(XSDeclarationPool, fAttributeUse)},
	{"fAttributeUseIndex", "I", nullptr, $PRIVATE, $field(XSDeclarationPool, fAttributeUseIndex)},
	{"dvFactory", "Lcom/sun/org/apache/xerces/internal/impl/dv/xs/SchemaDVFactoryImpl;", nullptr, $PRIVATE, $field(XSDeclarationPool, dvFactory)},
	{}
};

$MethodInfo _XSDeclarationPool_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSDeclarationPool, init$, void)},
	{"ensureAttrDeclCapacity", "(I)Z", nullptr, $PRIVATE, $method(XSDeclarationPool, ensureAttrDeclCapacity, bool, int32_t)},
	{"ensureAttributeUseCapacity", "(I)Z", nullptr, $PRIVATE, $method(XSDeclarationPool, ensureAttributeUseCapacity, bool, int32_t)},
	{"ensureCTDeclCapacity", "(I)Z", nullptr, $PRIVATE, $method(XSDeclarationPool, ensureCTDeclCapacity, bool, int32_t)},
	{"ensureElementDeclCapacity", "(I)Z", nullptr, $PRIVATE, $method(XSDeclarationPool, ensureElementDeclCapacity, bool, int32_t)},
	{"ensureModelGroupCapacity", "(I)Z", nullptr, $PRIVATE, $method(XSDeclarationPool, ensureModelGroupCapacity, bool, int32_t)},
	{"ensureParticleDeclCapacity", "(I)Z", nullptr, $PRIVATE, $method(XSDeclarationPool, ensureParticleDeclCapacity, bool, int32_t)},
	{"ensureSTDeclCapacity", "(I)Z", nullptr, $PRIVATE, $method(XSDeclarationPool, ensureSTDeclCapacity, bool, int32_t)},
	{"getAttributeDecl", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;", nullptr, $PUBLIC | $FINAL, $method(XSDeclarationPool, getAttributeDecl, $XSAttributeDecl*)},
	{"getAttributeUse", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl;", nullptr, $PUBLIC | $FINAL, $method(XSDeclarationPool, getAttributeUse, $XSAttributeUseImpl*)},
	{"getComplexTypeDecl", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;", nullptr, $PUBLIC | $FINAL, $method(XSDeclarationPool, getComplexTypeDecl, $XSComplexTypeDecl*)},
	{"getElementDecl", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PUBLIC | $FINAL, $method(XSDeclarationPool, getElementDecl, $XSElementDecl*)},
	{"getModelGroup", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl;", nullptr, $PUBLIC | $FINAL, $method(XSDeclarationPool, getModelGroup, $XSModelGroupImpl*)},
	{"getParticleDecl", "()Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PUBLIC | $FINAL, $method(XSDeclarationPool, getParticleDecl, $XSParticleDecl*)},
	{"getSimpleTypeDecl", "()Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $PUBLIC | $FINAL, $method(XSDeclarationPool, getSimpleTypeDecl, $XSSimpleTypeDecl*)},
	{"reset", "()V", nullptr, $PUBLIC, $method(XSDeclarationPool, reset, void)},
	{"resize", "([[Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;I)[[Lcom/sun/org/apache/xerces/internal/impl/xs/XSElementDecl;", nullptr, $PRIVATE | $STATIC, $staticMethod(XSDeclarationPool, resize, $XSElementDeclArray2*, $XSElementDeclArray2*, int32_t)},
	{"resize", "([[Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;I)[[Lcom/sun/org/apache/xerces/internal/impl/xs/XSParticleDecl;", nullptr, $PRIVATE | $STATIC, $staticMethod(XSDeclarationPool, resize, $XSParticleDeclArray2*, $XSParticleDeclArray2*, int32_t)},
	{"resize", "([[Lcom/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl;I)[[Lcom/sun/org/apache/xerces/internal/impl/xs/XSModelGroupImpl;", nullptr, $PRIVATE | $STATIC, $staticMethod(XSDeclarationPool, resize, $XSModelGroupImplArray2*, $XSModelGroupImplArray2*, int32_t)},
	{"resize", "([[Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;I)[[Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeDecl;", nullptr, $PRIVATE | $STATIC, $staticMethod(XSDeclarationPool, resize, $XSAttributeDeclArray2*, $XSAttributeDeclArray2*, int32_t)},
	{"resize", "([[Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl;I)[[Lcom/sun/org/apache/xerces/internal/impl/xs/XSAttributeUseImpl;", nullptr, $PRIVATE | $STATIC, $staticMethod(XSDeclarationPool, resize, $XSAttributeUseImplArray2*, $XSAttributeUseImplArray2*, int32_t)},
	{"resize", "([[Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;I)[[Lcom/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl;", nullptr, $PRIVATE | $STATIC, $staticMethod(XSDeclarationPool, resize, $XSSimpleTypeDeclArray2*, $XSSimpleTypeDeclArray2*, int32_t)},
	{"resize", "([[Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;I)[[Lcom/sun/org/apache/xerces/internal/impl/xs/XSComplexTypeDecl;", nullptr, $PRIVATE | $STATIC, $staticMethod(XSDeclarationPool, resize, $XSComplexTypeDeclArray2*, $XSComplexTypeDeclArray2*, int32_t)},
	{"setDVFactory", "(Lcom/sun/org/apache/xerces/internal/impl/dv/xs/SchemaDVFactoryImpl;)V", nullptr, $PUBLIC, $method(XSDeclarationPool, setDVFactory, void, $SchemaDVFactoryImpl*)},
	{}
};

$ClassInfo _XSDeclarationPool_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSDeclarationPool",
	"java.lang.Object",
	nullptr,
	_XSDeclarationPool_FieldInfo_,
	_XSDeclarationPool_MethodInfo_
};

$Object* allocate$XSDeclarationPool($Class* clazz) {
	return $of($alloc(XSDeclarationPool));
}

void XSDeclarationPool::init$() {
	$set(this, fElementDecl, $new($XSElementDeclArray2, XSDeclarationPool::INITIAL_CHUNK_COUNT));
	this->fElementDeclIndex = 0;
	$set(this, fParticleDecl, $new($XSParticleDeclArray2, XSDeclarationPool::INITIAL_CHUNK_COUNT));
	this->fParticleDeclIndex = 0;
	$set(this, fModelGroup, $new($XSModelGroupImplArray2, XSDeclarationPool::INITIAL_CHUNK_COUNT));
	this->fModelGroupIndex = 0;
	$set(this, fAttrDecl, $new($XSAttributeDeclArray2, XSDeclarationPool::INITIAL_CHUNK_COUNT));
	this->fAttrDeclIndex = 0;
	$set(this, fCTDecl, $new($XSComplexTypeDeclArray2, XSDeclarationPool::INITIAL_CHUNK_COUNT));
	this->fCTDeclIndex = 0;
	$set(this, fSTDecl, $new($XSSimpleTypeDeclArray2, XSDeclarationPool::INITIAL_CHUNK_COUNT));
	this->fSTDeclIndex = 0;
	$set(this, fAttributeUse, $new($XSAttributeUseImplArray2, XSDeclarationPool::INITIAL_CHUNK_COUNT));
	this->fAttributeUseIndex = 0;
}

void XSDeclarationPool::setDVFactory($SchemaDVFactoryImpl* dvFactory) {
	$set(this, dvFactory, dvFactory);
}

$XSElementDecl* XSDeclarationPool::getElementDecl() {
	int32_t chunk = $sr(this->fElementDeclIndex, XSDeclarationPool::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fElementDeclIndex & (uint32_t)XSDeclarationPool::CHUNK_MASK);
	ensureElementDeclCapacity(chunk);
	if ($nc($nc(this->fElementDecl)->get(chunk))->get(index) == nullptr) {
		$nc($nc(this->fElementDecl)->get(chunk))->set(index, $$new($XSElementDecl));
	} else {
		$nc($nc($nc(this->fElementDecl)->get(chunk))->get(index))->reset();
	}
	++this->fElementDeclIndex;
	return $nc($nc(this->fElementDecl)->get(chunk))->get(index);
}

$XSAttributeDecl* XSDeclarationPool::getAttributeDecl() {
	int32_t chunk = $sr(this->fAttrDeclIndex, XSDeclarationPool::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fAttrDeclIndex & (uint32_t)XSDeclarationPool::CHUNK_MASK);
	ensureAttrDeclCapacity(chunk);
	if ($nc($nc(this->fAttrDecl)->get(chunk))->get(index) == nullptr) {
		$nc($nc(this->fAttrDecl)->get(chunk))->set(index, $$new($XSAttributeDecl));
	} else {
		$nc($nc($nc(this->fAttrDecl)->get(chunk))->get(index))->reset();
	}
	++this->fAttrDeclIndex;
	return $nc($nc(this->fAttrDecl)->get(chunk))->get(index);
}

$XSAttributeUseImpl* XSDeclarationPool::getAttributeUse() {
	int32_t chunk = $sr(this->fAttributeUseIndex, XSDeclarationPool::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fAttributeUseIndex & (uint32_t)XSDeclarationPool::CHUNK_MASK);
	ensureAttributeUseCapacity(chunk);
	if ($nc($nc(this->fAttributeUse)->get(chunk))->get(index) == nullptr) {
		$nc($nc(this->fAttributeUse)->get(chunk))->set(index, $$new($XSAttributeUseImpl));
	} else {
		$nc($nc($nc(this->fAttributeUse)->get(chunk))->get(index))->reset();
	}
	++this->fAttributeUseIndex;
	return $nc($nc(this->fAttributeUse)->get(chunk))->get(index);
}

$XSComplexTypeDecl* XSDeclarationPool::getComplexTypeDecl() {
	int32_t chunk = $sr(this->fCTDeclIndex, XSDeclarationPool::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fCTDeclIndex & (uint32_t)XSDeclarationPool::CHUNK_MASK);
	ensureCTDeclCapacity(chunk);
	if ($nc($nc(this->fCTDecl)->get(chunk))->get(index) == nullptr) {
		$nc($nc(this->fCTDecl)->get(chunk))->set(index, $$new($XSComplexTypeDecl));
	} else {
		$nc($nc($nc(this->fCTDecl)->get(chunk))->get(index))->reset();
	}
	++this->fCTDeclIndex;
	return $nc($nc(this->fCTDecl)->get(chunk))->get(index);
}

$XSSimpleTypeDecl* XSDeclarationPool::getSimpleTypeDecl() {
	int32_t chunk = $sr(this->fSTDeclIndex, XSDeclarationPool::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fSTDeclIndex & (uint32_t)XSDeclarationPool::CHUNK_MASK);
	ensureSTDeclCapacity(chunk);
	if ($nc($nc(this->fSTDecl)->get(chunk))->get(index) == nullptr) {
		$nc($nc(this->fSTDecl)->get(chunk))->set(index, $($nc(this->dvFactory)->newXSSimpleTypeDecl()));
	} else {
		$nc($nc($nc(this->fSTDecl)->get(chunk))->get(index))->reset();
	}
	++this->fSTDeclIndex;
	return $nc($nc(this->fSTDecl)->get(chunk))->get(index);
}

$XSParticleDecl* XSDeclarationPool::getParticleDecl() {
	int32_t chunk = $sr(this->fParticleDeclIndex, XSDeclarationPool::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fParticleDeclIndex & (uint32_t)XSDeclarationPool::CHUNK_MASK);
	ensureParticleDeclCapacity(chunk);
	if ($nc($nc(this->fParticleDecl)->get(chunk))->get(index) == nullptr) {
		$nc($nc(this->fParticleDecl)->get(chunk))->set(index, $$new($XSParticleDecl));
	} else {
		$nc($nc($nc(this->fParticleDecl)->get(chunk))->get(index))->reset();
	}
	++this->fParticleDeclIndex;
	return $nc($nc(this->fParticleDecl)->get(chunk))->get(index);
}

$XSModelGroupImpl* XSDeclarationPool::getModelGroup() {
	int32_t chunk = $sr(this->fModelGroupIndex, XSDeclarationPool::CHUNK_SHIFT);
	int32_t index = (int32_t)(this->fModelGroupIndex & (uint32_t)XSDeclarationPool::CHUNK_MASK);
	ensureModelGroupCapacity(chunk);
	if ($nc($nc(this->fModelGroup)->get(chunk))->get(index) == nullptr) {
		$nc($nc(this->fModelGroup)->get(chunk))->set(index, $$new($XSModelGroupImpl));
	} else {
		$nc($nc($nc(this->fModelGroup)->get(chunk))->get(index))->reset();
	}
	++this->fModelGroupIndex;
	return $nc($nc(this->fModelGroup)->get(chunk))->get(index);
}

bool XSDeclarationPool::ensureElementDeclCapacity(int32_t chunk) {
	if (chunk >= $nc(this->fElementDecl)->length) {
		$set(this, fElementDecl, resize(this->fElementDecl, $nc(this->fElementDecl)->length * 2));
	} else if ($nc(this->fElementDecl)->get(chunk) != nullptr) {
		return false;
	}
	$nc(this->fElementDecl)->set(chunk, $$new($XSElementDeclArray, XSDeclarationPool::CHUNK_SIZE));
	return true;
}

$XSElementDeclArray2* XSDeclarationPool::resize($XSElementDeclArray2* array, int32_t newsize) {
	$var($XSElementDeclArray2, newarray, $new($XSElementDeclArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

bool XSDeclarationPool::ensureParticleDeclCapacity(int32_t chunk) {
	if (chunk >= $nc(this->fParticleDecl)->length) {
		$set(this, fParticleDecl, resize(this->fParticleDecl, $nc(this->fParticleDecl)->length * 2));
	} else if ($nc(this->fParticleDecl)->get(chunk) != nullptr) {
		return false;
	}
	$nc(this->fParticleDecl)->set(chunk, $$new($XSParticleDeclArray, XSDeclarationPool::CHUNK_SIZE));
	return true;
}

bool XSDeclarationPool::ensureModelGroupCapacity(int32_t chunk) {
	if (chunk >= $nc(this->fModelGroup)->length) {
		$set(this, fModelGroup, resize(this->fModelGroup, $nc(this->fModelGroup)->length * 2));
	} else if ($nc(this->fModelGroup)->get(chunk) != nullptr) {
		return false;
	}
	$nc(this->fModelGroup)->set(chunk, $$new($XSModelGroupImplArray, XSDeclarationPool::CHUNK_SIZE));
	return true;
}

$XSParticleDeclArray2* XSDeclarationPool::resize($XSParticleDeclArray2* array, int32_t newsize) {
	$var($XSParticleDeclArray2, newarray, $new($XSParticleDeclArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

$XSModelGroupImplArray2* XSDeclarationPool::resize($XSModelGroupImplArray2* array, int32_t newsize) {
	$var($XSModelGroupImplArray2, newarray, $new($XSModelGroupImplArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

bool XSDeclarationPool::ensureAttrDeclCapacity(int32_t chunk) {
	if (chunk >= $nc(this->fAttrDecl)->length) {
		$set(this, fAttrDecl, resize(this->fAttrDecl, $nc(this->fAttrDecl)->length * 2));
	} else if ($nc(this->fAttrDecl)->get(chunk) != nullptr) {
		return false;
	}
	$nc(this->fAttrDecl)->set(chunk, $$new($XSAttributeDeclArray, XSDeclarationPool::CHUNK_SIZE));
	return true;
}

$XSAttributeDeclArray2* XSDeclarationPool::resize($XSAttributeDeclArray2* array, int32_t newsize) {
	$var($XSAttributeDeclArray2, newarray, $new($XSAttributeDeclArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

bool XSDeclarationPool::ensureAttributeUseCapacity(int32_t chunk) {
	if (chunk >= $nc(this->fAttributeUse)->length) {
		$set(this, fAttributeUse, resize(this->fAttributeUse, $nc(this->fAttributeUse)->length * 2));
	} else if ($nc(this->fAttributeUse)->get(chunk) != nullptr) {
		return false;
	}
	$nc(this->fAttributeUse)->set(chunk, $$new($XSAttributeUseImplArray, XSDeclarationPool::CHUNK_SIZE));
	return true;
}

$XSAttributeUseImplArray2* XSDeclarationPool::resize($XSAttributeUseImplArray2* array, int32_t newsize) {
	$var($XSAttributeUseImplArray2, newarray, $new($XSAttributeUseImplArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

bool XSDeclarationPool::ensureSTDeclCapacity(int32_t chunk) {
	if (chunk >= $nc(this->fSTDecl)->length) {
		$set(this, fSTDecl, resize(this->fSTDecl, $nc(this->fSTDecl)->length * 2));
	} else if ($nc(this->fSTDecl)->get(chunk) != nullptr) {
		return false;
	}
	$nc(this->fSTDecl)->set(chunk, $$new($XSSimpleTypeDeclArray, XSDeclarationPool::CHUNK_SIZE));
	return true;
}

$XSSimpleTypeDeclArray2* XSDeclarationPool::resize($XSSimpleTypeDeclArray2* array, int32_t newsize) {
	$var($XSSimpleTypeDeclArray2, newarray, $new($XSSimpleTypeDeclArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

bool XSDeclarationPool::ensureCTDeclCapacity(int32_t chunk) {
	if (chunk >= $nc(this->fCTDecl)->length) {
		$set(this, fCTDecl, resize(this->fCTDecl, $nc(this->fCTDecl)->length * 2));
	} else if ($nc(this->fCTDecl)->get(chunk) != nullptr) {
		return false;
	}
	$nc(this->fCTDecl)->set(chunk, $$new($XSComplexTypeDeclArray, XSDeclarationPool::CHUNK_SIZE));
	return true;
}

$XSComplexTypeDeclArray2* XSDeclarationPool::resize($XSComplexTypeDeclArray2* array, int32_t newsize) {
	$var($XSComplexTypeDeclArray2, newarray, $new($XSComplexTypeDeclArray2, newsize));
	$System::arraycopy(array, 0, newarray, 0, $nc(array)->length);
	return newarray;
}

void XSDeclarationPool::reset() {
	this->fElementDeclIndex = 0;
	this->fParticleDeclIndex = 0;
	this->fModelGroupIndex = 0;
	this->fSTDeclIndex = 0;
	this->fCTDeclIndex = 0;
	this->fAttrDeclIndex = 0;
	this->fAttributeUseIndex = 0;
}

XSDeclarationPool::XSDeclarationPool() {
}

$Class* XSDeclarationPool::load$($String* name, bool initialize) {
	$loadClass(XSDeclarationPool, name, initialize, &_XSDeclarationPool_ClassInfo_, allocate$XSDeclarationPool);
	return class$;
}

$Class* XSDeclarationPool::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com